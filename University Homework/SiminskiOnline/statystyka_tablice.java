// Program statystyka przychodów z użyciem tablic
package com.company;

import java.util.Scanner;
import java.util.Arrays;

public class Main {

    public static void main(String[] args) {
        // Variables
        int liczbaMiesiecy = 0;
        double min = Double.MAX_VALUE, max = Double.MIN_VALUE, suma = 0, avg = 0;
        Scanner scanner = new Scanner(System.in);

        System.out.print("Podaj dla ilu miesięcy chcesz obliczyć statystyki: ");
        liczbaMiesiecy = scanner.nextInt();

        // Create the array storing the data
        double array[] = new double[liczbaMiesiecy];

        // Main logic
        for (int i = 0; i < liczbaMiesiecy ; i++) {
            // Data input
            System.out.print("Podaj przychod na miesiąc " + (i+1) + ": ");
            array[i] = scanner.nextDouble();
            // Calculate sum, set min and max
            suma += array[i];
            if (array[i] < min) {
                min = array[i];
            }
            if (array[i] > max) {
                max = array[i];
            }
        }

        // Calculate the avg and sort the array
        avg = suma / liczbaMiesiecy;
        Arrays.sort(array);

        // Output for the user
        System.out.println("Min: " + min);
        System.out.println("Max: " + max);
        System.out.println("Sum: " + suma);
        System.out.println("Avg: " + avg);

        System.out.println("Dochód rosnąco: ");
        for (int i = 0; i < liczbaMiesiecy; i++) {
            System.out.println((i+1) + ". " + array[i]);
        }
    }
}