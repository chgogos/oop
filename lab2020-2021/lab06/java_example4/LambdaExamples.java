import java.util.Arrays;
import java.util.Comparator;

interface MyLambda {
    int square(int x);
}

public class LambdaExamples {
   

    // how to define the type of a lambda
    public static void lambdaExample1() {
        MyLambda f = (y)-> {return y*y;};

        for(int i=0;i<10;i++){
            System.out.println(f.square(i));
        }
    }

    // sort using a lambda 
    public static void lambdaExample2() {
        Integer a[]={5,2,3,4,1,7,8,1};
        Arrays.sort(a);
        System.out.println(java.util.Arrays.toString(a));
        System.out.println("-".repeat(20));
        Arrays.sort(a, (Integer first, Integer second)-> {return Integer.compare(first, second);});
        System.out.println(java.util.Arrays.toString(a));

    }

    public static void main(String[] args) {
        lambdaExample1();
        System.out.println("#".repeat(20));
        lambdaExample2();
        System.out.println("#".repeat(20));
    }

}
