public class Main {

	public static void main(String[] args) {
		Person d1 = new Person("Director 1");
		Person d2 = new Person("Director 2");
		Person a1 = new Person("Actor 1");
		Person a2 = new Person("Actor 2");
		Person a3 = new Person("Actor 3");
		Movie m1 = new Movie("Movie1");
		Movie m2 = new Movie("Movie2");

		m1.setDirector(d1);
		m2.setDirector(d2);
		m1.addCast(a1);
		m1.addCast(a2);
		m2.addCast(a2);
		m2.addCast(a3);

		m1.displayInfo();
		m2.displayInfo();
	}

}

/*
Movie1 directed by Director 1
Cast:
Actor 1
Actor 2
Movie2 directed by Director 2
Cast:
Actor 2
Actor 3
*/