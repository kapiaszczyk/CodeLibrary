package com.company;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        System.out.print("Set the array length: ");
        int parameter = scanner.nextInt();

        Array testArray = new Array(parameter);

        System.out.print("Generate random numbers [false/true]: ");
        boolean isRandom = scanner.nextBoolean();

        testArray.generateData(isRandom);
        System.out.println("Sum: " + testArray.calculateSum());
        System.out.println("Average: " + (testArray.calculateAvg()%10));
        System.out.println("Median: " + testArray.calculateMedian());

        System.out.print("Print the array? [false/true]: ");
        boolean ifPrint = scanner.nextBoolean();
        if (ifPrint == true) {
            System.out.println("Printing the array below");
            testArray.printArray();
        }
    }
}
