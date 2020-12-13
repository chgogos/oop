public class App {
    public static void main(String[] args) {
        Shape a[] = new Shape[3];
        a[0] = new Rectangle();
        a[1] = new Triangle();
        a[2] = new Circle();

        for(int i=0;i<3;i++){
            a[i].draw();
        }
    }
}

interface Shape {
    public void draw();
}

class Rectangle implements Shape {
    public void draw() {
        System.out.println("Rectangle.draw() " + this);
    }
}

class Circle implements Shape {
    public void draw() {
        System.out.println("Circle.draw() " + this);
    }
}

class Triangle implements Shape {
    public void draw() {
        System.out.println("Triangle.draw() " + this);
    }
}

/*
Rectangle.draw() Rectangle@85ede7b
Triangle.draw() Triangle@5674cd4d
Circle.draw() Circle@63961c42
*/