package com.company;
import java.util.Scanner;

//public class Main {
//    public static void main(String[] args) {
//	System.out.println("Witaj świecie");
//    }
//}

//public class Main {
//    public static void main(String[] args) {
//        System.out.println(ExampleMethod());
//    }
//    private static int ExampleMethod() {
//        return 1;
//    }
//}

//public class Main {
//    public static void main(String args[]) {
//        Scanner scanner = new Scanner(System.in);
//        int a, b;
//        System.out.print("Set the number 1: ");
//        a = scanner.nextInt();
//        System.out.print("Set the number 2: ");
//        b = scanner.nextInt();
//        System.out.println((a+b));
//    }
//}

//public class Main {
//    public static void main(String args[]) {
//        Scanner scanner = new Scanner(System.in);
//        int a, b;
//        System.out.print("Set the number 1: ");
//        a = scanner.nextInt();
//        System.out.print("Set the number 2: ");
//        b = scanner.nextInt();
//
//        float result = a / b;
//        System.out.println(result);
//    }
//}

//public class Main {
//    public static void main(String args[]){
//
//        Scanner scanner = new Scanner(System.in);
//        System.out.println("Type in your age");
//        int age = scanner.nextInt();
//
//        if (age >= 18)  System.out.println("You are an adult.");
//        else System.out.println("You are not an adult.");
//
//    }
//}

public class Main {
    public static void main(String args[]) {

        Triangle myTriangle = new Triangle();

        Scanner scanner = new Scanner(System.in);
        System.out.print("A: ");
        myTriangle.a = scanner.nextInt();
        System.out.print("B: ");
        myTriangle.b = scanner.nextInt();
        System.out.print("C: ");
        myTriangle.c = scanner.nextInt();



        System.out.println( myTriangle.a + ", " +  myTriangle.b + ", " +  myTriangle.c);
        System.out.print(myTriangle.isTriangle(myTriangle.a, myTriangle.b, myTriangle.c));
    }
}