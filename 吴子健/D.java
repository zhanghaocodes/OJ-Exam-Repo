import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int num = scanner.nextInt();
        int[][] array = new int[num][2];
        for (int i = 0; i < num; i++) {
            int t = scanner.nextInt();
            array[i][0] = t;
            t = scanner.nextInt();
            array[i][1] = t;
        }

        for (int i = 0; i < num; i++) {
            if (array[i][0] == 0) System.out.println("Bob");
            else if (array[i][0] == array[i][1]) System.out.println("Alice");
            else if(array[i][0]%3==0)System.out.println("Bob");
        }
    }
}
