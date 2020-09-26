#include <stdio.h>
 
int main(){
	int lines;
	scanf("%d",&lines);
	int i=0,j=0;
	char left[lines],right[lines];
	for(i=0;i<lines;i++){
		scanf("%d %d",left[i],right[i]);
	}
	if (lines==2){
		if((right[0]-left[0])>(right[1]-left[1]))
			printf(right[0]-left[0]);
		else
			printf(right[1]-left[1])
	}else{
		for(i=0;i<lines;i++){
			for(j=i;j<lines;j++){
				if(left[j+1]<left[j]){
					temp=left[j];
					left[j+1]=left[j];
					left[j]=temp;
				}
			}
		}
	}
}