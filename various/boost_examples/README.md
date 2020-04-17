# Boost examples

<https://www.boost.org/>

## Boost.Any

## Boost.ProgramOptions

Χειρισμός ορισμάτων γραμμής εντολής με το Boost.ProgramOptions

* [boost01.cpp](boost1.cpp)

    ```sh
    $ g++ boost01.cpp -o boost01 -lboost_program_options
    $ ./boost01 --help
    Program options:
    -h [ --help ]         print info
    --option1 arg         dummy option parameter 1
    $ ./boost01 --option1 5
    Option1 parameter value set to 5
    ```

