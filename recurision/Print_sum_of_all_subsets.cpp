#include<bits/stdc++.h>
using namespace std;

void sumFuntion(int ind, int n, int *arr, vector<int> &ans, int sum){

    if(ind == n){

        ans.push_back(sum);

        return;
    }


    sumFuntion(ind+1, n, arr, ans, sum+arr[ind]);

    sumFuntion(ind+1, n, arr, ans, sum);
}

int main(){

    int arr[] = {5,2,1};

    int n = 3;

    vector<int> ans;

    sumFuntion(0,n,arr,ans,0);

    sort(ans.begin(), ans.end());

    for(auto i : ans){

        cout << i << " ";
    }

    cout << endl;

    return 0;
    
}