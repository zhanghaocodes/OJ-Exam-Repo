#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> a;
	vector<int> b;
	int temp;
	for(int i=0;i<n;i++){
		cin>>temp;
		a.push_back(temp);
	}
	for(int i=0;i<n;i++){
		cin>>temp;
		b.push_back(temp);
	}
	
	vector<double> bizhi;
	for(int i=0;i<n;i++){
		if(a[i]!=0){
			bizhi.push_back((double)b[i]/a[i]);
		}
	}
	
	
	int maxNum=0,curNum;
	double curBiZhi;
	vector<double>::iterator it;
	while(!bizhi.empty()){
		it=bizhi.begin();
		curBiZhi=*it;
		bizhi.erase(it);
		curNum=1;
		for(vector<double>::iterator it1=bizhi.begin();it1!=bizhi.end();it1++){
			if(*it1==curBiZhi){
				curNum++;
				it1=bizhi.erase(it1);
				it1--;
				if(it1==bizhi.end()) {
					break;
				}
			}
		}
		if(curNum>maxNum){
			maxNum=curNum;
		}
	}
	cout<<maxNum<<endl;
}
