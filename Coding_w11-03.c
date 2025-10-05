#include <stdio.h>

void inputScores(float arr[3][3]) {
    char subjects[3][10] = {"Math", "Physics", "Chemistry"};

    for (int i = 0; i < 3; i++) {     
        printf("Enter scores for Student %d:\n", i+1);
        for (int j = 0; j < 3; j++) { 
            printf("%s: ", subjects[j]);
            scanf("%f", &arr[i][j]);
        }
    }
}

void printTable(float arr[3][3]) {
    printf("\nScore Table:\n");
    printf("Student   Math     Physics   Chemistry\n");
    for (int i = 0; i < 3; i++) {
        printf("%d        %.2f     %.2f     %.2f\n", i+1, arr[i][0], arr[i][1], arr[i][2]);
    }
}

void printAverage(float arr[3][3]) {
    float sumMath = 0, sumPhysics = 0, sumChem = 0;
    for (int i = 0; i < 3; i++) {
        sumMath += arr[i][0];
        sumPhysics += arr[i][1];
        sumChem += arr[i][2];
    }
    printf("\nAverage Scores:\n");
    printf("Math: %.2f\n", sumMath / 3);
    printf("Physics: %.2f\n", sumPhysics / 3);
    printf("Chemistry: %.2f\n", sumChem / 3);
}

int main() {
    float scores[3][3];   

    inputScores(scores);   
    printTable(scores);    
    printAverage(scores);  

    return 0;
}


//