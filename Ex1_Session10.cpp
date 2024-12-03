#include <stdio.h>

int main() {
    
    int array[] = {10, 20, 30, 40, 50};
    int n = sizeof(array) / sizeof(array[0]);
    int element, found = 0;

    printf("Nhap phan tu can tim: ");
    scanf("%d", &element);

    for (int i = 0; i < n; i++) {
        if (array[i] == element) {
            printf("Phan tu %d ton tai o vi tri %d\n", element, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Phan tu %d khong ton tai trong mang\n", element);
    }

    return 0;
}
