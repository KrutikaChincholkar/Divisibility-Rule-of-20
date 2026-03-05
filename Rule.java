import java.util.Scanner;

public class DivisibleBy20 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int num = sc.nextInt();

        int lastDigit = num % 10;
        int lastTwo = num % 100;

        if(lastDigit == 0 && lastTwo % 4 == 0)
            System.out.println(num + " is divisible by 20");
        else
            System.out.println(num + " is not divisible by 20");
    }
}
