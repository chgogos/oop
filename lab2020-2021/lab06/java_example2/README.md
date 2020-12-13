# Example 2

Πολυμορφική ιεραρχία 

* Δημιουργία βασικής αφηρημένης κλάσης Shape.
* Δημιουργία 3 υποκλάσεων της Shape: Triangle, Rectangle, Circle.
* Πίνακας με αντικείμενα Shape που το καθένα μπορεί να δεχθεί οποιοδήποτε αντικείμενο είτε Triangle, είτε Rectangle, είτε Circle.

## Κώδικας

* [Shape.java](./Shape.java)
* [Triangle.java](./Triangle.java)
* [Rectangle.java](./Rectangle.java)
* [Circle.java](./Circle.java)  
* [App.java](./App.java)

## Μεταγλώττιση και εκτέλεση

    $ javac App.java Triangle.java Rectangle.java Circle.java
    $ java App
    Rectangle.draw() Rectangle@85ede7b
    Triangle.draw() Triangle@5674cd4d
    Circle.draw() Circle@63961c42