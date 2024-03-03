While setting up the unit_test CMakeLists.txt, various things remain to be
understood completely. Things that were faced during set up:

- The package `thread` needed to be included because there was a problem when
  running `make` with the error `lpthread::thread` was not found.

- When creating the executable for the unit tests in CMakeLists.txt, I was
  trying to find a way to include the test cases (source files) in a separate
  CMakeLists.txt and then link them to the top CMakeLists.txt but couldn't. I
  had to `add_library()` of the source files in `testCases` directory
  CMakeLists.txt and then link that target to the top CMakeLists.txt.

- Had some issues with multiple definitions of the `Player` class but I found
  out that one you include the `Player.cpp` in any of the unit_test source
  files, there is no need to include it again because you only need to define
  the .cpp file `one time!`

- I also tried to create a `main.cpp` in which I would call `RUN_ALL_TESTS()`
  but I couldn't get it to work. I had to include that `main()` function at the
  end of one of the source test files in order to run all the tests.

- Again, the issue with multiple definitions appeared. Why do I have to include
  the file `Game.cpp` in `testGame.cpp` but not in `testInput.cpp`?
