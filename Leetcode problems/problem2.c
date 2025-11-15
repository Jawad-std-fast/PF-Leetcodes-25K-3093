#include <stdio.h>

int main() {
    int n;
    
   
    printf("Enter n: ");
    scanf("%d", &n);

    int nums[2*n];
    int result[2*n];

    
    printf("Enter %d elements: ", 2*n);
    for (int i = 0; i < 2*n; i++) {
        scanf("%d", &nums[i]);
    }

  
    int index = 0;
    for (int i = 0; i < n; i++) {
        result[index++] = nums[i];     
        result[index++] = nums[i + n];  
    }

    
    printf("Shuffled Array: ");
    for (int i = 0; i < 2*n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
