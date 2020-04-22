# Boost examples

<https://www.boost.org/>

## Boost.Any

* [any1.cpp](any1.cpp)
* [any2.cpp](any2.cpp)

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

## Lexical cast

* [lexical_cast.cpp](lexical_cast.cpp)

## Bimap

* [bimap.cpp](bimap.cpp)

## String algorithms (trim, trim_all, to_upper)

* [string_algorithms.cpp](string_algorithms.cpp)

## Tokenizer

* [tokenizer1.cpp](tokenizer1.cpp)
* [tokenizer2.cpp](tokenizer2.cpp)
* [tokenizer3.cpp](tokenizer3.cpp)

## Units

* [units.cpp](units.cpp)