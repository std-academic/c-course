#include <stdio.h>
int main(){
	int fz,fm,i,n,k;
	double sum;
	scanf("%d",&n);
	sum=0;
	fz=2;
	fm=1;
	for(i=0;i<n;i+=1){
		sum=sum+(double)(fz)/fm;
		k=fm;
		fm=fz;
		fz=fz+k;
	}
	printf("%.2f",sum);
    return 0;
}