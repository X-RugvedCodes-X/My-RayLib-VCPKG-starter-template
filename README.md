
---

# My-RayLib-VCPKG-Starter-Template

This project is a setup starter template for libraries associated with the VCPKG package manager. It provides an easy way to configure and build C++ projects that use RayLib and other libraries managed by VCPKG. Follow the steps below to set up the project and start developing.

## Prerequisites
**You need to have CMake and vcpkg installed on your system.**

## Setup Instructions

1. **Clone the repository**:
   ```bash
   git clone https://github.com/X-RugvedCodes-X/My-RayLib-VCPKG-starter-template.git
   ```

2. **Navigate to the project directory**:
   ```bash
   cd My-RayLib-VCPKG-starter-template
   ```

3. **Edit the `CMakeLists.txt` file**:
   Open the `CMakeLists.txt` file and replace the following line:
   ```cmake
   set(CMAKE_TOOLCHAIN_FILE "your/path/to/vcpkg/scripts/buildsystems/vcpkg.cmake")
   ```
   with the correct path to your `vcpkg.cmake` file (usually located inside the `vcpkg/scripts/buildsystems` directory).

4. **Run CMake to configure the build**:
   ```bash
   cmake -B build
   ```

5. **Build the project**:
   ```bash
   cmake --build build
   ```

6. **Locate the executable**:
   You will find your executable named `myraylib.exe` in the `build/Debug/` directory.

7. **Run the executable**:
   ```bash
   .\build\Debug\myraylib.exe
   ```

8. **You are good to go!**
  ### **Steps Recap:**
1. Install CMake and vcpkg.
2. Clone the repository.
3. Configure the `CMakeLists.txt` with the correct vcpkg path.
4. Run `cmake -B build` to generate build files.
5. Run `cmake --build build` to build the project.
6. Run the executable to start.


---
