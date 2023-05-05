#include <stdio.h>
main()
{
 
int array[10][10];

int i,j,S,P,a=0,sum=0;
 
 printf("Enetr the order of the matix \n");
 
 scanf("%d%d",&S,&P);
 
 if (S==P) 
{
 
 printf("Enter the co-efficients of the matrix\n");

for (i=0;i<S;++i)

{

  for (j=0;j<P;++j)
   {
      scanf("%d",&array[i][j]);
   }
}
 
 printf("The given matrix is \n");

for (i=0;i<S;++i) 

{
  for (j=0;j<P;++j)

   {
       printf("%d",array[i][j]);
   }
        printf("\n");
}
 
 for (i=0;i<S;++i) 
            
  {
      sum=sum+array[i][i];
 
       a=a+array[i][S-i-1];
  
  }
 
printf("\nThe sum of the main diagonal elements is = %d\n", sum);
            
printf("The sum of the off diagonal elements is   = %d\n", a);
 
}
 
else 
   printf("The given order is not square matrix\n");
 
}

