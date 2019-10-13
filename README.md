## CmakeGTestintegration

Simple project for including GTest in an existing CMake project

The ``gtest`` folder includes the CMake files required to download and build GTest as part of your project.
It is possible to select which tag/branch/commit GTest to use, by setting the ``GIT TAG`` property in the 
``gtest/CMakeLists.gtest.in`` file

To build GTest as part of your project, you can just add ``add_subdirectory(gtest)`` to the existing CMakeLists.txt file.
