//Metodo de gauss Jordan
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int max_ecu=10, max_inc=10;
	float mat_coef[10][10];
	float resul[10];
	int n_ecu,n_inc;
	int i,j,k,ln,cl,cl1,cl2;
	textbackground(WHITE);
	clrscr();
	textcolor(LIGHTBLUE);
	//Funcion de hacer variables
	i=j=k=0;
	for(i=0;i<max_ecu;i++){
		for(j=0;j<max_inc;j++){
		}
	}
	//fin de hacer cero las  variables
	clrscr();
	gotoxy(35,1);printf("METODO DE GAUSS JORDAN");
	for(i=1;i<=80;i++)
	{
	printf("%c",177);
	}
	gotoxy(5,5);printf("Teclee el num. de ecuaciones: ");
	gotoxy(35,5);scanf("%d",&n_ecu);
	gotoxy(10,8);printf("Captura de coeficientes del sistema de ecuaciones");
	ln=10;
	cl=8+(6*n_ecu);
	for(i=1;i<=n_ecu;i++)
	{
	if (i==1)
	 {
			gotoxy(5,ln);printf("%c",218);
			gotoxy(cl,ln);printf("%c",191);
	 }
	 ln=ln+1;
	 gotoxy(5,ln);printf("%c",179);
	 gotoxy(cl,ln);printf("%c",179);	
	}
	ln=ln+1;
	gotoxy(5,ln);printf("%c",192);
	gotoxy(cl,ln);printf("%c",217);
	ln=10;
	cl1=cl+3;
	cl2=cl1+4;
	for(i=1;i<=(n_ecu);i++)
	{
		if(i==1)
		{
			gotoxy(5,ln);printf("%c",218);
			gotoxy(cl,ln);printf("%c",191);
		}
		ln=ln+1;
		gotoxy(5,ln);printf("%c",179);
		gotoxy(cl,ln);printf("%c",179);
	}
	ln=ln+1;
	gotoxy(5,ln);printf("%c",192);
	gotoxy(cl,ln);printf("%c",217);
	ln=11;cl=10;
	cl1=cl+3;
	cl2=cl1+4;
	for(i=1;i<=n_ecu;i++){
	 for(j=0;j<=(n_ecu);j++){
			if(j>n_ecu){
				cl=cl+5;
				gotoxy(cl,ln);
			}
			if(i==1 && j==1){
				scanf("%f",&mat_coef[i][j]);
			}
			else{
				scanf("%f",&mat_coef[i][j]);
				cl=cl+6;
			}
		}
		ln=ln+1;
		cl=8;
	}
	//fin de la captura de coeficientes
	//algoritmo gauss jordan
	int z;
	float pivote=0.0;
	float elem_zero=0.0;
	for(i=0;i<=n_ecu;i++)
	{
	pivote=mat_coef[i][j];
	printf("Primer for %d\n", mat_coef[i][j]);
	for(z=1;z<=n_ecu;z++)
	 {
	 	printf("Segundo for %d\n", mat_coef[i][z]);
			mat_coef[i][z]=mat_coef[i][z]/pivote;
			for(k=1;k<=n_ecu;k++)
			{
				printf("Tercer for %d\n", mat_coef[k][i]);
				if(k!=i)
				{

					elem_zero=mat_coef[k][i];
					}
					for(j=i;j<=(n_ecu+1);j++){
					mat_coef[k][j]=mat_coef[k][j]-(elem_zero*mat_coef[i][j]);	
					}
		}
	 }	
	}
	int r,n;
	r=n_ecu+1;
	n=0;
	printf("\nEl valor de las incognitas del sistema de ecuaciones es: \n\n");
	for(n=1;n<=n_ecu;n++){
		printf("X %d=%0.4f\n", n,mat_coef[n][r]);
	}
	getch();
}
