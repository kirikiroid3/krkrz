# Kirikiri Z

> Kirikiri Z is a fork project of Kirikiri 2.

The repository splitting has been completed in general.
Each author plans to add their respective plugins later.
This time, external libraries within the "external" folder have been modularized as submodules.
If any folder within "external" is empty, please update the submodules.
In the future, there may be changes to the directory structure due to the development of the Android version.

The plugins and others that were all included in a single repository have been removed, and now only the source code of the main body is included in this repository.
Please refer to the "last_hodgepodge_repository" branch at [last_hodgepodge_repository](https://github.com/krkrz/krkrz/tree/last_hodgepodge_repository) for the old directory structure.

A repository containing everything similar to the conventional structure is now available at [krkrz_dev](https://github.com/krkrz/krkrz_dev).
Each plugin and others are referenced as submodules and managed independently.

## How to build

### 1. install vcpkg

Installing vcpkg is a two-step process: first, clone the repo, then run the bootstrapping script to produce the vcpkg binary. The repo can be cloned anywhere, and will include the vcpkg binary after bootstrapping as well as any libraries that are installed from the command line. It is recommended to clone vcpkg as a submodule for CMake projects, but to install it globally for MSBuild projects. If installing globally, we recommend a short install path like: C:\src\vcpkg or C:\dev\vcpkg, since otherwise you may run into path issues for some port build systems.

Step 1: Clone the vcpkg repo

`git clone https://github.com/Microsoft/vcpkg.git`

Make sure you are in the directory you want the tool installed to before doing this.

Step 2: Run the bootstrap script to build vcpkg

`.\vcpkg\bootstrap-vcpkg.bat`

Install libraries for your project
`vcpkg install [packages to install]`

### 2. using vcpkg install package dependencies

- freetype `.\vcpkg.exe install freetype freetype:x64-windows`
- bzip2 `.\vcpkg.exe install bzip2 bzip2:x64-windows`
- libjpeg-turbo `.\vcpkg.exe install libjpeg-turbo libjpeg-turbo:x64-windows`
- jxrlib `.\vcpkg.exe install jxrlib jxrlib:x64-windows`
- oniguruma `.\vcpkg.exe install oniguruma oniguruma:x64-windows`

### 3. integrate the vcpkg into visual studio

`.\vcpkg integrate install`
After this, all installed libraries should already be discoverable by IntelliSense and usable in code without additional configuration.

### 4. install nasm

`choco install nasm`

put nasm into the system environment `C:\Program Files\NASM`
