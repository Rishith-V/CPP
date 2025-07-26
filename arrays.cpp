#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]; //1D array
    cin >> arr[0] >> arr[1] >> arr[2] >>arr[3] >> arr[4];
    int arrt[3][5];
    arrt[1][3] = 78;    //2D array
    string s = "magic";
    cout << " " << s[0];
    int len = s.size();
    cout << " " << s[len-1];
    s[len] = 's';   //isn't counted as a part of array, but stored in the respective memory location
    cout << "\n" << s;
    cout << "\n" << s[len];

    return 0;
}