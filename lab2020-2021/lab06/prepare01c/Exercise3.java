// Christos Gogos - 2020
// Dept. of Informatics and Telecommunications (Arta-Greece)
// University of Ioannina

import java.util.*;

public class Exercise3 {
    public static <T> int count_occurrences(ArrayList<T> a, T key) {
        int c = 0;
        for (T x : a) {
            if (x.equals(key)) {
                c++;
            }
        }
        return c;
    }

    public static void main(String[] args) {
        ArrayList<Integer> a = new ArrayList<Integer>();
        a.add(5);
        a.add(42);
        a.add(5);
        a.add(42);
        a.add(9);
        System.out.println(count_occurrences(a, 42));

        ArrayList<Double> b = new ArrayList<>();
        b.add(2.7);
        b.add(3.7);
        b.add(2.7);
        b.add(6.7);
        b.add(2.7);
        System.out.println(count_occurrences(b, 2.7));

        ArrayList<Point> c = new ArrayList<>();
        c.add(new Point(3, 7));
        c.add(new Point(2, 7));
        c.add(new Point(1, 1));
        c.add(new Point(3, 7));
        c.add(new Point(1, 1));
        System.out.println(count_occurrences(c, new Point(1, 1)));
    }
}

class Point {
    public int x;
    public int y;

    Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    @Override
    public boolean equals(Object obj) {
        if (obj == null)
            return false;
        if (obj == this)
            return true;
        return (this.x == ((Point)obj).x && this.y==((Point)obj).y);
    }
}

/*
2
3
2
*/