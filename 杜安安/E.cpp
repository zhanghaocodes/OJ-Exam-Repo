#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
bool com(const pair<int,int> a,const pair<int,int> b){
	return a.second<b.second;
}

int main(){
	int n;
	int *team=new int[n];//记录每个学生的队号 
	memset(team,0,sizeof(team));
	
	cin>>n;
	vector<pair<int,int> > student;
	int temp;
	for(int i=0;i<n;i++){
		cin>>temp;
		student.push_back(make_pair(i,temp));
	}
	
	sort(student.begin(),student.end(),com);
	int res=0,k=0;
	int teamIndex=1;
	int 
	//直接选择连续的三个学生，然后判断要不要加入第四个，第五个。。
	//加入的条件是是新加入开头为学生i的队 k学生，要满足student[k].second-student[i]<student[k+2]-student[k]&&k+2<n 
	for(int i=0;i<n;i++){
		team[student[i].first]=teamIndex;
		
		teamIndex++; 
	}
	
}
