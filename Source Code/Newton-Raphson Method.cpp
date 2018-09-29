#include<bits/stdc++.h>
#define accuracy 0.0001
using namespace std;

int degree;
double p,x,z,sum1,sum2,sum,k;
int arr[100];

double fun(double x)
{
    sum1=0,sum2=0,sum=0;

    z=degree;
    for(int i=0;i<=degree;i++)
    {
        sum1+=arr[i]*pow(x,z);
        z--;
    }

    z=degree;
    for(int i=0;i<=degree;i++)
    {
        sum2+=arr[i]*z*pow(x,z-1);
        z--;
    }

    sum=x-(sum1/sum2);
    return sum;
}

int main()
{
    int i;

    cout<<"Enter the highest degree of the equation:"<<endl;
    cin>>degree;

    cout<<"Enter the co-efficient:"<<endl;
    for(i=0;i<=degree;i++)
        cin>>arr[i];

    cout<<"Enter a real number assuming the root:"<<endl;
    cin>>p;

    while(1)
    {
        x=fun(p);
        if(abs(1-(k/x))*100<=accuracy) break;
        p=x;
        k=x;
    }

    cout<<"The root of the equation is: "<<x<<endl;
    return 0;
}
