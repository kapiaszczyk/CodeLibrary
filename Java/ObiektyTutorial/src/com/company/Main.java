package com.company;

public class Main {
    public static void main(String[] args) {

        Punkt przykladowyPunkt = new Punkt();
        przykladowyPunkt.x = 100;
        przykladowyPunkt.y = 100;

        przykladowyPunkt.wyswietlWspolrzedne();

        System.out.println("----");

        System.out.println("Metoda zwracająca wartość x: " + przykladowyPunkt.pobierzX());
        System.out.println("Metoda zwracająca wartość y: " + przykladowyPunkt.pobierzY());
    }
}
