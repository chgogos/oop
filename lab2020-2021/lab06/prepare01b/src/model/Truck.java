package model;

public class Truck extends Vehicle {
	protected double maxWeight;
	
	public Truck(String rn, String on, double cc, double mw) {
		super(rn, on, cc);
		maxWeight = mw;
	}

	@Override
	public double trafficTax() {
		if(maxWeight <= 3000.0) {
			return 300.0;
		} else if (maxWeight<=6000.0) {
			return 400.0;
		} else {
			return 600.0;
		}
	}
	
	@Override
	public String toString() {
		return String.format("%s-%s-%.1f-%.1f",registrationNumber,ownerName,cc,maxWeight);
	}

}
