// 2.4

package com.company;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
    	
    	// Variables
		double time, sum = 0, minTime = Double.MAX_VALUE, maxTime = 0, avgTime = 0;
		Scanner scanner = new Scanner(System.in);
		int recordNumber = 0;

		// Main logic
		System.out.println("Set time: ");
		for (int i = 0;; i++) {
			System.out.print("<< "+ (i + 1) + " >> ");
			time = scanner.nextDouble();
			if (time == 0) break;
			recordNumber++;
			sum += time;
			if (time > maxTime) maxTime = time;
			if (time < minTime) minTime = time;
		}
		
		avgTime = sum / recordNumber;

		// Output
		System.out.println("Average: " + avgTime + " s");
		System.out.println("Min: " + minTime + " s");
		System.out.println("Max: " + maxTime + " s");
    }
}

// 2.5

package com.company;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

    	// Variables
		Scanner scanner = new Scanner(System.in);
		int count2 = 0, count3 = 0, count4 = 0, count5 = 0, temp, counter = 0;
		final int studentNumber = 15;

		System.out.println("Set the grades");

		// Main logic
		for (int i = 0;;i++) {
			if (counter == 15) break;
			System.out.print("<<" + (i+1) + ">> ");
			temp = scanner.nextInt();
			switch (temp) {
				case 2:
					count2++;
					counter++;
					break;
				case 3:
					count3++;
					counter++;
					break;
				case 4:
					count4++;
					counter++;
					break;
				case 5:
					count5++;
					counter++;
					break;
				default:
					System.out.println("Only numbers from 2 to 5 allowed.");
					i--;
					break;
			}
		}

		// Output
		System.out.println("2: " + count2);
		System.out.println("3: " + count3);
		System.out.println("4: " + count4);
		System.out.println("5: " + count5);

    }
}

// 2.6
package com.company;
import java.util.Scanner;

public class Main {

	static void calculateAverage() {
		System.out.println("I just got executed!");
	}

	public static void main(String[] args) {

		// Variables and constants
		final int HOW_MANY_DAYS = 7;

		double HighestPossible = Double.MIN_VALUE;
		double LowestPossible = Double.MAX_VALUE;
		double averageTemperature = 0;

		int dayOfHighest = 0, dayOfLowest = 0;

		Scanner scanner = new Scanner(System.in);

		// Create array called daysArray that stores "Day" objects
		Day[] daysArray = new Day[HOW_MANY_DAYS];

		// Main logic
		for (int i = 0; i <= (HOW_MANY_DAYS - 1); i++) {

			// create a Day object
			daysArray[i] = new Day();
			System.out.print("Set day number " + (i + 1) + " temperature: ");
			daysArray[i].temperature = scanner.nextDouble();
			
			// Set the lowest temperature
			if (daysArray[i].temperature >= 0 && daysArray[i].temperature < LowestPossible) {
				LowestPossible = daysArray[i].temperature;
				dayOfLowest = i;
			}
			
			// Set the highest temperature
			else if (daysArray[i].temperature < 0 && daysArray[i].temperature > HighestPossible) {
				HighestPossible = daysArray[i].temperature;
				dayOfHighest = i;
			}


		}

		// Calculate the Average (could have i been a method?)
		for (int i = 0; i <= (HOW_MANY_DAYS - 1); i++) {
			// sum up the days
			averageTemperature = averageTemperature + daysArray[i].temperature;
			// in the last loop, divide the sum by the number of days
			if (i == 6) averageTemperature = averageTemperature / HOW_MANY_DAYS;
		}


		// Output for the user
		System.out.println("On day " + (dayOfLowest + 1) + " there was lowest positive temperature, reading " + daysArray[dayOfLowest].temperature);
		System.out.println("On day " + (dayOfHighest + 1) + " there was highest negative temperature, reading " + daysArray[dayOfHighest].temperature);
		System.out.println("The average temperature is " + averageTemperature);


	}

}
