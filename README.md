# C++ CMake Learning Project

这是一个用于学习 Linux C++、CMake、Ninja、GDB 和 Git 的基础项目，也是端侧 AI 学习路线的起点。

## 当前功能

程序模拟一个简单的传感器阈值判断过程：

1. 获取传感器数值；
2. 计算传感器数值与阈值的差值；
3. 判断传感器数值是否超过阈值；
4. 输出计算结果和设备状态。

## 开发环境

- Windows 11
- WSL2
- Ubuntu 24.04 LTS
- GCC/G++ 13
- CMake 3.28
- Ninja 1.11
- GDB 15
- Visual Studio Code

## 项目结构

```text
cpp_hello/
├── .vscode/
│   ├── launch.json
│   ├── settings.json
│   └── tasks.json
├── src/
│   └── main.cpp
├── .gitignore
├── CMakeLists.txt
└── README.md
```

## 配置 Debug 版本

```bash
cmake -S . -B build/debug -G Ninja -DCMAKE_BUILD_TYPE=Debug
```

## 编译

```bash
cmake --build build/debug
```

## 运行

```bash
./build/debug/cpp_hello
```

## 示例输出

```text
Sensor value: 28
Threshold: 30
Difference: -2
Status: normal
```

## VS Code 调试

项目已经提供：

- `.vscode/tasks.json`：在调试前自动运行 CMake 配置和编译；
- `.vscode/launch.json`：使用 GDB 启动和调试程序。

在 VS Code 中按 `F5` 即可自动编译并启动调试。

## 学习目标

- 掌握 Linux 常用命令；
- 理解 C++ 编译和链接过程；
- 掌握 CMake 和 Ninja 的基本用法；
- 掌握 GDB 和 VS Code 断点调试；
- 掌握 Git 和 GitHub 基本工作流；
- 为后续 ONNX Runtime、TensorRT 和端侧 AI 部署建立基础。