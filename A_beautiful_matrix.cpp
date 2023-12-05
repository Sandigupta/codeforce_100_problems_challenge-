#include<stdio.h>
int main(){
    int i;
    int j;
    int mat[5][5];
    for ( i = 0; i <5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            scanf("%d",&mat[i][j]);
        }   
    }
    int m=0,n=0;
    for (i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            if(mat[i][j]==1)
            {
             m=i;
             n=j;
             }    
        }
       // break;
    }    
    if(m>2 && n>=2)
    printf("%d\n",m-2+n-2);
    else if(m<2 && n<=2)
    printf("%d\n",2-m+2-n);
    else if(m>=2 && n<2)
    printf("%d\n",m-2+2-n);
    else if(m<=2 && n>2)
    printf("%d\n",(2-m)+(n-2)); 
    else
    printf("%d",0); 

return 0;
}