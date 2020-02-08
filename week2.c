// week 2
#include <stdio.h>
#include <stdlib.h>
// เสร็จคำสั่งต้องใส่ semi colon(;) ทุกครั้ง
// Ex:
int main(){
    printf("Hello world"); // กรณีเป็น "double quote" จะ print ได้ แต่ถ้าเป็น 'single quote' จะ print ไม่ได้
}
// ภาษา C ประกาศขนาดแล้วประกาศเลย
int main(){
    int a = 10; // เก็บได้ตั้งแต่ -2100000000 ถึง 2100000000
    unsigned long long d = 4000000000 ; // เก็บได้เยอะสุด
    long long b = 100 ; // long = 4 byte / long long = 8 byte

    float e = 0.1; // 4 byte
    double f = 45.00 ; // 8 byte
    char c = 'a'; // max = 255 ( 1111 1111 ) / char เก็บเป็นจำนวน int จึงทำให้char + int ได้
    char name[] = "kong" ; // array ประกาศแล้วประกาศเลย เพิ่มไม่ได้
}

// โค้ดที่อยู่ใน {} เราเรียกว่า block
// การ warning! ตัวอย่าง
// /tmp/tmphj9kf4q7.c:1:1 warning : return type defaults to 'int'
// :1:1 คือ การบอกตำแหน่ง บรรทัดที่ 1 ตัวอักษรตัวที่ 1
//  warning : return type defaults to 'int' หมายถึงเราต้องกำหนด ว่า ฟังก์ชัน main เป็นประเภทอะไร เพื่อที่ C จะได้ส่งไปยังผู้เรียก

int main(){
    int x = 0xb5 ; // x เก็บค่าเลขฐาน16
    
    printf("x = %d(10)\n",x) ; // %d print เลขฐาน 10 ของตัวแปร x
    printf("x = %o(8)\n",x) ;  // %o print เลขฐาน 8 ของตัวแปร x
    printf("x = %x(16)\n",x) ;  // %x print เลขฐาน 16 ของตัวแปร x
}

// result:
// x = 181(10)
// x = 265(8)
// x = b5(16)
