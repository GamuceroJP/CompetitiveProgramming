#include<bits/stdc++.h>
using namespace std;

void print_vector(vector<int> &v){
	if(v.size()){
		for(int i = 0; i<(int)v.size(); i++){
			cout<<v[i]<<" ";
		}
	}
	cout<<"\n";
}
int main()
{
	//---------------input output more efficient
	ios::sync_with_stdio(0);
	cin.tie(0);
	//---------------
	//Code
	vector<int> v={1,2,3,4,5,6};
	print_vector(v);

	return 0;
}