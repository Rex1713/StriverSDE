#include<bits/stdc++.h>

using namespace std;

int reverseNumber(int n) {
    int lastDigit=0;
    int revNo=0;
    while(n>0) {
        lastDigit = n%10;
        revNo = (revNo*10) + lastDigit;
        n=n/10;
    }
    return revNo;
}

int main() {
    int n;
    cin >> n;
    cout<<reverseNumber(n);
}