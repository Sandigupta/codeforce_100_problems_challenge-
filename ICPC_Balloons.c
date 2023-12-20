// #include<stdio.h>
// #include<string.h>
// int main(){
//     int t;
//     scanf("%d",&t);
//     while(t--){
//         int n;
//         scanf("%d",&n);
//         char pro[n];
//         scanf("%s",pro);
//         int numball1=1;
//         for (int i = 1; i <=n-1; i++)
//         {
//             if(pro[i]!=pro[i-1])
//             numball1++;
//         }
//         int numball2=1;
//         for(int i=0;i<n;i++){
//             for(int j=1+i;j<n;j++){
//                 if(pro[i]==pro[j])
//                 numball2++;
//             }
//         }
//         printf("%d\n",numball1);
//          printf("%d\n",numball2);
//     }
// }
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        char s[51];
        scanf("%s", s);

        int balloons = 0;
        int solved[26] = {0};

        for (int i = 0; i < n; i++) {
            int problemIndex = s[i] - 'A';

            // Check if the problem is already solved by any team
            if (solved[problemIndex] == 0) {
                // First team to solve the problem gets an additional balloon
                balloons++;

                // Mark the problem as solved
                solved[problemIndex] = 1;
            }

            // Every team that solves a problem gets a balloon
            balloons++;
        }

        printf("%d\n", balloons);
    }

    return 0;
}
