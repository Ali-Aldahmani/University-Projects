import java.util.Scanner;

public class W3L2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a positive radius: ");
        double radius = sc.nextDouble();
        double result;

        if (radius >= 0) {
            result = Math.pow(radius, 2) * Math.PI;
            System.out.println(result);
        }

        System.out.println("Enter any number: ");
        int num = sc.nextInt();

        if (num % 5 == 0) {
            System.out.println("Multiple of 5");
        }

        if (num % 6 == 0) {
            System.out.println("Multiple of 6");
        }

        System.out.println("Enter the value of radius: ");
        double rad = sc.nextDouble();

        if (rad >= 0) {
            result = Math.pow(rad, 2) * Math.PI;
            System.out.println(result);
        }
        else {
            System.out.println("negative value");
        }

        int a, b;
        System.out.println("Enter a value of A: ");
        a = sc.nextInt();
        System.out.println("Enter a value of B: ");
        b = sc.nextInt();

        int max;
        if (a > b) {
            max = a;
            System.out.println(a + " > " + b);
        }
        else {
            max = b;
            System.out.println(b + " > " + a);
        }
    }
}
