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

void solution(int n, vector<int> &arr){
    long long int minimumMoves = 0; 
    int auxValue = 0;
    if (n > 2){
        for(int i = 1; i < n-1; i++){
            if(arr[i]<arr[i-1]){
                if(arr[i+1]<arr[i-1]){
                    auxValue = abs(arr[i]-arr[i-1]);
                }
                else{
                    auxValue = min(
                            abs(arr[i]-arr[i+1]), abs(arr[i]-arr[i-1])
                        );
                }
                minimumMoves += auxValue;
                arr[i] += auxValue;
            }
        }
        // Last item 
        if(arr[n-1]<arr[n-2]){
            minimumMoves +=arr[n-2]-arr[n-1];
            // arr[n-1] += arr[n-2]-arr[n-1]; it is not necessary to modify last element
            // is not required for other comparisons (DEBUGGING)
        }
    }
    // print_vector(arr); (DEBUGGING)
    cout << minimumMoves << "\n"; 
}

int main()
{
	//---------------input output more efficient
	ios::sync_with_stdio(0);
	cin.tie(0);
	//---------------
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    solution(n, arr);
	return 0;
}