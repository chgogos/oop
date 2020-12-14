// Christos Gogos - 2020
// Dept. of Informatics and Telecommunications (Arta-Greece)
// University of Ioannina

import java.util.ArrayList;

class MyClass {
    public int data;

    public MyClass(int d) {
        data = d;
        System.out.println("MyClass object created:" + this);
    }
}

public class Example1 {

    public static void ArrayBoundsCheckExample() {
        int a[] = new int[10];
        for (int i = 0; i < 10; i++) { // changing < to <= leads to Runtime exception
                                       // java.lang.ArrayIndexOutOfBoundsException: Index 10 out of bounds for length
                                       // 10
            System.out.print(a[i] + " ");
        }
        System.out.println();
    }

    public static void TwoDimensionalArrayExample() {
        int a[][] = new int[3][4];
        for (int i = 0; i < a.length; i++) {
            for (int j = 0; j < a[i].length; j++) {
                System.out.printf("%4d", a[i][j]);
            }
            System.out.println();
        }
    }

    public static void ConstructObjectsExample() {
        // construction of a MyClass object
        MyClass obj = new MyClass(42);
        System.out.println(obj.data);

        System.out.println("-".repeat(20));

        // construction of an array of MyClass objects
        MyClass a[] = new MyClass[5];
        for (int i = 0; i < a.length; i++) {
            a[i] = new MyClass(i + 1);
        }
        for (int i = 0; i < a.length; i++) {
            System.out.print(a[i].data + " ");
        }
        System.out.println();

        System.out.println("-".repeat(20));

        // construction of an ArrayList of MyClass objects
        ArrayList<MyClass> list = new ArrayList<>();
        list.add(new MyClass(100));
        list.add(new MyClass(200));
        list.add(new MyClass(300));
        list.add(new MyClass(400));
        for (MyClass x : list) {
            System.out.print(x.data + " ");
        }
    }

    public static void main(String[] args) {
        ArrayBoundsCheckExample();
        System.out.println("#".repeat(20));
        TwoDimensionalArrayExample();
        System.out.println("#".repeat(20));
        ConstructObjectsExample();
    }
}

/*
0 0 0 0 0 0 0 0 0 0 
####################
   0   0   0   0
   0   0   0   0
   0   0   0   0
####################
MyClass object created:MyClass@7ef20235
42
--------------------
MyClass object created:MyClass@27d6c5e0
MyClass object created:MyClass@4f3f5b24
MyClass object created:MyClass@15aeb7ab
MyClass object created:MyClass@7b23ec81
MyClass object created:MyClass@6acbcfc0
1 2 3 4 5
--------------------
MyClass object created:MyClass@5f184fc6
MyClass object created:MyClass@3feba861
MyClass object created:MyClass@5b480cf9
MyClass object created:MyClass@6f496d9f
100 200 300 400
*/