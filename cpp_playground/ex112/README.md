# Ανακατεύθυνση εισόδου

Εισαγωγή 5 ονομάτων και βαθμών σπουδαστών από τον χρήστη. Εμφάνιση των ονομάτων σε ταξινομημένη σειρά μαζί με το βαθμό.

[data.txt](./data.txt)

## Α' τρόπος (με το  <)

[input_redirection.cpp](./input_redirection.cpp)

```
$ g++ input_redirection.cpp -o input_redirection
$ input_redirection < data.txt
```

## Β' τρόπος (με τη freopen() της C)

[input_redirection2.cpp](./input_redirection.cpp)

```
$ g++ input_redirection2.cpp -o input_redirection2
$ input_redirection2
```

## Γ' τρόπος (fstream)

[input_redirection3.cpp](./input_redirection.cpp)

```
$ g++ input_redirection3.cpp -o input_redirection3
$ input_redirection3
```
