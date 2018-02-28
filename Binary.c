#include <stdio.h>

int binary(int number){

	if(number==0||number==1){
		return number;
	} 
	
	int mod = number%2;

	return binary((number - mod)/2)*10 + mod;
}

int main(){

	printf("Enter the Decimal number: ");
	int decimal;

	scanf("%d",&decimal);

	int answer = binary(decimal);
	printf("\n\nbinary: %d\n" , answer);

	return 0;
}