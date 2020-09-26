#include <stdio.h>

int main(){
	int thd;
	scanf("%d",&thd);
	int x = thd%2;
	int y = thd/2;
	if(x == 0){
		if(y%2==0)
			printf("0");
		else if(y%2==1)
			printf("1");
	}else if(x == 1){
		if(y%2==0)
			printf("1");
		else if(y%2==1)
			printf("0"); 
	}
	return 0;
} 