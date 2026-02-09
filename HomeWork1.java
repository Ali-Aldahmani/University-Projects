import java.util.Scanner;
public class HomeWork1 {
    public static void main(String[] args) {
        Scanner mark = new Scanner(System.in);
        /*
        Question 1: (1 mark)
Write a program that reads three exam scores from the user, calculates the average score, and displays the average.
         */
        int Math, Java, Physics;
        // Title Q1
        System.out.println("Welcome to GPA(Average) calculator");
        // take some inputs from user
        System.out.println("Enter your mark in Math(0-100): ");
        Math = mark.nextInt();
        System.out.println("Enter your mark in Java(0-100): ");
        Java = mark.nextInt();
        System.out.println("Enter your mark in Physics(0-100): ");
        Physics = mark.nextInt();
        // calculate the average
        int average;
        average = (Math + Java + Physics) / 3;
        System.out.println("Your GPA (The average of your mark is): " + average);

        /*
        Question 2: (2 marks)
            Write a Java program that:
              •	Reads the current temperature in Celsius.
              •	Classifies the temperature using a multiway if–else.
              •	Prints the temperature category.
            Classification Rules: 30 or above → Hot, 20 to 29 → Warm, 10 to 19 → Cool, Below 10 → Cold.
         */
        // Title Q2
        System.out.println("Welcome to temperature decision");
        Scanner temp = new Scanner(System.in);
        int temperature;
        System.out.println("Enter the current temperature in Celsius: ");
        temperature = temp.nextInt();
        // The rules
        if (temperature < 10) {
            System.out.println("It is cold!");
        } else if (temperature <= 19 && temperature >= 10)  {
            System.out.println("The weather is cool!");
        } else if (temperature <= 29 && temperature >= 20) {
            System.out.println("The weather is warm");
        } else {
            System.out.println("The weather is HOT!");
        }

        /*
        Question 3: (2 marks)
            Write a Java program that:
              •	Reads two numbers from the user.
              •	Reads a mathematical operator (+, -, *, /).
              •	Uses a switch statement to perform the selected operation.
              •	Displays the result.
         */
        // Title Q3
        System.out.println("Welcome to simple calculator");
        Scanner calc = new Scanner(System.in);
        int num1, num2, result;
        System.out.println("Enter your num1: ");
        num1 = calc.nextInt();
        System.out.println("Enter your num2: ");
        num2 = calc.nextInt();
        char operator;
        System.out.println("Enter your operator: ");
        // Explanation for the user
        System.out.println("Enter + for addition");
        System.out.println("Enter - for subtraction");
        System.out.println("Enter * for Multiplication");
        System.out.println("Enter / for Division");
        operator = calc.next().charAt(0);
        switch (operator) {
            case '+':
                result = num1 + num2;
                System.out.println(num1 + " + " + num2 + " = " + result);
                break;
            case '-':
                result = num1 - num2;
                System.out.println(num1 + " - " + num2 + " = " + result);
                break;
            case '*':
                result = num1 * num2;
                System.out.println(num1 + " * " + num2 + " = " + result);
                break;
            case '/':
                if (num2 != 0)
                    System.out.println("Result = " + (num1 / num2));
                else
                    System.out.println("Error: Division by zero!");
                break;
            default:
                System.out.println("Invalid operator!");
        }
    }
}