# 🚀 C++ Training Repository

This repository is used as a starting point for the C++ training.

## 🔨 Required tools

To start C++ development the following tools are useful/required:

* A recent C++ Compiler (e.g. GCC 12, Clang 14)
* Git
* CMake
* A code editor (e.g. VS Code)

## 🏁 Getting started

To get started please try to follow the steps:

* Clone the repository including its submodules

  ```sh
  git clone --recurse-submodules [repository_url]
  ```

* Open the cloned repository in your favorite editor (e.g. Visual Studio Code)

  ```sh
  cd [repository_directory]
  code .
  ```

* Execute the CMake *Configure* step (within your editor or the command line)

  ```sh
  ❯ cmake -B build -S .

  -- The CXX compiler identification is Clang 18.1.3
  -- Detecting CXX compiler ABI info
  -- Detecting CXX compiler ABI info - done
  -- Check for working CXX compiler: /usr/bin/c++ - skipped
  -- Detecting CXX compile features
  -- Detecting CXX compile features - done
  -- The C compiler identification is GNU 13.2.0
  -- Detecting C compiler ABI info
  -- Detecting C compiler ABI info - done
  -- Check for working C compiler: /usr/bin/cc - skipped
  -- Detecting C compile features
  -- Detecting C compile features - done
  -- Performing Test CMAKE_HAVE_LIBC_PTHREAD
  -- Performing Test CMAKE_HAVE_LIBC_PTHREAD - Success
  -- Found Threads: TRUE  
  -- Configuring done (1.0s)
  -- Generating done (0.0s)
  -- Build files have been written to: /home/marius/dev/cpp-schulung/build
  ```

* Execute the CMake *Build* step (within your editor or the command line)

  ```sh
  ❯ cmake --build build

  [  7%] Building CXX object src/CMakeFiles/TrainingLib.dir/TrainingLib.cpp.o
  [ 14%] Linking CXX static library libTrainingLib.a
  [ 14%] Built target TrainingLib
  [ 21%] Building CXX object src/CMakeFiles/Training.dir/main.cpp.o
  [ 28%] Linking CXX executable Training
  [ 28%] Built target Training
  [ 35%] Building CXX object googletest/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o
  [ 42%] Linking CXX static library ../../lib/libgtest.a
  [ 42%] Built target gtest
  [ 50%] Building CXX object googletest/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o
  [ 57%] Linking CXX static library ../../lib/libgmock.a
  [ 57%] Built target gmock
  [ 64%] Building CXX object googletest/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o
  [ 71%] Linking CXX static library ../../lib/libgmock_main.a
  [ 71%] Built target gmock_main
  [ 78%] Building CXX object googletest/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o
  [ 85%] Linking CXX static library ../../lib/libgtest_main.a
  [ 85%] Built target gtest_main
  [ 92%] Building CXX object tests/CMakeFiles/TrainingLibTests.dir/TrainingLibTests.cpp.o
  [100%] Linking CXX executable TrainingLibTests
  [100%] Built target TrainingLibTests
  ```

## 🔍 Useful VS Code Extensions

The following extensions for Visual Studio Code might be useful for C++ development:

* ms-vscode.cpptools
* ms-vscode.cpptools-extension-pack
* ms-vscode.cmake-tools
* xaver.clang-format
* twxs.cmake

* matepek.vscode-catch2-test-adapter
* streetsidesoftware.code-spell-checker

* mhutchie.git-graph
* eamodio.gitlens
* sonarsource.sonarlint-vscode
