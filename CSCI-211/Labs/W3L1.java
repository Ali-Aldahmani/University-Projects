import java.util.Scanner;

public class W3L1 {
    public static void main(String[] args) {
        System.out.println(27 % 6);
        // integer division
        System.out.println(27 / 6);
        // float division
        System.out.println(27.0 / 6.0);

        // micro project using java. We'll build time converter
        Scanner time = new Scanner(System.in);

        int second;

        System.out.print("Enter the Second: ");
        second = time.nextInt();

        int hours, minutes, leftSecond;
        hours = second / 3600;
        System.out.println("Hours: " + hours);

        leftSecond = second % 3600;

        minutes = leftSecond / 60;
        System.out.println("Minutes: " + minutes);

        leftSecond = leftSecond % 60;
        System.out.println("Seconds: " + leftSecond);

        // how we can use number to the power number in java?
        System.out.println(Math.pow(2, 4));
        System.out.println(Math.sqrt(64));

        // let use some Binary and Hex in java
        int a, b;
        a = 0B1010; // Binary
        b = 0X1A; // Hexadecimal

        System.out.println("a: " + a);
        System.out.println("b: " + b);

        double c = 2.345e6; // scientific notation
        System.out.println("c: " + c);

        int i = 5;
        i++; // incrementation
        System.out.println("i: " + i);
        i = 5;
        ++i; // Pre-incrementation
        System.out.println("i: " + i);

        // NO issue ya? Now see the magic
        int o, p;
        o = 5;
        p = o++;
        System.out.println("o: " + o);
        System.out.println("p: " + p);

        o = 5;
        p = ++o;
        System.out.println("o: " + o);
        System.out.println("p: " + p);

        int n, m, v;
        n = 5;
        m = 4;
        v = n++ + --m;
        System.out.println("n: " + n);
        System.out.println("m: " + m);
        System.out.println("v: " + v);
    }
}
