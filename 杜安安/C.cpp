#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
bool com(const int a,const int b){
	return a>b;
}
int main(){
	int n,m;
	cin>>n>>m;
	vector<int> comDis;
	long long beforeComTotal=0,afterComTotal=0;
	long long a,b;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		beforeComTotal+=a;
		afterComTotal+=b;
		comDis.push_back((int)(a-b));
	}
	if(afterComTotal>m){
		cout<<"-1"<<endl;
		return 0;
	}
	if(beforeComTotal<=m){
		cout<<"0"<<endl;
		return 0;
	}
	sort(comDis.begin(),comDis.end(),com);//对压缩前后的差值排序 
	int ans=0;
	for(int i=0;i<n;i++){//依次选择压缩前后差值最大的 
		
		beforeComTotal-=comDis[i];
		ans++;
		if(beforeComTotal<=m) break;
	}
	cout<<ans<<endl;
	return 0;
}
