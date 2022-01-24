// Meteorolog w domu i zagrodzie. Każdego dnia tygodnia meteorolog notuje odczyt temperatury.
// Po zgromadzeniu odczytów z 7-u dni dokonuje on analizy temperatur.
// Wyznacza temperaturę średnią, najniższą wśród dodatnich oraz najwyższą wśród ujemnych
// a także numery dni w których te temperatury wystąpiły.
// Proszę napisać program, który pozwoli na wczytanie siedmiu odczytów temperatur (liczby rzeczywiste) i wyznaczy:
//		temperaturę średnią,
//		najniższą wśród dodatnich oraz numer dnia w którym to nastąpiło,
//		najwyższą wśród ujemnych oraz numer dnia w którym to nastąpiło.

//		Wartości te mają zostać wyprowadzone do strumienia wyjściowego programu.
//		Można założyć, że temperatury nie będą większe niż 100 st. C i mniejsze niż -100 st. C.
//		Dni numerujemy w taki sposób, że poniedziałek ma numer 1, wtorek nr 2 itd.
//		Proszę tak napisać program, aby łatwo było zmieniać liczbę dni w kodzie programu.

/*

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
*/

//Proszę napisać funkcję int wypisz( char [] [] tab ) { ... }, której zadaniem jest wypisanie do strumienia wyjściowego programu zawartości dwuwymiarowej tablicy przekazanej parametrem tab.
//Format wyprowadzanych danych powinien odpowiadać
//zawartości tablicy – w kolejnych wyprowadzanych wierszach powinny pojawiać się znaki zapisane w kolejnych wierszach tablicy. Rezultatem funkcji powinna być liczba znaków w tablicy tab, nie będących spacją.

/*public class Main {

	static int wypisz(char [] [] tab ) {

		String newString = " string ";

		for (int i = 0; i < tab.length; i++) {
			for (int j = 0; j < tab[i].length; j++) {
				System.out.printf("%-5c", tab[i][j]);
			}
				System.out.printf("%n");
		}

		return(5);

	}

	public static void main(String[] args) {

		int[][] tablica = new int[5][5];

		char[][] tab = new char[][] {{'a','b'}, {'c','d'}, {'e','d'}, {'g','h'}, {'i','j'}};

		wypisz(tab);

	}
}*/

/*
Zakładamy, że rozpatrujemy dwuwymiarową, kwadratową tablicę znaków (liczba wierszy jest równa liczbie kolumn). Proszę napisać funkcje (otrzymujące taką kwadratową tablicę jako parametr):
void backSlash( char [][] tab ) { … } — funkcja wpisuje znaki ‘*’ na głównej przekątnej (diagonalnej) tablicy tab, pozostałe elementy tablicy są wypełnione znakami spacji.
*/

package com.company;

import java.util.Arrays;

/*public class Main {

	static double bestScore(double [][] score) {

		double sum = 0, bestSum = Double.MAX_VALUE;

		for (int i = 0; i < (score.length); i++) {
			for (int j = 0; j < (score[i].length); j++) {
				if (j == score[i].length-1) {
					score[i][j] = sum;
					if (sum < bestSum) bestSum = sum;
					sum = 0;
					break;
				}
					sum = sum + score[i][j];
			}
		}
		return bestSum;
	}

	public static void main(String[] args) {

		double[][] score = {{5, 5, 5, 300}, {10, 10, 10, 0}, {1, 1, 1, 555}};
		System.out.println(bestScore(score));
		System.out.println(Arrays.deepToString(score)); // returns nested array as a string
	}
}*/

import java.util.Arrays;

public class Main {

	static double bestScore(double [][] scoreTable) {

		double sum = 0, bestSum = Double.MAX_VALUE;


		for (int i = 0; i < (scoreTable.length); i++ ) {
			for (int j = 0; j < (scoreTable[i].length); j++) {
				if (j == (scoreTable[i].length - 1)) {
					scoreTable[i][j] = sum;
					if (sum < bestSum) bestSum = sum;
					sum = 0;
					break;
				}
				sum = sum + scoreTable[i][j];
			}
		}
		return(bestSum);
	}

	public static void main(String[] args) {

		double[][] scoreTable = {{1,1,1, 55}, {12,2331,123, 525}, {13,12,123, 5445}, {112,13,11, 555}, {51,15,51, 5445}, {133,13,331, 555}};
		System.out.println(bestScore(scoreTable));
		System.out.println(Arrays.deepToString(scoreTable)); // returns nested array as a string

	}
}

// Zdefiniuj klase ktora bedzie posiadala jako pole tablice jednowymiarowa
// (bez wielkosci x góry okreslonej, trzeba ja utworzyx w kostruktorze obiektu i wielkość tablicy zostanie przekazana jako parametr konstruktora).
// klasa będzie posiadała funkcje która liczy średnia max min mediana.