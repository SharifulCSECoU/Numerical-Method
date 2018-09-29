#include<bits/stdc++.h>

using namespace std;

double func(double x,double *coeff,int n)
{
	double sum = 0;

	for(int i=n;i>=0;i--)
	{
		if(coeff[i]==0)
		continue;
		sum += coeff[i] * pow(x,i);
	}
	return sum;
}

int main()
{
	cout<<"Enter dergree of the equation\n";
	int n;
	cin>>n;

	double coeff[n+1];
	cout<<"\nEnter "<<n+1<<" co-efficients:\n";
	for(int i=n;i>=0;i--)
	cin>>coeff[i];

	int i,j,k;

	cout<< "\nCorrection to how many decimal places\n";
	int dec;
	cin>>dec;
	double e = 1.0 / pow(10,dec);

	double a[100]={0.0};
	double b[100]={0.0};

	for(i=1;i<=n;i++)
    	{
		a[i]=coeff[i]/(-1.0*coeff[0]);
    	}

	b[1]=1;
	b[2]=a[1];

	double convergents;
    	j = 1;
	while(1)
    	{
		convergents =  b[j] / b[j+1];

		if(fabs(func(convergents,coeff,n))<=e)
        	{
			cout<<fixed<<"\nThe smallest root is: "<<setprecision(dec) <<convergents;
			break;
        	}

		j++;

		for(k=1,i=j ; i>0 ; i--,k++)
        	{
			b[j+1] += a[k]*b[i];
        	}
    	}
	return 0;
}
