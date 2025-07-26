#include<bits/stdc++.h>
using namespace std;

int sum(int num1, int num2){
    int num3 = num1 + num2;
    return num3;
}

int main(){
    int a, b;
    cin >> a >> b;
    int c = sum(a, b);
    cout << c;
    return 0;
}