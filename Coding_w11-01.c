#include <stdio.h>

void inputAndShow() {
    int scores[3];                   
    char subjects[3][10] = {"Math", "Physics", "Chemistry"};

    for (int i = 0; i < 3; i++) {     
        printf("Enter %s: ", subjects[i]);
        scanf("%d", &scores[i]);
    }

    printf("\n");

    printf("Scores: Math = %d, Physics = %d, Chemistry = %d\n",
           scores[0], scores[1], scores[2]);   
}

int main() {
    inputAndShow();   
    return 0;
}
