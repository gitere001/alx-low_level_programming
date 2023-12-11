Dynamic Libraries README
This directory provides information about dynamic libraries on Unix-like systems.

What is a Dynamic Library?
A dynamic library is a collection of pre-compiled functions that multiple programs can share. It allows for efficient use of system resources by storing common functions in a separate file.

How Does It Work?
When a program starts, the dynamic linker looks for shared libraries in specified locations. Dynamic libraries are loaded into memory when needed, enabling code reuse among multiple programs.

How to Create a Dynamic Library
Creating a dynamic library involves writing functions in a source code file and compiling them into a shared library file. This file is then linked with programs that want to use the functions.

How to Use a Dynamic Library
Programs can use dynamic libraries by referencing them during compilation and linking. The dynamic linker loads the necessary library into memory at runtime, allowing for modular and efficient code sharing.

The $LD_LIBRARY_PATH Environment Variable
$LD_LIBRARY_PATH is an environment variable that specifies additional directories to search for shared libraries before the default system locations.

Using $LD_LIBRARY_PATH
To use $LD_LIBRARY_PATH, set it in your shell to include the directories where your shared libraries are located.

Differences Between Static and Shared Libraries
Static libraries are linked with a program at compile time, making the executable larger. Shared libraries are linked at runtime, allowing for more modular and efficient code sharing.

Basic Usage of nm, ldd, and ldconfig
nm: Displays symbol information from object files or binaries.

ldd: Prints shared library dependencies of a binary.

ldconfig: Updates the cache of dynamic linker run-time bindings.