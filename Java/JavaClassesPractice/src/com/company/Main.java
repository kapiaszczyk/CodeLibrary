package com.company;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        // Write a program to print the area of a rectangle by creating a class named 'Area' having two methods.
        // First method named as 'setDim' takes length and breadth of rectangle as parameters and the second method named as 'getArea' returns the area of the rectangle.
        // Length and breadth of rectangle are entered through keyboard.

        Scanner scan = new Scanner(System.in);
        System.out.println("Set the dimension A: ");
        int dimensionA = scan.nextInt();
        System.out.println("Set the dimension B: ");
        int dimensionB = scan.nextInt();

        Rectangle Area = new Rectangle();

        System.out.println("Area: " + Area.getArea(dimensionA, dimensionB));

    }
}
