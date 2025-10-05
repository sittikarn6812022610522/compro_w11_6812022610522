#include <stdio.h>

float average(int a, int b, int c) {
    return (a + b + c) / 3.0;   
}

int main() {
    int scores[3];                         
    char subjects[3][10] = {"Math", "Physics", "Chemistry"};

    for (int i = 0; i < 3; i++) {
        printf("Enter %s score: ", subjects[i]);
        scanf("%d", &scores[i]);
    }

    float avg = average(scores[0], scores[1], scores[2]);

    printf("\n");

    printf("Math = %d\n", scores[0]);
    printf("Physics = %d\n", scores[1]);
    printf("Chemistry = %d\n", scores[2]);
    printf("Average = %.2f\n", avg);

    return 0;
}




//
//