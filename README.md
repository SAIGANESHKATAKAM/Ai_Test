# pipeline_copilot_example

Simple multi-folder C++ project scaffold using CMake.

Build and run (Windows example using command prompt or PowerShell):

```
mkdir build
cd build
cmake ..
cmake --build . --config Release
ctest --output-on-failure
.
\path\to\Release\pipeline_app.exe
```

Project layout:
- include/: public headers
- src/: library sources and sub-CMakeLists
- app/: executable
- tests/: small test executable integrated with CTest
