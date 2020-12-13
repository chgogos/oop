# Example 3

Πολυμορφική ιεραρχία 

* Δημιουργία interface Shape.
* Δημιουργία 3 κλάσεων Triangle, Rectangle, Circle που υλοποιεί το interface Shape.
* Πίνακας με αντικείμενα που υλοποιούν το Shape και το καθένα μπορεί να δεχθεί οποιοδήποτε αντικείμενο είτε Triangle, είτε Rectangle, είτε Circle.

## Κώδικας

* [App.java](./App.java)

## Μεταγλώττιση και εκτέλεση

    $ javac App.java
    $ java App
    Rectangle.draw() Rectangle@85ede7b
    Triangle.draw() Triangle@5674cd4d
    Circle.draw() Circle@63961c42