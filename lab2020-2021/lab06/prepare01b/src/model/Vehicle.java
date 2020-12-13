package model;

public abstract class Vehicle {

		protected String registrationNumber;
		protected String ownerName;
		protected double cc;
		
		public Vehicle(String rn, String on, double cc) {
			registrationNumber = rn;
			ownerName = on;
			this.cc=cc;
		}
		
		public abstract double trafficTax();
}
