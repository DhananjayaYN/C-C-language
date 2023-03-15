#include<stdio.h>
#include<windows.h>
int main(){
	int h,m,s,ms;
	float d=1/10;//we add a delay of milliseconds and we will use it in the function sleep
	printf("Set time: \n");
	scanf("%d,%d,%d,%d",&h,&m,&s,&ms);
	if(h>12 || m>60 || s>60 || ms>10){
		printf("Error! \n");
		exit(0);
	}
	while(1<2)//infinite loap and anything i nside will repeat itself to infinity
	{
		s++;
		if(s>59){
			m++;
			s=0;
		}
		if(m>59){
			h++;
			m=0;
		}
		if(h>11){
			printf("time is limited !!\n");
		}
		printf("Clock :\n");
		printf("%02d:%02d:%02d",h,m,s);
		sleep(2);
		system("cls");//this use for clear to screen
	}
	return 0;
}
