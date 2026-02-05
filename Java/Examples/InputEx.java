package Examples;

import java.util.Scanner;

public class InputEx 
{
    public static void main(String[] args) {
         Scanner scanner = new Scanner(System.in);
            System.out.print("Enter your name: ");
            String name = scanner.nextLine();
            System.out.println("Hello, " + name + "!");  
    }   
}
