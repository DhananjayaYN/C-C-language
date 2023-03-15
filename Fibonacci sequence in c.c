#include<stdio.h>
int main(){
	int a,b,c;
	a=1;
	b=2;
	printf("Enter your value: ");
	scanf("%d",&c);
	while(a<c || b<c){
		printf("%d,",a);
		printf("%d,",b);
		a=a+b;
		b=a+b;
	}
	return 0;
}
