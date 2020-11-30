#include <stdio.h>

char third_laba(char A[]) {
  

    for (int i = 1; i < strlen(A); ++i) {
        if (A[i] + 1 != A[i -1])  
            return A[i] + 1; 

    }

    return 0;
}

int main() {
    char A[100];
    printf("\nEnter 5 letters");
    gets(A);
    printf("%s", A);

    for (int i = 0; i <= strlen(A); i++) {
        if (A[i] >= 65 && A[i] <= 90)
            A[i] = A[i] + 32;
    }

    char missResult = third_laba(A);
    printf("\n");
    printf("%c", missResult);

    return 0;
}
//add