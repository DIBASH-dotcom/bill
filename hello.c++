#include <stdio.h>
#include <string.h>

int main() {
    char name[5][50];     
    int bill[5];         
    int i;

    int maxBill = -1, minBill = 999999;  
    char maxName[50], minName[50];

    for (i = 0; i < 5; i++) {
        printf("Enter customer name %d: ", i + 1);
        scanf("%s", name[i]);  

        printf("Enter electricity bill: ");
        scanf("%d", &bill[i]); 

        // check highest
        if (bill[i] > maxBill) {
            maxBill = bill[i];
            strcpy(maxName, name[i]);
        }

        // check lowest
        if (bill[i] < minBill) {
            minBill = bill[i];
            strcpy(minName, name[i]);
        }
    }

    printf("\nHighest Bill: %s = %d\n", maxName, maxBill);
    printf("Lowest Bill : %s = %d\n", minName, minBill);

    return 0;
}
