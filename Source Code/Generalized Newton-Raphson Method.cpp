#include<bits/stdc++.h>
using namespace std;

int degree;
float x,z,sum;
int arr[100];

double fun(double x)
{
    sum=0;
    z=degree;
    for(int i=0;i<=degree;i++)
    {
        sum+=arr[i]*pow(x,z);
        z--;
    }
    return sum;
}

double infun(double x)
{
    sum=0;
    z=degree;
    for(int i=0;i<=degree;i++)
    {
        sum+=arr[i]*z*pow(x,z-1);
        z--;
    }
    return sum;
}

int main()
{
    int i,p;
    double x0,x1,x2,e,accuracy;

    cout<<"Enter the highest degree of the equation:"<<endl;
    cin>>degree;

    p=degree-1;

    cout<<"Enter the co-efficient:"<<endl;
    for(i=0;i<=degree;i++)
        cin>>arr[i];

    cout<<"Enter a real number assuming the root:"<<endl;
    cin>>x0;

    cout<<"How many places do you want to correct:"<<endl;
    cin>>e;

    accuracy=1/pow(10,e);

    while(1)
    {
        x1=x0-(p*fun(x0)/infun(x0));
        x2=x0-((p-1)*fun(x0)/infun(x0));

        if(abs(fun(x1))<=accuracy)
        {
            cout<<fixed<<setprecision(e)<<"The root of the equation is: "<<x1<<endl;
            break;
        }

        if(abs(fun(x2))<=accuracy)
        {
            cout<<fixed<<setprecision(e)<<"The root of the equation is: "<<x2<<endl;
            break;
        }

        x0=fun(x1)<fun(x2)?x1:x2;
    }

    return 0;
}
