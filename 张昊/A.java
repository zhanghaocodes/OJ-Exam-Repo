package Exam;

import java.util.Scanner;

public class A {
	static int res;
    static int tmp;
	public static void f(int n, int src[], int numbers[]) {
		tmp = 0;
		if ( n == 1) {

			for (int i = 0; i < numbers.length; i++) {
				tmp += numbers[i] * src[i];
			}
			tmp = Math.abs(tmp);

			if (tmp < res) {
				res = tmp;
			}

			tmp = 0;
			src[0] = (-1) * src[0];
			for (int i = 0; i < numbers.length; i++) {
				tmp += numbers[i] * src[i];
			}
			tmp = Math.abs(tmp);

			if (tmp < res) {
				res = tmp;
			}

		} else {

			f(n - 1, src, numbers);
			src[n - 1] = (-1) * src[n - 1];
			f(n - 1, src, numbers);

		}

	}

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int numbers[] = new int[n];
        res=n*n;
        
        
		for (int i = 0; i < numbers.length; i++) {
			numbers[i] = i + 1;
		}

		int signs[] = new int[n];
		for (int i = 0; i < signs.length; i++) {
			signs[i] = 1;
		}
		f(n, signs, numbers);
		System.out.println(res);

	}
}
