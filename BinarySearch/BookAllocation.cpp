#include <bits/stdc++.h>
using namespace std;
bool solution(vector<int> time,int n,int m,long long mid){
	int days=1;
	long long ans=0;
	for(int i=0;i<m;i++){
		if((time[i]+ans)<=mid){
			ans+=time[i];
		}
		else{
			days++;
			if(days>n || time[i]>mid){
				return false;
			}
			ans=time[i];

		}
	}
	return true; 
}

long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	// Write your code here.
	long long sum;
	for(int i=0;i<m;i++){
		sum+=time[i];
	}
	long long s=0;
	long long e=sum;
	long long mid=s+(e-s)/2;
	while(s<=e){
		if(solution(time, n , m, mid)){
			e=mid-1;
		}
		else{
			s=mid+1;
		}
		mid=s+(e-s)/2;

	}
	return mid;
}