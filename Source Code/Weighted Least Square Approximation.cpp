#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,i;
    double x[20],y[20],w[20],sumx=0,sumy=0,sumw=0,sumwx=0,sumwx2=0,sumwy=0,sumwxy=0,a0,a1;

    cout<<"Enter the value of number of terms:"<<endl;
    cin>>m;

    cout<<"Enter the value of x respectively:"<<endl;
    for(i=0;i<m;i++)
        cin>>x[i];

    cout<<"Enter the value of y respectively:"<<endl;
    for(i=0;i<m;i++)
        cin>>y[i];

    cout<<"Enter the value of w respectively:"<<endl;
    for(i=0;i<m;i++)
        cin>>w[i];

    for(i=0;i<m;i++)
    {
        sumx = sumx + x[i];
        sumy = sumy + y[i];
        sumw = sumw + w[i];
        sumwx = sumwx + w[i]*x[i];
        sumwx2 = sumwx2 + w[i]*x[i]*x[i];
        sumwy = sumwy + w[i]*y[i];
        sumwxy = sumwxy + w[i]*x[i]*y[i];
    }

    //printf("\n%.1lf * a0 + %.1lf * a1 = %.1lf",sumw,sumwx,sumwy);
    //printf("\n%.1lf * a0 + %.1lf * a1 = %.1lf\n",sumwx,sumwx2,sumwxy);

    a0 = (sumwx2*sumwy-sumwx*sumwxy) / (sumw*sumwx2-sumwx*sumwx);
    a1 = (sumw*sumwxy-sumwx*sumwy) / (sumw*sumwx2-sumwx*sumwx);

    printf("\nThe 'linear least squares approximation' is Y = %lf + %lf X\n",a0,a1);

    return 0;
}
