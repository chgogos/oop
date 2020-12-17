import java.util.ArrayList;

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
        
        ArrayList<MyClass> a = new ArrayList<>();
        a.add(obj);
        a.add(obj);
        a.add(new MyClass(54));

        for(MyClass x: a){
            System.out.print(x.data + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        test();
    }

}
