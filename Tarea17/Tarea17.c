#include<stdio.h>


int main (int argc, char  *argv){
	
	int var1=5;
	int var2=2;
	int resultado=0;
	
	//igua a 
	
	resultado= var1 == var2;
	printf("%d == %d=%d\n", var1,var2,resultado);
	
	//menor igual que
	
	resultado=var1 <= var2;
	printf("%d <= %d=%d\n", var1,var2,resultado);
	
	//Mayor que
	
	resultado= var1 > var2;
	printf("%d > %d=%d\n", var1,var2,resultado);
	
	//diferente de
	
	resultado= var1 != var2;
	printf("%d != %d=%d\n", var1,var2,resultado);
	
	// us de &&
	
	resultado = (var1>var2)  && (var1 != var2);
	printf("(%d > %d) && (%d != %d)= %d\n",var1,var2, var1, var2, resultado);
	
	
	
	return 0;
	
}
