import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int input = scanner.nextInt();
        if (input % 4 == 0||(input+1)%4==0) System.out.println(0);
        else System.out.println(1);//不是4的倍数的偶数和奇数
    }
}