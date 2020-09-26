#include <stdio.h>

struct robotfct{
	int x;
	int y;
	int left;
	int up;
	int right;
	int down;		
};

int main(){
	int times;
	scanf("%d",&times);
	int i=0,j=0,num=0;
	
	for(i=0;i<times;i++){
		scanf("%d",&num);
		struct robotfct robots[num];
		
		for (j=0;j<num;j++){		
			scanf("%d %d %d %d %d %d",robots[i]->x, &robots[i]->y, &robots[i]->left
			&robots[i]->up, &robots[i]->right, &robots[i]->down);
			printf("%d %d %d %d %d %d\n",&robots[i]->x, &robots[i]->y, &robots[i]->left
			&robots[i]->up, &robots[i]->right, &robots[i]->down)
		}
	}
}