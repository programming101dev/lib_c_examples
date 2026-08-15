# lib_c examples

Small executable examples for `lib_c`.

## Build

```bash
git clone https://github.com/programming101dev/lib_c_examples.git
cd lib_c_examples
cmake -S . -B build -DCMAKE_C_COMPILER=clang -DP101_BUILD_LEVEL=1
cmake --build build
```

Workspace compiler discovery writes other available choices to
`supported_c_compilers.txt`.
