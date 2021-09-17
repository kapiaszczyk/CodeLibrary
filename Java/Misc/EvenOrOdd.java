// Create a function that takes an integer as an argument and returns "Even" for even numbers or "Odd" for odd numbers.

public class EvenOrOdd {
    public static String even_or_odd(int number) {
        if (number % 2 == 0) return "Even";
        return "Odd";
    }
}

// or 

public class EvenOrOdd {
    public static String even_or_odd(int number) {
        return (number & 1) == 0 ? "Even" : "Odd";
    }
}
