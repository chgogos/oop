package ui;

import java.util.Scanner;

import model.Car;
import model.Truck;
import model.Vehicle;

public class App {

	public static double totalTax(Vehicle[] vehicles) {
		double sum = 0.0;
		for (Vehicle v : vehicles) {
			sum += v.trafficTax();
		}
		return sum;
	}

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		Vehicle vehicles[] = new Vehicle[3];
		for (int i = 0; i < vehicles.length; i++) {
			String choice;
			do {
				System.out.print("Enter type of vehicle (C=Car/T=Truck):");
				choice = scanner.next();
				if (choice.equalsIgnoreCase("C")) {
					System.out.print("Enter registration number:");
					String rn = scanner.next();
					System.out.print("Enter owner name:");
					String on = scanner.next();
					System.out.print("Enter cubic centimeters:");
					double cc = scanner.nextDouble();
					System.out.print("Enter number of doors:");
					int nod = scanner.nextInt();
					vehicles[i] = new Car(rn, on, cc, nod);
				} else if (choice.equalsIgnoreCase("T")) {
					System.out.print("Enter registration number:");
					String rn = scanner.next();
					System.out.print("Enter owner name:");
					String on = scanner.next();
					System.out.print("Enter cubic centimeters:");
					double cc = scanner.nextDouble();
					System.out.print("Enter max weight:");
					double mw = scanner.nextDouble();
					vehicles[i] = new Truck(rn, on, cc, mw);
				}
			} while (!choice.equalsIgnoreCase("C") && !choice.equalsIgnoreCase("T"));
		}
		scanner.close();

		for (int i = 0; i < vehicles.length; i++) {
			System.out.println("Vehicle " + vehicles[i] + " tax:" + vehicles[i].trafficTax());
		}

		double tax = totalTax(vehicles);
		System.out.println("TOTAL TAX=" + tax);
	}

}

/*
 Enter type of vehicle (C=Car/T=Truck):C
Enter registration number:32632636
Enter owner name:Nikos
Enter cubic centimeters:1200
Enter number of doors:4
Enter type of vehicle (C=Car/T=Truck):T
Enter registration number:32643634
Enter owner name:Petros
Enter cubic centimeters:4000
Enter max weight:5000
Enter type of vehicle (C=Car/T=Truck):C
Enter registration number:14374743
Enter owner name:Maria
Enter cubic centimeters:1600
Enter number of doors:5
Vehicle 32632636-Nikos-1200,0-4 tax:160.0
Vehicle 32643634-Petros-4000,0-5000,0 tax:400.0
Vehicle 14374743-Maria-1600,0-5 tax:200.0
TOTAL TAX=760.0

*/ 
