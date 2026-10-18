# OpenGrim

**[English](README.md) · [Polski](README.pl.md)**

对 "Grim 4.4" Minecraft 实用客户端（Fabric 1.21.11）的净室（clean-room）开源重实现，采用 GPL-3.0 许可证。

## 构建与运行

**环境要求：** JDK 21（任意 21.x）、Git。无需 IDE。

```bash
git clone https://github.com/sequence3260/OpenGrim.git
cd OpenGrim
./gradlew build
```

> **镜像：** 如果 GitHub 仓库不可用，可使用 GitLab 镜像（`https://gitlab.com/sequence3260/OpenGrim`）。本仓库以单一快照形式发布 — 没有可克隆的 git 历史，仅包含当前文件树。

生成的 mod jar 位于 `build/libs/opengrim-0.1.0.jar`。使用方法：

1. 安装 [Fabric Loader](https://fabricmc.net/use/)（Minecraft 1.21.11）和 [Fabric API](https://modrinth.com/mod/fabric-api)（0.139.4 或更新）。
2. 将 jar 复制到 `.minecraft/mods/`。
3. 启动游戏 — **Right Shift** 打开 Click GUI；左键点击切换模块，右键展开设置；关闭 GUI 时自动保存配置。

## 这是什么

- **162 个模块**，分为 5 个类别（Combat、Movement、Render、Utility、World）— 战斗辅助、移动工具、ESP/渲染覆盖层、世界工具
- 完整的 Click GUI（滑块、模式、颜色、按键绑定设置）、HUD 覆盖层、JSON 配置持久化、每个模块的主/副快捷键
- 事件驱动架构：通过类型化事件总线 + Fabric mixin 实现渲染、数据包发送/接收、攻击、鼠标和相机钩子
- **100% 原创代码。** 不包含也不执行原客户端的任何内容 — 本仓库只提供源代码。

## 保真度状态

**总体保真度：78.1%** — 2026-10-17 全量审计中全部 162 个模块评分的平均值
（中位数 80%，范围 45–100%；36 个模块达到 90% 或以上）。每个模块按**已恢复
表面**评分（反编译可见逻辑 + 已恢复常量）；原客户端原生/VM 层中的行为不计入
分母，并逐模块列出。逐模块评分、缺口分级与差异日志见
[`analysis/docs/PARITY.md`](analysis/docs/PARITY.md)。

## 构建方法（净室逆向工程）

仅使用静态分析 — 从未将原客户端作为游戏运行，也未复制任何游戏代码：

1. **反编译** — 原始 payload 的全部 1,111 个混淆类均已反编译（Vineflower + CFR 回退）并重映射为可读的 Yarn 映射（`1.21.11+build.6`）。
2. **常量池破解** — 原客户端将每个字符串/数字字面量加密在原生代码之后。一个沙盒化的 JVM 驱动（网络隔离、在 Wine 下、仅解密路径）恢复了 **23,147 个字面量** — 真实的设置名称、范围、默认值和后缀。
3. **原生处理器映射** — JVMTI 代理记录了所有 **6,610 个原生方法绑定**（涵盖 446 个类：哪个类 → 哪个原生函数），并反编译了全部 6,603 个处理器（0 失败）。
4. **恶意软件分析** — 扫描了每个二进制层（主 DLL、exit-hook、stage2、启动器）：**未发现网络、持久化、键盘记录或注入迹象。**

**统计数据：** 反编译 1,111 个类 · 恢复 23,147 个常量 · 映射 6,610 个原生处理器并反编译 6,603 个（446 个类）· 重实现 162 个模块（73 个完整移植 / 89 个部分移植 — 2026-10-17 全量审计；总体保真度 78.1%）· 6,610/6,615 个原生声明已核对。

## 文档

| 文档 | 内容 |
|---|---|
| [`analysis/docs/PARITY.md`](analysis/docs/PARITY.md) | 每个模块的保真度账本（162 行，状态 + 证据） |
| [`analysis/specs/`](analysis/specs/) | 每个模块的行为规范 + 框架契约 |
| [`analysis/ghidra/triage.md`](analysis/ghidra/triage.md) | 原生二进制分析（导出、保护层、清洁结论） |
| [`analysis/docs/PROGRESS.md`](analysis/docs/PROGRESS.md) | 完整工作日志 |
| [`analysis/docs/HANDOFF.md`](analysis/docs/HANDOFF.md) | 环境与逆向工程方法（历史文档；当前状态见 PROGRESS.md） |

## 局限与差距

- **14 个模块在行为依赖不可还原原生代码的地方与原版存在差异**：基于已恢复的设置表面 + 观察到的结构实现。每处差异都在保真度账本（[`analysis/docs/PARITY.md`](analysis/docs/PARITY.md) 的 "Divergences" 章节）中标注日期与原始文件+行号证据。
- 原客户端的某些设置类型（带预设的颜色选择器、方块/实体列表编辑器）被简化为最接近的可用控件。
- 原客户端的渲染着色器（chams 特效、china hat）以原版风格覆盖层近似。
- 原客户端的许可证/认证/遥测机制被有意移除 — 重实现版本完全离线。
- 原客户端的配置格式是专有二进制编解码器；本客户端使用纯 JSON 代替（与原配置不向后兼容）。

## 仓库内容

本仓库是**自包含的** — 理解和继续这项工作所需的一切都在文件树中，而不是 git 历史中（本仓库以单一快照形式发布）：

| 路径 | 内容 |
|---|---|
| `src/` | Mod 源码（Fabric 1.21.11，Java 21） |
| `analysis/decompiled/` | 原客户端的完整反编译结果（Vineflower/CFR，Yarn 映射，大小写安全） |
| `analysis/jars/` | 从原客户端每个二进制层恢复的 jar 材料 |
| `analysis/ghidra/` | 原生二进制分析、解密后的 payload 转储、反编译的原生处理器、Ghidra continuations |
| `analysis/traces/` | 运行时追踪产物（不含原始批量日志） |
| `analysis/specs/` | 每个模块的行为规格 + 框架契约 |
| `analysis/docs/` | 保真度账本、工作日志、交接/方法论说明 |
| `analysis/gui-src/`、`analysis/artifacts/` | 原 GUI 参考反编译 + 参考截图 |
| `analysis/tools/` | 项目中使用的分析、解密与转储工具 |

**外部资源**（未放入 git — 超过代码托管平台的 100 MiB 限制）：完整研究包 `open-grim-publish.tar.zst` 包含三个解密 payload 转储（`jna-decrypted-v2.dll`、`jna-decrypted-sweep.dll`、`jna-decrypted-invoke.dll` — `analysis/ghidra/dumps/` 中仅跟踪其小体积的 `manifest.json` 辅助文件）以及原始加密原生 payload（`binaries/native/jna1.21.11`，可用 `analysis/grim-hashes.txt` 校验）。下载地址：`https://archive.org/details/open-grim-publish`。

## 后续方向（提升保真度）

总体保真度为 78.1%（[`analysis/docs/PARITY.md`](analysis/docs/PARITY.md)）。静态分析已经穷尽 — 其余行为都藏在原客户端的原生/VM 层之后，因此接下来的工作是**动态的**：

1. **原生层运行时转储** — 价值最高的下一步。将 `analysis/tools/` 中的 JVMTI harness 与 tracer（沙箱环境见 [`analysis/docs/HANDOFF.md`](analysis/docs/HANDOFF.md)）挂到运行中的原客户端，转储原生处理器的参数、返回值与状态。将这些转储与 `analysis/ghidra/` 中的处理器映射对照，可以恢复静态反编译无法企及的行为 — 包括 PARITY.md 的 Divergences 部分中逐项列出的 14 个原生分歧模块。
2. **按模块的运行时追踪** — 扩展 `analysis/traces/`（2026-10-17 的运行），对每个模块做完整捕获，找回静态常量池破解（已恢复 23,147 个字面量）遗漏的常量与流程。
3. **完成 89 个部分移植模块** — 各模块状态、差距分级与证据见 PARITY.md；移植工作流见 [`.opencode/skills/port-module/SKILL.md`](.opencode/skills/port-module/SKILL.md)。
4. **1:1 渲染效果** — chams/ChinaHat 风格的着色器目前是近似实现；运行时捕获原版着色器参数即可实现精确移植。
5. **重新运行保真度审计** — 方法论见 [`analysis/docs/HANDOFF.md`](analysis/docs/HANDOFF.md)；更新 PARITY.md 各行以及本 README 顶部的总体数值。
6. **卫生工作** — 在全新机器上验证 `./gradlew build` 干净构建，补齐测试与 CI（目前没有），审查从原客户端恢复的字体图集 / 图标字形的许可。
