#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int T;
	cin>>T;
	
	for(int t = 1; t <=T; t++){
		int n;
		cin >> n;
		
		int sum = 0;
		int maxSum = INT_MIN;
		
		int tempStart = 1;
		int left = 1;
		int right = 1;
		
		for (int i =1; i<= n; i++){
			int x;
			cin>>x;
			
			if(sum < 0){
				sum = x;
				tempStart = i;
			} else {
				sum += x;
			}	
			
			if(sum > maxSum){
				maxSum = sum;
				left = tempStart;
				right = i;
			}
		}
		
		cout<<"Case "<<t<<":"<<endl;
		cout<<maxSum<<" "<<left<<" "<<right<<endl;
		
		if(t != T)
			cout<<endl;
	}
	return 0;
}
