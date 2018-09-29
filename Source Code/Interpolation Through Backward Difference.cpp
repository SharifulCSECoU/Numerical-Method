#include<bits/stdc++.h>
using namespace std;

int n;
double x[100],y[100],d1[100],d2[100],d3[100],d4[100],d5[100],p;

double fun(void)
{
    double sum;
    sum=y[n-1]+p*d1[n-1]+p*(p+1)*d2[n-1]*(1/2.0)+p*(p+1)*(p+2)*d3[n-1]*(1/6.0)+p*(p+1)*(p+2)*(p+3)*d4[n-1]*(1/24.0)+p*(p+1)*(p+2)*(p+3)*(p+4)*d5[n-1]*(1/120.0);
    return sum;
}

int main()
{
    int i;
    double iv,dv;

    cout<<"Enter the number of input set(x & y)[Maximum 6 set]:"<<endl;
    cin>>n;

    cout<<"Enter the value of x & y respectively:"<<endl;
    for(i=0;i<n;i++)
        cin>>x[i]>>y[i];

    for(i=n-1;i>=1;i--)
        d1[i]=y[i]-y[i-1];
    for(i=n-1;i>=2;i--)
        d2[i]=d1[i]-d1[i-1];
    for(i=n-1;i>=3;i--)
        d3[i]=d2[i]-d2[i-1];
    for(i=n-1;i>=4;i--)
        d4[i]=d3[i]-d3[i-1];
    for(i=n-1;i>=5;i--)
        d5[i]=d4[i]-d4[i-1];

    cout<<"Enter the desired value of x:"<<endl;
    cin>>iv;

    p=(iv-x[n-1])/abs(x[1]-x[0]);
    dv=fun();

    cout<<"y("<<iv<<")="<<dv<<endl;
    return 0;
}
