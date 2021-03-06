#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXBR 10
#define MINBR 5

#define MAXVR 39
#define MINVR 0

int brojigraca();
int kreiranjekombinacija();
int prva4broja(int kombinacija[][],int dobitna[][],int brigr);

int main()
{
    int brigr; //Broj igraca
    brigr=brojigraca(); //Generisanje broja igraca
    printf("Broj igraca koji ucestvuju u ovom izvlacenju je : %d\n" ,brigr);
    
    int cena;
    printf("Cena jedne kombinacije u dinarima iznosi:");
    scanf("%d" ,&cena);
    
    //KREIRANJE KOMBINACIJA
    
    int i,j;
    int kombinacija[brigr][7];
    
    for(i=0;i<brigr;i++)
	{
		printf("\nKombinacija %d. igraca :" ,i+1);
 	   for(j=0;j<7;j++)
	{
		kombinacija[i][j]=kreiranjekombinacija();
		printf("%d\t" ,kombinacija[i][j]);
		
	}
	}
	
	printf("\n\n_________________________________________________________________________________");
	
	//IZVLACENJE BROJEVA

	int dobitna[2][7],x;
	
    for(i=0;i<1;i++)
	{
		//KREIRANJE DOBITNE KOMBINACIJE
 	   for(j=0;j<7;j++)
	{	
		dobitna[i][j]=kreiranjekombinacija();
		
	}
	}
	
	for(i=0;i<1;i++)
	{
		//PRIKAZ DOBITNE KOMBINACIJE
 	   for(j=0;j<7;j++)
	{	
		if(j==3)
		{
			x=prva4broja(kombinacija,dobitna,brigr);
		}
		else
		{
			printf("%d/t" ,dobitna[i][j]);
		}
	}
	}
	
	
	
	printf("\n_________________________________________________________________________________\n\n");
    
    printf("\n\n");
    return 0;

}

int brojigraca()
{
	srand(time(NULL));
	
	int x; //Broj igraca van main-a
	
	x=rand() % (MAXBR + 1 - MINBR) + MINBR;
	return x;
}

int kreiranjekombinacija(int x)
{
	int i,y;
	
	
	for(i=0;i<7;i++)
	{
		y=rand() % (MAXVR + 1 - MINVR) + MINVR;
		return y;
	}
}

int prva4broja(int kombinacija[][],int dobitna[][],int brigr)
{
	int i,j,brojac=0;
	for(i=0;i<brigr;i++)
	{
		if (brojac==4)
		{
			printf("%d\t" ,kombinacija[i][j]);
		}
		for(j=0;j<4;j++)
		{
			brojac=0
			
			if(kombinacija[i][j]==dobitna[0][j])
			{
				brojac++;
			}
		}
	}
		
}