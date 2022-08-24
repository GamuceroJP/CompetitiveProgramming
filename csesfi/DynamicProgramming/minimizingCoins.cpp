#include<bits/stdc++.h>
using namespace std;

void print_vector(vector<int> &v){
	if(v.size()){
		for(int i = 0; i<(int)v.size(); i++){
			cout<<v[i]<<" ";
		}
		cout<<"\n";
	}
	else{
		cout<<"\n";
	}
}

void solution(int sizeOfDenoms, int target, vector<int> &denoms){
	/*
	Solution
	*/
}

int main()
{
	//---------------input output more efficient
	ios::sync_with_stdio(0);
	cin.tie(0);
	//---------------
	int n, x;
	cin >> n >> x;
	vector<int> denominations(n);
	for(int i = 0; i < n ; i++){
		cin >> denominations[i];
	}
	solution(n, x, denominations);
	return 0;
}