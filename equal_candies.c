#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int box[n];
    for(int i=0;i<n;i++){
        scanf("%d",&box[i]);
    }
    int min=box[0];
    for (int i = 0; i < n; i++)
    {
        if(box[i]<min)
        min=box[i];
    }
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+(box[i] - min);
    }
    printf("%d\n",sum);
    
}
}