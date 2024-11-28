#include<stdio.h>

int main() {
	int array[2][4] = {
        {11, 111, 1, 1111},
        {8, 99, 777, 6666}
    };

    int max = array[0][0];
    for (int i = 0; i < 2; i++) { 
        for (int j = 0; j < 4; j++) { // 
            if (array[i][j] > max) {
                max = array[i][j]; 
                 printf("Phan tu lon nhat trong mang là: %d\n", max);
            }
        }
    }

    return 0;
}
