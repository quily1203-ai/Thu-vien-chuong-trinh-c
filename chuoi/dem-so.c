#include <stdio.h>

int main() {
    int n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int a[100];
    int daDem[100] = {0}; 


    printf("Nhap cac phan tu:\n");
    for(int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }


    printf("\n--- KET QUA DEM ---\n");
    for(int i = 0; i < n; i++) {
       
        if(daDem[i] == 0) {
            int dem = 1;
            for(int j = i + 1; j < n; j++) {
                if(a[i] == a[j]) {
                    dem++;
                    daDem[j] = 1; 
                }
            }
            printf("So %d xuat hien %d lan\n", a[i], dem);
        }
    }

    return 0;
}