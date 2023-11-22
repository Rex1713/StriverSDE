#include<bits/stdc++.h>
using namespace std;

bool palindrome(int n) {
    int lastDigit=0;
    int revNo = 0;
    int dup = n;
    while(n>0) {
        lastDigit = n %10;
        revNo = (revNo * 10) + lastDigit ; 
        n=n/10;
    }
    if(revNo == dup) return 1;
    else return 0;
}

int main() {
    int n;
    cin>>n;
    // cout << palindrome(n);
    if(palindrome(n) == 1) cout << "True";
    else cout<<"False";
}