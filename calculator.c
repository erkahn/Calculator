#include <stdio.h>
int main(){
	int num1, num2, result, adds;
	int point;
	printf("***Calculator*************\n");
	printf("***Press 1 to sum********* \n***Press 2 to substract*** \n***Press 3 to multiply**** \n***Press 4 to divide******\n");
	printf("**************************\n");
	scanf("%d", &point);
	scanf("%d", &num1);
	scanf("%d", &num2);
	if(point == 1)
		result = num1 + num2;
	if(point == 2)
		result = num1 - num2;
	if(point == 3)
		result = num1 * num2;
	if(point == 4){
		result = num1 / num2;
		adds = num1 % num2;
	}
	printf("Result: %d\n", result);
	if(adds != 0 && point == 4)
		printf("Adds: %d", adds);
}