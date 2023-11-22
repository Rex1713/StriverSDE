#include<bits/stdc++.h>

using namespace std;

int countDigit1(int n)
{
    int cnt = 0;
    int lastDigit = 0;
    while(n > 0) {
        cnt++;
        n=n/10;

    }
    return cnt;
}

int countDigitLog(int n)
{
    int cnt=int(log10(n)+1);
    return cnt;
}


int main()
{
    int n;
    cin >> n;
    cout<<countDigit1(n)<<endl;
    cout<<countDigitLog(n)<<endl;
}