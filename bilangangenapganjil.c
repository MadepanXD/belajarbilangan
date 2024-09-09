#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int input1;
    scanf("%d", &input1);
    if ((input1 % 2) == 0) {
        printf("Genap");
    } else if ((input1 % 2) == 1) {
        printf("Ganjil");
    }
    return 0;
}
