import java.util.ArrayList;
import java.util.List;

public class Movie {
	private String title;
	private int year;
	private Person director;
	private List<Person> actors;
	
	public Movie(String title) {
		this.title=title;
		actors= new ArrayList<>();
	}
	
	public void setDirector(Person p) {
		director=p;
	}
	
	void addCast(Person p) {
		actors.add(p);
	}
	
	public void displayInfo() {
		System.out.printf("%s directed by %s\n", title, director.getName());
		System.out.println("Cast:");
		for(Person p: actors) {
			System.out.println(p.getName());
		}
	}
}
