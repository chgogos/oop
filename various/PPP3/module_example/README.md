
brew install cmake ninja llvm
cmake -S . -B build -G Ninja -DCMAKE_CXX_COMPILER=$(brew --prefix llvm)/bin/clang++
cmake --build build
./build/app