package model;

public class Car extends Vehicle {

	private int numberOfDoors;

	public Car(String rn, String on, double cc, int nod) {
		super(rn, on, cc);
		numberOfDoors = nod;

	}

	@Override
	public double trafficTax() {
		if (cc <= 1000) {
			return 140.0;
		} else {
			return 140.0 + (int) ((cc - 1000) / 100.0) * 10.0;
		}
	}

	@Override
	public String toString() {
		return String.format("%s-%s-%.1f-%d",registrationNumber,ownerName,cc,numberOfDoors);
	}
}
