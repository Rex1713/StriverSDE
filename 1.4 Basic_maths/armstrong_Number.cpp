#include<bits/stdc++.h>
using namespace std;

void armstrong(int n){
    int last = 0;
    int n1 = n;
    int cnt = 0;
    while(n1>0)
    {
        last = n1 % 10;
        cnt++;
        n1 = n1/10;
    }

    //real armstrong starts

    int lastDigit = 0;
    int dup = n;
    int sum = 0;
    while(n > 0) {
        lastDigit = n % 10;
        sum = sum + pow(lastDigit,cnt);
        n = n/10;
    }
    if(sum == dup) cout<<"True";
    else cout<<"False";

}

int main()
{
    int n;
    cin>>n;
    armstrong(n);
}