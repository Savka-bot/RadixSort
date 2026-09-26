# Radix Sort Project (C / MinGW)

A C programming project demonstrating the **Radix Sort** (LSD) algorithm for string representation of 3-digit numbers.

The project features two distinct implementations of Radix Sort:
1. **Array-based Radix Sort** (`RadixSort`).
2. **Dynamic Linked Queue-based Radix Sort** (`RadixSortQueue`).

---

## 📁 Project Structure

```text
.
├── .vscode/                   # Visual Studio Code configuration files
│   ├── c_cpp_properties.json
│   ├── launch.json
│   └── settings.json
├── err.h                      # Error handling macros
├── lqueue.h / lqueue.c        # Dynamic linked queue implementation (LQueue)
├── radix.h / radix.c          # Radix Sort algorithms
├── test.c                     # Main entry point (data generation & tests)
└── test.exe                   # Precompiled Windows x64 binary
