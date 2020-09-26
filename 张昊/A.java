package Exam;

import java.util.Scanner;

public class A {
	static int res;  // 保存结果
        static int tmp;  //暂存两个集合计算结果
	
	     /*本题主要思路将题目抽象为建一个大小为n的符号数组  里面初始全放1  
		然后通过添加-1的个数进行全排列  
		将得到的的符号数组分别与1,2,3.....n相乘再相加
		取绝对值后与res的大小比较 最终得到结果
		比如 输入2 
		符号数组为 1 1
		全排列的结果为 1 1；1 -1；-1 1；-1 -1
		分别与1 1相乘相加取绝对值 得到3 1 1 3
		最终输出1
		 */
	public static void f(int n, int src[], int numbers[]) {       //递归 全排列过程
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
