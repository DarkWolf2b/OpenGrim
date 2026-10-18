# OpenGrim

**[English](README.md) · [中文](README.zh-CN.md)**

Czystorodne (clean-room), otwartoźródłowe (GPL-3.0) odtworzenie klienta "Grim 4.4" dla Minecraft (Fabric 1.21.11).

## Budowa i uruchomienie

**Wymagania:** JDK 21 (dowolne 21.x), Git. Bez IDE.

```bash
git clone https://github.com/sequence3260/OpenGrim.git
cd OpenGrim
./gradlew build
```

> **Mirry:** GitLab (`https://gitlab.com/sequence3260/OpenGrim`) jest zapasowym źródłem, jeśli repozytorium GitHub przestanie być dostępne. Repozytorium jest publikowane jako pojedynczy snapshot — nie ma historii git do sklonowania, tylko aktualne drzewo plików.

Gotowy mod trafia do `build/libs/opengrim-0.1.0.jar`. Użycie:

1. Zainstaluj [Fabric Loader](https://fabricmc.net/use/) dla Minecraft 1.21.11 oraz [Fabric API](https://modrinth.com/mod/fabric-api) (0.139.4 lub nowsze).
2. Skopiuj jar do `.minecraft/mods/`.
3. Uruchom grę — **Right Shift** otwiera Click GUI; lewy przycisk przełącza moduł, prawy rozwija ustawienia; konfiguracja zapisuje się przy zamknięciu GUI.

## Co to jest

- **162 moduły** w 5 kategoriach (Combat, Movement, Render, Utility, World) — wspomagacze walki, narzędzia ruchu, nakładki ESP/render, narzędzia świata
- Click GUI z pełnymi widgetami ustawień (suwaki, tryby, kolory, bininde), nakładka HUD, trwała konfiguracja JSON, główne + zapasowe przypisanie klawiszy per moduł
- Architektura zdarzeniowa: hooki renderu, pakietów (wysyłanie/odbieranie), ataku, myszy i kamery przez typowaną magistralę zdarzeń + mixiny Fabric
- **100% oryginalnego kodu.** Żadna część oryginalnego klienta nie jest dołączona ani wykonywana — to repozytorium zawiera wyłącznie kod źródłowy.

## Status wierności

**Łączna wierność: 78,1%** — średnia ze wszystkich 162 ocen wierności per moduł
z pełnego audytu z 2026-10-17 (mediana 80%, zakres 45–100%; 36 modułów na
poziomie 90% lub wyższym). Każdy moduł jest oceniany na **odzyskanej
powierzchni** (logika widoczna w dekompilacji + odzyskane stałe); zachowanie
zamknięte w natywnej/VM-owej warstwie oryginału jest wyłączone z mianownika i
wyszczególnione per moduł. Oceny per moduł, klasyfikacja luk i dziennik różnic:
[`analysis/docs/PARITY.md`](analysis/docs/PARITY.md).

## Jak powstało (czystorodny inżynieria odwrotna)

Wyłącznie analiza statyczna — oryginalny klient **nigdy nie został uruchomiony jako gra**, a kod gry nie został skopiowany:

1. **Dekompilacja** — wszystkie 1,111 zburowanych klas oryginału zdekompilowano (Vineflower + CFR jako fallback) i przemapsowano na czytelne mapowania Yarn (`1.21.11+build.6`).
2. **Łamanie puli stałych** — oryginał szyfruje każdy literał (tekst/liczbę) za pomocą kodu natywnego. Piaskownicowy sterownik JVM (bez sieci, pod Wine, tylko ścieżka deszyfrująca) odzyskał **23,147 literałów** — prawdziwe nazwy ustawień, zakresy, domyślne wartości i przyrostki.
3. **Mapowanie natywnych handlerów** — agent JVMTI zarejestrował wszystkie **6,610 powiązań metod natywnych** (446 klas: która klasa → która funkcja natywna), a wszystkie 6,603 handlery zdekompilowano (0 niepowodzeń).
4. **Analiza malware** — przeskanowano każdą warstwę binarną (główny DLL, exit-hook, stage2, launcher): **brak wskaźników sieci, persystencji, keyloggera czy iniekcji.**

**Statystyki:** 1,111 zdekompilowanych klas · 23,147 odzyskanych stałych · 6,610 zmapowanych i 6,603 zdekompilowanych handlerów natywnych (446 klas) · 162 reimplementowane moduły (73 w pełni odtworzone / 89 częściowych — pełny audyt 2026-10-17; łączna wierność 78,1%) · 6,610/6,615 deklaracji natywnych rozliczonych.

## Dokumentacja

| Dokument | Zawartość |
|---|---|
| [`analysis/docs/PARITY.md`](analysis/docs/PARITY.md) | rejestr wierności per moduł (162 wiersze, status + dowody) |
| [`analysis/specs/`](analysis/specs/) | specyfikacja zachowania per moduł + kontrakt frameworka |
| [`analysis/ghidra/triage.md`](analysis/ghidra/triage.md) | analiza binariów natywnych (eksporty, warstwy ochrony, werdykt) |
| [`analysis/docs/PROGRESS.md`](analysis/docs/PROGRESS.md) | pełny dziennik prac |
| [`analysis/docs/HANDOFF.md`](analysis/docs/HANDOFF.md) | środowisko + metodologia RE (historyczny; aktualny stan w PROGRESS.md) |

## Ograniczenia i luki

- **14 modułów odbiega od oryginału tam, gdzie zachowanie żyje w nieodwracalnym kodzie natywnym** — zaimplementowano je na podstawie odzyskanej powierzchni ustawień + zaobserwowanej struktury. Każda różnica jest wyszczególniona — z datami i dowodami (plik + wiersz) — w rejestrze wierności ([`analysis/docs/PARITY.md`](analysis/docs/PARITY.md), sekcja "Divergences").
- Niektóre typy ustawień oryginału (selektory kolorów z presetami, edytory list bloków/encji) uproszczono do najbliższego obsługiwanego widgetu.
- Shader y renderujące oryginału (efekty chams, china hat) przybliżono nakładkami w stylu vanilla.
- Mechanizmy licencji/auth/telemetrii oryginału celowo pominięto — klient jest w pełni offline.
- Format konfiguracji oryginału to zastrzeżony kodeks binarny; ten klient używa zwykłego JSON (brak zgodności wstecznej z konfiguracjami oryginału).

## Zawartość repozytorium

To repozytorium jest **samowystarczalne** — wszystko, co potrzebne do zrozumienia i kontynuacji pracy, znajduje się w drzewie plików, a nie w historii git (repozytorium jest publikowane jako pojedynczy snapshot):

| Ścieżka | Zawartość |
|---|---|
| `src/` | Kod źródłowy moda (Fabric 1.21.11, Java 21) |
| `analysis/decompiled/` | Pełna dekompilacja oryginalnego klienta (Vineflower/CFR, mapowania Yarn, odporne na wielkość liter) |
| `analysis/jars/` | Odzyskany materiał jar z każdej warstwy binarnej oryginału |
| `analysis/ghidra/` | Triage binarny, zrzuty odszyfrowanego payloadu, zdekompilowane handlery natywne, continuations z Ghidry |
| `analysis/traces/` | Artefakty śledzenia runtime (surowe logi wykluczone) |
| `analysis/specs/` | Specyfikacja zachowania per moduł + kontrakt frameworka |
| `analysis/docs/` | Rejestr parity, dziennik pracy, notatki przekazania/metodologii |
| `analysis/gui-src/`, `analysis/artifacts/` | Referencyjna dekompilacja GUI oryginału + zrzuty ekranu |
| `analysis/tools/` | Narzędzia analizy, deszyfrowania i dumpowania użyte w projekcie |

**Zasoby zewnętrzne** (nie w git — ponad limit 100 MiB na forge'ach): pełny pakiet badawczy `open-grim-publish.tar.zst` zawiera trzy zrzuty odszyfrowanego payloadu (`jna-decrypted-v2.dll`, `jna-decrypted-sweep.dll`, `jna-decrypted-invoke.dll` — w `analysis/ghidra/dumps/` są tylko ich małe pliki `manifest.json`) oraz oryginalny zaszyfrowany payload natywny (`binaries/native/jna1.21.11`, weryfikacja: `analysis/grim-hashes.txt`). Pobieranie: `https://archive.org/details/open-grim-publish`.

## Następne kroki / znana praca

- [ ] Zweryfikować czystą budowę na świeżej maszynie i przypiąć dokładne wersje narzędzi (JDK 21, Gradle, Fabric)
- [ ] Domknąć luki parity — zagregowana zgodność wynosi 78,1%; luki per moduł i 14 modułów rozbieżnych na poziomie natywnym są wyszczególnione w [`analysis/docs/PARITY.md`](analysis/docs/PARITY.md)
- [ ] Dodać testy i CI (obecnie brak)
- [ ] Powtórzyć pełny audyt parity po dalszych portach (metodologia w [`analysis/docs/HANDOFF.md`](analysis/docs/HANDOFF.md))
- [ ] Wgrać pakiet zewnętrzny na archive.org — identyfikator elementu musi być dokładnie `open-grim-publish`, aby powyższy link działał
- [ ] Sprawdzić licencjonowanie atlasów czcionek / glifów ikon odzyskanych z oryginalnego klienta
