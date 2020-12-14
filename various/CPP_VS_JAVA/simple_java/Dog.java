public class Dog {
    private String name;
    private String species;

    public Dog(String n, String s) {
        name = n;
        species = s;
    }

    public void makeSound() {
        System.out.println("Dog " + name + " of species " + species + " barks");
    }

    public static void main(String[] args) {
        Dog obj = new Dog("Adelle", "Maltese");
        obj.makeSound();
    }
}

/*
Dog Adelle of species Maltese barks
*/
