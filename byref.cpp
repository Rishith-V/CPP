#include<bits/stdc++.h>
using namespace std;

void doSomething(string &s){
    s[0] = 'P';
}

int main(){
    string s = "Rishith";
    doSomething(s);
    cout << s << "\n";
    return 0;
}