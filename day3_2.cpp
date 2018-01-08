#include <stdio.h>  	   	
#include <stdlib.h>  	
  	  	   	
void displaymenu(){  	
printf("================================\n");  	
printf("      MENU              	\n");  	
printf("================================\n");  	
   	printf("     1.Add\n");  	
   	printf("     2.Subtract \n");  	
    printf("     3.Multiply \n");  	
   	printf("     4.Divide \n");  	
  	printf("     5.Modulus \n");  	
}  	
int Add(int a,int b){  	
  return(a+b);  	
}  	
int Substract(int a, int b){  	
  	return(a-b);  	
}  	
  	  	   	
int Multiply(int a, int b){  	
  	return(a*b);  	
}
float Divide(int a,int b){  	
  	return(a/b);  	
}  	
int Modulus(int a, int b){  	
  	return(a%b);  	
}  	
  	  	   	
int main(int argc, char *argv[])  	
  {  	
  //show menu  	
  displaymenu();  	
  int yourchoice;  	
  int a;  	
  int b;  	
  char confirm;  	
  	do  	
  	  	{  	
  	  	printf("Enter your choice(1-5):");  	
  	  	scanf("%d:",&yourchoice);  	
  	  	printf("Enter your two integer numbers:");  	
  	  	scanf("%d %d",&a,&b);  	
  	  	printf("\n");  	
  	  	switch(yourchoice){  	
  	  	 case 1:printf("Result:%d",Add(a,b));break;  	
  	  	 case 2:printf("Result:%d",Substract(a,b));break;  	
  	  	 case 3:printf("Result:%d",Multiply(a,b));break;  	
  	  	 case 4:printf("Result:%.2f",Divide(a,b));break;  	
  	  	 case 5:printf("Result:%d",Modulus(a,b));break;  	
  	  	 default:printf("invalid");  	
  	  	}  	
  	  	                    	  	
  	  	printf("\nPress y or Y to continue:");  	
  	  	scanf("%s",&confirm);  	
  	  	}while(confirm=='y'||confirm=='Y');  	
  	  	    	
    return EXIT_SUCCESS;  	
  	}
