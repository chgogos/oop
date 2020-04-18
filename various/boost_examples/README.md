# Boost examples

<https://www.boost.org/>

## Boost.Any

* [any.cpp](any.cpp)

## Boost.ProgramOptions

Χειρισμός ορισμάτων γραμμής εντολής με το Boost.ProgramOptions

* [program_options.cpp](program_options.cpp)

    ```sh
    $ g++ program_options.cpp -o program_options -lboost_program_options
    $ ./program_options --help
    Program options:
    -h [ --help ]         print info
    --option1 arg         dummy option parameter 1
    $ ./program_options --option1 5
    Option1 parameter value set to 5
    ```

