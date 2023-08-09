/*
simple if:
syntax:
if(condition){
statement;
}
*/

#include<stdio.h>
main(){
	int num;
	printf("Enter you number");
	scanf("%d",&num);
	if(num>18){
		printf("Eligable");
	}else{
		printf("Not Eligable");
	}
}
