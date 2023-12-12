#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int money[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&money[i]);
    }
    int k=1;
    int l=1;
    for (int i = 1; i < n; i++)
    { 
       if (money[i]>=money[i-1]){
         k++;
         }
       else{
         k=1;
         }
    if(k>l)
      l=k;
      else
      l=l;
    } 
    printf("%d\n",l);
         
}

