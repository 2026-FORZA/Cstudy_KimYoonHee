#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

    char name[100][11];
    int score1[100];
    int score2[100];
    int score3[100];

    int main() {
        int n;
        int max_score1 = -1; 
        int target = 0;  

        if (scanf("%d", &n) != 1) return 0;

        
        for (int i = 0; i < n; i++) {
            scanf("%s %d %d %d", name[i], &score1[i], &score2[i], &score3[i]);

            
            if (score1[i] > max_score1) {
                max_score1 = score1[i];
                target = i;
            }
        }

        int rank2 = 1;
        int rank3 = 1;

        for (int i = 0; i < n; i++) {
            
            if (score2[i] > score2[target]) {
                rank2++;
            }
           
            if (score3[i] > score3[target]) {
                rank3++;
            }
        }

        
        printf("%s %d %d\n", name[target], rank2, rank3);

    return 0;
}