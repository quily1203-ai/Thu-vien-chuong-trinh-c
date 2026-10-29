#include<stdio.h>
int main (){
   int a[5];
    printf("Nhập 5 phần tử cho mảng:\n");
    
    
    for(int i = 0; i < 5; i++) {
        printf("Nhập a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    

    int max = a[0];
    for(int i=0; i< 5; i++){
        if(a[i] > max){
            max = a[i];  
        }
    }

    printf("Số lớn nhất trong mảng = %d ", max);
    return 0;


}