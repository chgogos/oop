public class Bounds {
    public static void main(String[] args) {
        int a[] = new int[] { 0, 1, 2, 3, 4, 5 };
        for (int i = 0; i < 10; i++) {
            System.out.print(a[i] + " ");
        }
    }
}

/*
0 1 2 3 4 5 Exception in thread "main" java.lang.ArrayIndexOutOfBoundsException: Index 6 out of bounds for length 6
        at Bounds.main(Bounds.java:5)
*/