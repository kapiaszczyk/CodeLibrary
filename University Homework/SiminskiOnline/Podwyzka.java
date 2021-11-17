// 4.1
package com.company;

import java.util.Scanner;
import java.util.Arrays;

public class Main {

    public static void main(String[] args) {
        // Variables
        final int LICZBA_PRACOWNIKOW = 10;
        double sumBefore = 0, sumAfter = 0, delta = 0;
        double array[] = new double[LICZBA_PRACOWNIKOW];
        Scanner scanner = new Scanner(System.in);

        // Main logic
        for (int i = 0; i < array.length; i++) {
            System.out.print("Podaj zarobki dla pracownika nr " + (i+1) + " :");
            array[i] = scanner.nextDouble();

            sumBefore += array[i];

            if (array[i] <= 1500) {
                array[i] = array[i] * 1.3;
            }
            else if (array[i] > 1500 && array[i] <= 3000) {
                array[i] = array[i] * 1.2;
            }
            else if (array[i] > 3000) {
                array[i] = array[i] * 1.1;
            }

            sumAfter += array[i];
        }

        delta = sumAfter - sumBefore;

        System.out.println("Suma przed: " + sumBefore);
        System.out.println("Suma po: " + sumAfter);
        System.out.println("Delta: " + delta);
        System.out.println("Zarobki pracowników po podwyżce: ");
        for (int i = 0 ; i < array.length; i++) {
            System.out.println((i +1) + ". " + array[i]);
        }
    }
}