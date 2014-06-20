CBash-C-Test
============

Simple program for testing [CBash](https://github.com/lojack5/CBash)'s C compatibility.  Provided with a VS 2013 project file.

To create the your own project file:
 1. Create a new Win32 Console Application, select Empty Project.
 2. Edit the project properties: change `Configuration Properties -> C/C++ -> Advanced -> Compile As` to `Compile as C Code (/TC)`.
 3. Add the CBash include directory to `Configuration Properties -> VC++ Directories -> Include Directories`

To build:
 1. Copy `CBash.lib` from the CBash output directory to this project's source directory.
 2. Build

To Run:
 1. Make sure `CBash.dll` is in the same location as the exe from this project.

