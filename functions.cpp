#include<bits/stdc++.h>
using namespace std;

void printName(){   //non-parametrised void function
    cout << "first rule" << "\n";
}

void printYour(string inp){    //parametrised
    cout << inp << "\n";
}

int main(){
    string name;
    cin >> name;
    printName();
    printYour(name);
    return 0;
}