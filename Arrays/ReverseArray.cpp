//Code Studio Question
#include <bits/stdc++.h> 
void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
	int e=arr.size()-1;
	int s=m+1;
	while(s<e){
		swap(arr[e],arr[s]);
		s++;
		e--;
	}
}
