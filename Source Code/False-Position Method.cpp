#include<bits/stdc++.h>
#define accuracy 0.0001
using namespace std;

int degree;
double m,n,x,z,sum;
int arr[100];

double fun(double x)
{
    sum=0;
    int i; z=degree;
    for(i=0;i<=degree;i++)
    {
        sum+=arr[i]*pow(x,z);
        z--;
    }
    return sum;
}

int main()
{
    int i;

    cout<<"Enter the highest degree of the equation: "<<endl;
    cin>>degree;

    cout<<"Enter the co-efficients: "<<endl;
    for(i=0;i<=degree;i++)
        cin>>arr[i];

    cout<<"Enter two real numbers assuming the root: "<<endl;
    cin>>m>>n;

    while(fun(m)*fun(n)>=0)
    {
        cout<<"Enter two real numbers assuming the root again: "<<endl;
        cin>>m>>n;
    }

    while(abs(n-m)>accuracy)
    {
        x=m-(fun(m)/(fun(m)-fun(n))*(m-n));//x=(m*fun(n)-n*fun(m))/(float)(fun(n)-fun(m));
        if(fun(x)==0) break;
        else if(fun(m)*fun(x)<0) n=x;
        else m=x;
    }

    cout<<"The root of the equation is: "<<x<<endl;
    return 0;
}
