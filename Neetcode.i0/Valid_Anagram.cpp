#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string a, string b){

    if(a.length() != b.length()){
        return false;

    }

    map<char, int> map;

    for(int i = 0; i < a.length(); i++){

        map[a[i]]++; 
    }

    for(int i = 0; i < b.length(); i++){

        if(map[b[i]] == 0){
            return false;
        }else{
            map[b[i]]--;
        }
    }

    return true;
}

int main(){

    string a,b;
    
    cout <<"Enter the String a" << endl;

    getline(cin,a);

    cout <<"Enter the string b" << endl;
    getline(cin,b);

    cout << isAnagram(a,b);

}