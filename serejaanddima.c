#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int turn=1;
    int sum1=0,sum2=0;
    for (int i = 0,j=n-1; i <=j;)
    {   
        if(arr[i]>arr[j])
        {
        if(turn%2==1)
        sum1+=arr[i];
        else
        sum2+=arr[i];
        i++;
        }
        else
        {
          if(turn%2==1)
          sum1+=arr[j];
          else
          sum2+=arr[j];
          j--;
        }
        turn++;
    }
    printf("%d %d",sum1,sum2);
}
     