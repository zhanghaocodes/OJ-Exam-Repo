package test2;

import java.util.Scanner;

public class One {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("请输入数字个数：");
		int n=sc.nextInt();
		while(n<1|n>100) {
			System.out.println("请重新输入数字个数：");
			n = sc.nextInt();
		}
		System.out.println("请依次输入数字：");
		//得到控制台上的数字
		String s = sc.nextLine();
		
		//将控制台上的数字转化为数组形式
		  String input = sc.nextLine();
          String[] strArr=input.split(" ");

		int[] num1=new int[strArr.length];
		//依次将字符串数组中的元素映射到int类型的数组中
		for(int i=0;i<num1.length;i++) {
			num1[i]=Integer.parseInt(strArr[i]);
		}
		//遍历数组中的各个不用的元素a1,a2等，分别求出数组元素全变为a1或者a2所得到的最小total number of coins
		int[] num2=new int[strArr.length];
		int size=0;//作为数组中不同元素的个数
		//依次将前面的元素与后面的元素对比，后面的元素不再与前面的元素作比较
		for(int i=0;i<num1.length;i++) {
			for(int j=0;j<num1.length;j++) {
				if(num1[i]!=num1[j]) {
					size++;
				}
			}
		}
		
		
		
	}

}
