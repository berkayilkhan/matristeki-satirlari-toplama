#include<stdio.h>
int main ()
{
	int A[50][50],i,j,N,M,enb,sat,sut,d[50];
    printf("matrisin satir sayisi :  ");
    scanf("%d",&N);
    printf("matrisin sutun sayisi :  ");
	scanf("%d",&M);
	// matrise veri giri�i 
	for(i=0;i<N;i++)
	for(j=0;j<M;j++)
	{
		printf("A[%d][%d]: ",i+1,j+1);
		scanf("%d",&A[i][j]);	
	}
     // diziye  ba�lang�� de�eri ata
     for(i=0;i<N;i++)
     d[i]=0;
     //sat�rlar nas�l toplan�r?
     for(i=0;i<N;i++)
	 for(j=0;j<M;j++)
	 d[i]=d[i]+A[i][j];
     // matrisi yazal�m
     printf("\n girilen matris \n");
     for(i=0;i<N;i++)
     {
     	for(j=0;j<M;j++)
     	printf("%3d",A[i][j]);
     	printf("\n");
     	
	 }
	 printf("hesaplanan dizi : \n");
	 for(i=0;i<N;i++)
	 printf("%3d",d[i]);
	 return 0;

	
}
