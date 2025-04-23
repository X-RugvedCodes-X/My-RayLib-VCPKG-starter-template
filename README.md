
---

# My-RayLib-VCPKG-Starter-Template

This project is a setup starter template for libraries associated with the VCPKG package manager. It provides an easy way to configure and build C++ projects that use RayLib and other libraries managed by VCPKG. Follow the steps below to set up the project and start developing.

## Prerequisites
   You need to have **VCPKG(as Package Manager)**, **CMake(as Build System Generator)** and **Ninja(A Build System Focussing on Speed)** installed on your System. To allow CMake to **automatically locate** the vcpkg toolchain file, you should set the `VCPKG_ROOT` environment variable to point to your vcpkg installation directory.

---

### ✅ Windows

1. Open the **Start Menu** → search for **"Environment Variables"** → click **Edit the system environment variables**.
2. Under **System Variables**, click **New**:
   - **Variable name**: `VCPKG_ROOT`
   - **Variable value**: `C:\path\to\your\vcpkg` (e.g., `C:\Users\ASUS\vcpkg`)
3. Click **OK**, then restart your terminal or IDE for the changes to take effect.

---

### ✅ Linux

1. Open your terminal and edit your shell configuration file (`~/.bashrc`, `~/.zshrc`, or `~/.profile`) depending on the shell you're using:
   ```bash
   export VCPKG_ROOT="/home/yourname/path/to/vcpkg"
   ```
2. Apply the changes:
   ```bash
   source ~/.bashrc   # or source ~/.zshrc
   ```

---

### ✅ macOS

1. Open Terminal
2. Edit your shell configuration file (`~/.zshrc` or `~/.bash_profile`):
   ```bash
   export VCPKG_ROOT="/Users/yourname/path/to/vcpkg"
   ```
3. Apply the changes:
   ```bash
   source ~/.zshrc   # or source ~/.bash_profile
   ```



## Setup Instructions

1. **Clone the repository**:
   ```bash
   git clone https://github.com/X-RugvedCodes-X/My-RayLib-VCPKG-starter-template.git
   ```

2. **Navigate to the project directory**:
   ```bash
   cd My-RayLib-VCPKG-starter-template
   ```

3. **Create a build directory: Before proceeding, create a directory where the build files will be stored**:
    ```bash
    mkdir build
    ```

4. **Run CMake to configure the build**:
   ```bash
   cmake -B build -G "Ninja"
   ```

5. **Build the project**:
   ```bash
   cmake --build build
   ```

6. **Locate the executable**:
   You will find your executable named `myraylib.exe` in the `build/` directory.

7. **Run the executable**:
   ```bash
   .\build\myraylib.exe
   ```

8. **You are good to go!**
  ### **Steps Recap:**
1. Install CMake, VCPKG and Ninja (Ignore, If done already).
2. Clone the repository.
3. Create a Build Directory `mkdir build`.
4. Run `cmake -B build -G "Ninja"` to generate build files.
5. Run `cmake --build build` to build the project.
6. Run the executable to start.


---
