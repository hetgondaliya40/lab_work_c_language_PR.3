#include<stdio.h>
#include<conio.h>
main() {
	
	int number,lastdigit,firstdigit;
	clrscr();
	printf("enter number  :");
	scanf("%d",&number);
	
	lastdigit=number%10;
	
	while(number>=10){
		number=number/10;
	}
	firstdigit=number;
	printf("sum=%d",firstdigit+lastdigit);
	getch();
	}
