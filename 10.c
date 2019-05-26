#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

long long int factor(int);

int main(int argc, char *argv[]) {
	int i,input;
	float sum;
	
	printf("請輸入要計算到第幾位:\n");
	scanf("%d",&input);
	for(i=2;i<=input;i++)
	{
		printf("1/%d+",i);
		sum+=1.0/factor(i);
	}
	printf("\b=%9.6f\n",sum);
	system("pause");
	return 0;
}
long long int factor(int n)
{
	if(n==0||n==1)return 1;
	else return n*factor(n-1);
}
