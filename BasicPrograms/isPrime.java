import java.util.Scanner;
public class isPrime {
    static boolean isPrime(int n) {
        for (int i = 2; i*i <= n; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number: ");
        int num = sc.nextInt();
        boolean isPrime = true;
        isPrime = isPrime(num);
        if (isPrime) {
            System.out.println("Prime");
        }
        else System.out.println("Non-prime");
    }
}