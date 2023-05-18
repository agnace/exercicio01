#include <stdio.h>
int main()
{
	int x , y;
	printf("\n Digite o valor de x: ");
	scanf("%d" , &x);
	printf("\nDigite o valor de y: ");
	scanf("%d" , &y);
	if ((x > 0) && (y>0))
		printf("\n 1 Q");
	else if((x < 0) && (y > 0))
		printf("\n 2 Q");
	else if((x < 0) && (y < 0))
		printf("\n 3 Q");
	else if((x > 0) && (y < 0))
		printf("4 Q");
	else if((x == 0) && (y == 0)) 
		printf("\nEixo das origens, 0,0 ");
	else if((x == 0) && (y !=0))
		printf("\n -1");	
	else if ((x != 0) && (y == 0))
		printf("\n -1");	
	
	return 0;
}
