package com.company;

public class Main {

    public static void main(String[] args) {

        Punkt punkt = new Punkt();
        Punkt pomocniczyPunkt;

        pomocniczyPunkt = punkt.pobierzWspolrzedne();

        System.out.println("Przed ustawieniem wspolrzednych: ");
        System.out.println("Wspolrzedna x = " + pomocniczyPunkt.x);
        System.out.println("Wspolrzedna y = " + pomocniczyPunkt.y);

        punkt.ustawWspolrzedne (1, 10);
        pomocniczyPunkt = punkt.pobierzWspolrzedne();

        System.out.println("Po ustawieniu wspolrzednych: ");
        System.out.println("Wspolrzedna x = " + pomocniczyPunkt.x);
        System.out.println("Wspolrzedna y = " + pomocniczyPunkt.y);
    }
}
