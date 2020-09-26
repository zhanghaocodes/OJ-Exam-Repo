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

        int leftrange = 0;//最大的左边界
        int leftrangeNum = 0;
        int rightrange = Integer.MAX_VALUE;//最小的右边界
        int rightrangeNum = 0;
        int leftrange2 = 0;//第二大的左边界
        int leftrange2Num = 0;
        int rightrange2 = Integer.MAX_VALUE;//第二小的右边界
        int rightrange2Num = 0;
        for (int i = 0; i < num; i++) {
            if (array[i][0] >= leftrange) {//出现最大的数
                leftrange2 = leftrange;
                leftrange2Num = leftrangeNum;
                leftrange = array[i][0];
                leftrangeNum = i;
            }
            else if (array[i][0] >= leftrange2) {//出现第二大的数
                leftrange2 = array[i][0];
                leftrange2Num = i;
            }
            if (array[i][1] <= rightrange) {//出现最小的数
                rightrange2 = rightrange;
                rightrange2Num = rightrangeNum;
                rightrange = array[i][1];
                rightrangeNum = i;
            }
            else if (array[i][1] <= rightrange2) {//出现第二小的数字
                rightrange2 = array[i][1];
                rightrange2Num = i;
            }
        }
        if (leftrange > rightrange) System.out.println(0);//不相交
        else if (leftrangeNum == rightrangeNum) {//最小区间是一个整区间
            System.out.println(rightrange2 - leftrange2);
        } else {//不是一个整区间
            System.out.println(Math.max(rightrange - leftrange2, rightrange2 - leftrange));
        }

    }
}
