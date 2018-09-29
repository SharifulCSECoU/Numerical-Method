#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,i;
    double x[20],y[20],sumx=0,sumy=0,sumx2=0,sumxy=0,a0,a1;

    cout<<"Enter the value of number of terms:"<<endl;
    cin>>m;

    cout<<"Enter the value of x respectively:"<<endl;
    for(i=0;i<m;i++)
        cin>>x[i];

    cout<<"Enter the value of y respectively:"<<endl;
    for(i=0;i<m;i++)
        cin>>y[i];

    for(i=0;i<m;i++)
    {
        sumx = sumx + x[i];
        sumy = sumy + y[i];
        sumx2 = sumx2 + x[i]*x[i];
        sumxy = sumxy + x[i]*y[i];
    }

    //printf("\n%.1d * a0 + %.1lf * a1 = %.1lf",m,sumx,sumy);
    //printf("\n%.1lf * a0 + %.1lf * a1 = %.1lf\n",sumx,sumx2,sumxy);

    a0 = (sumx2*sumy -sumx*sumxy) / (m*sumx2-sumx*sumx);
    a1 = (m*sumxy-sumx*sumy) / (m*sumx2-sumx*sumx);

    printf("\nThe best straight line fit is Y = %lf + %lf X\n",a0,a1);

    return 0;
}
