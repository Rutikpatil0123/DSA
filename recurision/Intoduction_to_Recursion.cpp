#include<bits/stdc++.h>
using namespace std;

void print(int i){

    if(i == 4){

        return;
    }

    cout << i <<" ";

    print(i+1);
}

int main(){

    int i = 0;

    print(i);


}