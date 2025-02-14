#include<iostream>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    int a = s.length();
    int n = 0;
    for(int i=0; i<a-1; i++){
        if(s[i]==' '){
            n++;
        }
    }
    if(s[a-1] != ' '){
        n++;
    }
    cout << n;
}