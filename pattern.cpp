#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << j << " ";
        }
        for(int k = 1; k <= 2*(n-i); k++){
            cout << "  ";
        }
        for(int m = 1; m <= i; m++){
            cout << i-m+1 << " ";
        }

        cout << "\n";
    }
}
void pattern2(int n){
    int m = 1;
    for(int i = 1; i <=n; i++){
        for(int k = 1; k <= i; k++){
            cout << m<<" ";
            m++;
        }
        cout << "\n";
    }
}
void pattern3(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << (char)('A' + j);
        }
        cout << "\n";
    }
}
void pattern4(int n){
    char ch;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j<=n-i; j++){
            cout << " ";
        }
        for(ch = 'A'; ch<='A'+i-1;ch++){
            cout << ch;
        }
        ch -= 2;
        for(char chr = ch; chr>='A';chr--){
            cout << chr;
        }
        cout << "\n";
    }
}
void pattern5(int n){
    for(int i = 1; i <=n; i++){
        char s = ('A' + (n-1))-(i-1);
        for(int j = 1; j <=i; j++){
            cout << s << " ";
            s++;
        }
        cout << "\n";
    }
}
void pattern6(int n){
    int stars;
    for(int i = 1; i <=n; i++){
        stars = i;
        if(i>(n+1)/2) stars = n-i+1;
        for(int j = 1; j <= stars; j++){
            cout << "* ";
        }

        for(int k = 1; k <= n+1-2*stars; k++){
            cout << "  ";
        }

        for(int j = 1; j <= stars; j++){
            cout << "* ";
        }    
        cout << "\n";    
    }
}
void pattern7(int n) {
    for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < 2 * n - 1; j++) {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int down = (2 * n - 2) - i;
            cout << (n - min(min(top, down), min(left, right)));
        }
        cout << "\n";
    }
}



int main(){
    int t;
    cin >> t;
    int n;
    for (int l = 0; l < t; l++){
        cin >> n;
        pattern6(n);
    }

    return 0;
}