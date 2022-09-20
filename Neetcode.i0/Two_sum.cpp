#include<bits/stdc++.h>
using namespace std;

void two_Sum(int arr[], int n, int target){

    unordered_map<int, int> map;

    for(int i = 0; i < n; i++){

        if(map.find(target-arr[i]) != map.end()){

            cout << target-arr[i] << " " <<  arr[i] << endl;
        }else{

            map[arr[i]]++;
        }
    }
}

int main(){

    int n;

    cout << "enter the size of array" << endl;

    cin >> n;

    int arr[n];

    cout <<"Enter the elements of array" << endl;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int target;

    cout << "Enter the target " << endl;

    cin >> target;

    two_Sum(arr,n,target);

}