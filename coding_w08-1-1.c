#include <stdio.h>

int main() {
    int i = 2;

    // แสดงเลขคู่ด้วย while loop
    while (i <= 10) {
        printf("%d ", i);
        i += 2;
    }

    printf("\nEnd of loop\n");
    return 0;
}
//กำหนดเงื่อนไขว่าถ้า i น้อยกว่าหรือเท่ากับ 10 ให้ปริ้น i และเอาไปบวก 2 ทำซ้ำจน i ไม่น้อยกว่าหรือเท่ากับ 10
//จบการทำซ้ำ ปริ้น End of loop