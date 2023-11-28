#include<stdio.h>
#include<conio.h>
main() {
	
	int number,count=0;
	clrscr();
	printf("enter number  :");
	scanf("%d",&number);
	
	while(number!=0){
		number=number/10;
		count++;
	}
	printf("count=%d",count);
	getch();
	}
