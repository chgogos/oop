public class Example1 {

    public static void test() {
        int a[][] = new int[3][4];
        for (int i = 0; i < a.length; i++) {
            for (int j = 0; j < a[i].length; j++) {
                System.out.printf("%4d", a[i][j]);
            }
            System.out.println();
        }
    }
    
    public static void main(String[] args) {
		test();
	}

}
