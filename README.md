CBash-C-Test
============

Simple program for testing [CBash](https://github.com/lojack5/CBash)'s C compatibility.  Provided with a VS 2013 project file.

To create the your own project file:
 1. Create a new Win32 Console Application, select Empty Project.
 2. Edit the project properties:
   1. Change `Configuration Properties -> C/C++ -> Advanced -> Compile As` to `Compile as C Code (/TC)`.
   2. Under `Configuration Properties -> VC++ Directories`:
     * Add the path to CBash's `/include/cbash` under `Include Directories`
     * Add the path to CBash's `/Debug` output folder under `Library Directories` in the `Debug` configuration.
     * Add the path to CBash's `/Release` output folder under `Library Directories` in the `Release` configuration.

To Run:
 1. Make sure `CBash.dll` is in the same location as the exe from this project.

