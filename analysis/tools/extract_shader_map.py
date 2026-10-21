#!/usr/bin/env python3
"""Extract the original client's GLSL bundle from the bootstrap shader map.

Source: analysis/decompiled/bootstrap/offline/shaders/shader-map.bin
Format (see OfflineClientInit.initializeShaders): big-endian int count, then
repeated [int nameLen][name UTF-8][int sourceLen][source bytes].

Output: analysis/artifacts/original-shaders/<name>.glsl + index.json
"""
import json
import os
import struct
import sys

DEFAULT_SRC = "analysis/decompiled/bootstrap/offline/shaders/shader-map.bin"
DEFAULT_DST = "analysis/artifacts/original-shaders"


def main(src=DEFAULT_SRC, dst=DEFAULT_DST):
    data = open(src, "rb").read()
    off = 0

    def i32():
        nonlocal off
        value = struct.unpack_from(">i", data, off)[0]
        off += 4
        return value

    count = i32()
    if not 1 <= count <= 1024:
        raise SystemExit(f"invalid shader count: {count}")

    os.makedirs(dst, exist_ok=True)
    index = []
    for _ in range(count):
        name_len = i32()
        name = data[off:off + name_len].decode("utf-8")
        off += name_len
        source_len = i32()
        source = data[off:off + source_len]
        off += source_len

        path = os.path.join(dst, name.replace("/", "_") + ".glsl")
        open(path, "wb").write(source)
        index.append({"name": name, "size": source_len})
        print(f"{name:24s} {source_len:6d}  {path}")

    if off != len(data):
        raise SystemExit(f"trailing bytes: {off} != {len(data)}")

    json.dump(index, open(os.path.join(dst, "index.json"), "w"), indent=1)
    print(f"extracted {count} shaders into {dst}")


if __name__ == "__main__":
    main(*sys.argv[1:])
