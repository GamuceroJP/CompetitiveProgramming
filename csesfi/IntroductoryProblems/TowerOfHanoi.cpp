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
void tower_of_hanoi(int n, int start, int pivot, int end){
    if(n == 1){
        cout << start << " " <<  end << "\n"; 
    }
    else{
        tower_of_hanoi(n-1, start, end, pivot); //Move n-1 tower to the middle stack 
        tower_of_hanoi(1, start, pivot, end); //Move largest disc to rightmost stack
        tower_of_hanoi(n-1, pivot, start, end); //Move n-1 tower to the rightmost stack
    }
}


int main()
{
	//---------------input output more efficient
	ios::sync_with_stdio(0);
	cin.tie(0);
	//---------------
    int n;
    cin >> n;
    cout << (int)pow(2,n)-1 << "\n";
    tower_of_hanoi(n, 1 , 2 , 3);
	return 0;
}