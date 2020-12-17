class MyClass {
    public int data;

    public MyClass(int d) {
        data = d;
        System.out.println("MyClass object created:" + this);
    }
}

public class Example1 {

    public static void test() {
        MyClass obj = new MyClass(42);
        System.out.println(obj.data);
    }

    public static void main(String[] args) {
        test();
    }

}
