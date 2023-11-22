#include<bits/stdc++.h>
using namespace std;

int gcdBrute(int n1,int n2) {
    int gcd =1;
    for(int i = 1;i<=min(n1,n2);i++) {
        if((n1%i)==0 && (n2%i)==0) {
            gcd = i;
        }
    }
    return gcd;
}

int gcd2(int a,int b)
{
	//Write your code here
	int g=1;
	for(int i=min(a,b);i>=1;i--) {
		if((a%i)==0 && (b%i)==0) {
			g=i;
			break;
		}
	}
	return g;
}

int gcdUsingEucleidan(int a,int b)
{
    while(a>0 && b>0)
    {
        if(a>b) a=a%b;
        else b=b%a;
    }
    if(a==0) return b;
    return a;
}

int main() {
    int n1,n2;
    cin>>n1>>n2;
    cout<<gcdBrute(n1,n2)<<endl;
    cout<<gcdUsingEucleidan(n1,n2);
}