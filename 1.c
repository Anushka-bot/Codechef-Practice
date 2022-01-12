#include <stdio.h>

int main(void)
{
	float balance=0;
	int x=0;
	scanf("%f",&balance);
	scanf("%d",&x);
    float newbalance = balance - (x + 0.5);
    if(x<balance && x%5==0)
    {
	printf("%f",newbalance);
    }
    if(x>balance || x%5!=0)
    {
        printf("%f",balance);
    }
	return 0;
}