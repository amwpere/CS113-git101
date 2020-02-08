// week 4
// การนิยามฟังก์ชัน ต้องมีการ include header file ของฟังก์ชันนั้น
// เช่น #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// การประกาศ ฟังก์ชัน
// เราสามารถสร้างฟังก์ชันเองได้ เพื่อที่ทำงานตามที่เราต้องการ
// รูปแบบของการประกาศฟังก์ชัน
type name (parameter1, parameter2, ...)
{
    // statements
}
// type เป็นประเภทของฟังก์ชันที่เราต้องการประกาศ
// สามารถประกาศ function type ได้เหมือนกับ primitive datatype
// เช่น int,float,char,void
// name เป็นชื่อของฟังก์ชันที่ต้องการสร้าง ตั้งชื่อให้สอดคล้องกับการใช้งาน
// parameters เป็นตัวแปรที่ส่งเข้ามาในฟังก์ชัน
// statement เป็นคำสั่งของโปรแกรมที่จะให้ฟังก์ชันทำงานและได้ผลลัพธ์ที่ต้องการ
// เช่น
void toBinary(int x)
{
    int a = x % 2;
    x = x / 2;
    if (x > 0)
    {
        toBinary(x);
    }
    printf("%d",a);
}

int main()
{
    char n[5];
    fgets(n, 5, stdin);
    int number = atoi(n);
    toBinary(number);
    printf("\n");
}
// โค้ดนี้ทำงานโดยการแปลงเลขฐาน 10 เป็นฐาน 2 โดยใช้วิธี Recursion(การเรียกซ้ำ)