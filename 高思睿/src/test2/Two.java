package test2;

import java.util.Scanner;

import javax.swing.plaf.synth.SynthSpinnerUI;

public class Two {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		System.out.println("请输入字符串所包含的数字个数：");
		int num = sc.nextInt();
		while(num<2|num>100) {
			System.out.println("请重新输入字符串所包含的数字个数：");
			num = sc.nextInt();
		}
		System.out.println("请输入capital Latin字符串：");
		String s1 = sc.nextLine();
		String[] s2=s1.split(" ");
		//String[] s2=new String[num];
		//将获取的数据进行分割
				
//		for(int i=0;i<num;i++) {
//			System.out.println(s2[i]);
//		}
		System.out.println(s2.length);
		//利用数组遍历
		//利用暴力直接是相邻的两个字母组成数组元素
		String a2[]=new String[num-1];
		for(int i=0;i<num;i++) {
			String a1=s2[i]+s2[++i];
			a2[i]=a1;
	    }
		int cishu[]= new int[num-1];
		for(int i=0;i<(num-1);i++) {
			for(int j=1;j<(num-1);j++) {
				if(a2[i]==a2[j]) {
					cishu[i]++;
				}
				
		    }
	    }
		//此时找到cishu数组中最高值对应的下标
		//cishu最高值下标与a2数组下标相同，得到的a2数组对应下标的元素值即为所需结果
		int one=cishu[0];
		int index=0;
		//利用for循环得到最大值
		for(int j=1;j<cishu.length;j++) {
			if(one<cishu[j]) {
				one=cishu[j];
				index=j;
				
			}
		System.out.println("结果为"+a2[index]);

	}

	}
}
