package Examples;

class Arithmetic {
    void arithmetic() {
        System.out.println("Arithmetic Operations:");
    }
}

class Addition extends Arithmetic {
    void addition() {
        int a = 10, b = 20;
        int sum = a + b;
        System.out.println("Addition: " + sum);
    }
}

class Subtraction extends Arithmetic {
    void subtraction() {
        int a = 20, b = 10;
        int diff = a - b;
        System.out.println("Subtraction: " + diff);
    }
}

class Multiplication extends Arithmetic {
    void multiplication() {
        int a = 10, b = 20;
        int product = a * b;
        System.out.println("Multiplication: " + product);
    }
}

class Division extends Arithmetic {
    void division() {
        int a = 20, b = 10;
        int quotient = a / b;
        System.out.println("Division: " + quotient);
    }
}

public class ArithmeticMain {
    public static void main(String[] args) {

        Addition add = new Addition();
        add.arithmetic();
        add.addition();

        Subtraction sub = new Subtraction();
        sub.arithmetic();
        sub.subtraction();

        Multiplication mul = new Multiplication();
        mul.arithmetic();
        mul.multiplication();

        Division div = new Division();
        div.arithmetic();
        div.division();
    }
}
