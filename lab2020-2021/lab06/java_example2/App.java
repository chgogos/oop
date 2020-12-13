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
