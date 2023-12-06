#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d",&n);
    char bs[n];
    scanf("%s",bs);
  
    int count=1;
    
    int ad=0;
    for(int i=0;i<n-1;i++){
        if(bs[i+1]=='1' && bs[i]=='0')
          ad++;    
    }

   if(ad<n)
   printf("%d\n",n-(2*ad));
}