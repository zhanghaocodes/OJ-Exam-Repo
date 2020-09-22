#include<cstdio>
#include<algorithm>
#include<cmath>
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()

{
	int n;
	cin>>n;
	int num[100];
//	int hash[201]= {0};
//int max=0;
	int jisum=0;
	int ousum=0;
	for(int i=0; i<n; i++) {
		cin>>num[i];
		if(abs(num[i])%2==0)
		{
			ousum++;
		}
		else{
			jisum++;
		}
	}
	if(ousum>jisum)
	{
		cout<<jisum<<endl;
	}
	else if(ousum<=jisum)
	{
		cout<<ousum<<endl;
	}
	}
//	for(int i=-100;i<100;i++)
//	{
//		if(hash[i+100]==0){
//			continue;
//		}else{
//		if(abs(i)%2==0)
//		{
//			ousum+=hash[i+100];
//		}else
//		{
//			jisum+=hash[i+100];
//		}
//		}	
//	}
	
	
//	int coin=0;
//	for(int i=-100; i<100; i++) {
//		if(hash[i]!=0) {
//			if(abs(max-i)%2==0)
//				continue;
//			else if(abs(max-i)%2==1) coin+=hash[i+100];
//		}
//
//	}
	

