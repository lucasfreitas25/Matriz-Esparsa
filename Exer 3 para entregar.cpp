#include<stdio.h>
#include<math.h>

int main()
{
	int espar[5][5];
	int conde[25][3];
	int i,j,cont,x,y;
	
	x = 0;
	y = 0;
	//programa
	
	//Ler Os valores da MATRIZ ESPARSA
	for (i = 0; i < 5; i++)//LINHA
	{
		for (j = 0; j < 5; j++)//COLUNA
		{
				printf("Esparsa[%d][%d] = ", i, j);
				scanf(" %d", &espar[i][j]);
		}
		printf("\n");
	}
	
	
	//Montar a Matriz Condesada
	cont = 0;
	for (i = 0; i < 5; i++)//LINHA
	{
		for (j = 0; j < 5; j++)//COLUNA
		{
			if (espar[i][j] != 0) 
			{
				int a = i;
				int b = j;
				while((a!= 6) && (b != 6))
				{
					conde[x][y] = espar[i][j];
					y++;
					conde[x][y] = i;
					y++;
					conde[x][y] = j;
					y = 0;
					x++;
					a=6;
					b=6;
				}
			cont++;
			}
		}
	}
	
	//LER A COLUNA CONDESANDA
	printf("\n|VALOR|LINHA|COLUNA| \n");
	for ( i = 0  ; i < cont; i++ )
		{
			for( j = 0; j < 3; j++ )
			{
				printf(" %2d\t ", conde[i][j]);
			}
			printf("\n");
		}
		
}
