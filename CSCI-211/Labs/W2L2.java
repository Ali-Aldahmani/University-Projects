import java.util.Scanner;

public class W2L2 {
    public static void main(String[] args) {
        // declare constant variable in java
        final double PI = 3.14;

        double radius, area;
        Scanner input = new Scanner(System.in);
        System.out.println("Enter radius: ");
        radius = input.nextDouble();
        area = PI * radius * radius;
        System.out.println("The area is : " + area);

        // Data type in java
        int x = 2;
        byte y = 127;
        short z = 255;

        double b = 1.1;
        float c = 1.1f;

        char d = 'A';
        boolean e = true;

        System.out.println(x);
        System.out.println(y);
        System.out.println(z);
        System.out.println(b);
        System.out.println(c);
        System.out.println(d);
        System.out.println(e);
    }
}
