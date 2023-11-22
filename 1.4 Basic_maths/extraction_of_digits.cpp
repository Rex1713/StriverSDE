#include<bits/stdc++.h>
using namespace std;

void extractDigits(int n) {
    int lastDigit=0;
    while(n>0) {
        lastDigit = n %10;
        cout<<" "<<lastDigit;
        n = n/10;
    }
}

int main()
{
    int n;
    cin>>n;
    extractDigits(n);
}