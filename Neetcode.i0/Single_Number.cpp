#include<bits/stdc++.h>
using namespace std;

 int singleNumber(int arr[], int n) {
        
        int count = 0;
        
        for(auto i = 0; i < n; i++){
            count ^= i;
        }
        
        return count;
    }

int main(){

    int n ; 

   
    cout << "Enter the size of array" << endl;
    
    cin >> n;

    int arr[n] = {1,2,4,1,2};


    //arr[n] = {1,5,4,1,2};
    // for(int i = 0; i < n; i++){

    //     cin >> nums[i];
    // }

    cout << singleNumber(arr, n);

}