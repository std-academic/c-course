#include<stdio.h>
int main(void)
{
	int n,i,success;
	float score,sum,average;
	printf("Enter n:");
	scanf("%d",&n);
	sum=0;
    printf("%d\n",n);
	for(i=1;i<=n;i++){
		printf("Score %d is:",i);
		scanf("%lf",&score);
        printf("! n is %d, i is %d\n",n,i);
		sum=sum+score;
		if(score>=60){
			success++;
		}
	}
	average=sum/n;
	printf("Average is %f,Successor is %d",average,success);
	return 0;
}