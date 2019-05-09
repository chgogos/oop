# Visual Studio Code (εκτέλεση και αποσφαλμάτωση)

## Εγκατάσταση extensions

* C/C++ (ms-vscode.cpptools)
* C++ Intellisense (austin.code-gnu-global)
* Code Runner (formulahendry.code-runner)

## Εκτέλεση κώδικα μέσα από το Visual Studio Code μέσω του Code Runner

* επιλογή του αρχείου π.χ. (main1.cpp) και Ctrl + Alt + N

## Εκτέλεση κώδικα μέσα από το Visual Studio Code μέσω του Code Runner (C++11, C++14, C++17)

* Settings (ctrl + ,) και εισαγωγή στο settings.json (C:\Users\<usernmame>\AppData\Roaming\Code\User\settings.json)

    ```text
    {
    "code-runner.runInTerminal": true,
    "code-runner.saveAllFilesBeforeRun": true,
    "code-runner.executorMap": {
            "c": "cd $dir && gcc -std=c99 $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
            "cpp": "cd $dir && g++ -std=c++17 $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
        },
    ...
    }

## Debugging κώδικα μέσα από το Visual Studio Code

* F5 (δημιουργούνται τα αρχεία launch.json και tasks.json)
  * Select environment: C++ (GDB/LLDB)
  * Select configuration: g++ build and debug active file
  * Προσθήκη του "-std=c++17" στα args του tasks.json όπως στο παράδειγμα που ακολουθεί
