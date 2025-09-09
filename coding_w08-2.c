#include <stdio.h>

int main(){
    int start;
    int stop;
    printf("Enter start number: ");
    scanf("%d",&start);
    printf("Enter stop number: ");
    scanf("%d",&stop);
    printf("Start number is %d and stop number is %d\n",start,stop);
    printf("--------------\n");
    printf("Sequence from start to stop: ");
    for (&start,stop;start <= stop ;start++){
        printf("%d ", start);
    }
    printf("\nThank you.\n");
    return 0;
    
}

//รับค่า start และ stop
//ปริ้นแนะนำค่าที่จะรับ
//ปริ้นแจ้งค่าที่รับมา
//ปริ้นลำดับจาก start ถึง stop โดยใช้ for loop
//เงื่อนไข for loop คือ ถ้า start น้อยกว่าหรือเท่ากับ stop ให้ปริ้น start และเพิ่ม start ไป 1
//ทำซ้ำจนเกินเงื่อนไข
//จบการทำซ้ำ ปริ้น Thank you.