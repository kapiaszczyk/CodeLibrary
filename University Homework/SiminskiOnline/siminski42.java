// siminski 4.2

package com.company;

import java.util.Scanner;
import java.lang.Math;

public class Main {

    public static void main(String[] args) {
        // Variables
        //int iloscTowarow = 0;
        double suma = 0;
        double sumaPodwyzek = 0, sumaObnizek = 0;
        double delta = 0;

        Scanner scanner = new Scanner(System.in);


        // Set iloscTowarow
        System.out.println("Ile towarów w promocji?");
        System.out.print(">> ");
        int iloscTowarow =  scanner.nextInt();

        Towar[] tabTowar = new Towar[iloscTowarow];

        for (int i = 0; i < tabTowar.length; i++) {
            tabTowar[i] = new Towar();
            System.out.print("Podaj cenę dla towaru nr " + (i + 1) + ": ");
            tabTowar[i].cenaPrzed = scanner.nextDouble();
            suma += tabTowar[i].cenaPrzed;
        }

        double avg = suma / iloscTowarow;

        for (int i = 0; i < tabTowar.length; i++) {
            if (tabTowar[i].cenaPrzed > avg) {
                tabTowar[i].cenaPo = tabTowar[i].cenaPrzed * 0.9;
                sumaObnizek += tabTowar[i].cenaPrzed - tabTowar[i].cenaPo;
            }
            if (tabTowar[i].cenaPrzed < avg) {
                tabTowar[i].cenaPo = tabTowar[i].cenaPrzed * 1.15;
                sumaObnizek += tabTowar[i].cenaPo - tabTowar[i].cenaPrzed;
            }
        }

        // Output for the user
        System.out.printf("%7s | %7s | %7s |\n", "CenaPrzed", "CenaPo", "Zmiana");

        for (int i = 0; i < iloscTowarow; i++) {
            System.out.printf("%7d | %7d | %7s |\n", tabTowar[i].cenaPrzed, tabTowar[i].cenaPo, tabTowar[i].Zmiana(tabTowar[i].cenaPrzed, tabTowar[i].cenaPo));
        }

        delta = Math.abs(sumaObnizek - sumaPodwyzek);


        System.out.println("Suma obniżek: " + sumaObnizek);
        System.out.println("Suma podwyżek: " + sumaPodwyzek);
        System.out.println("Delta: " + delta);


    }
}