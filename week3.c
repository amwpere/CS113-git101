// week 3
// คำสั่ง if-else ใช้สร้างเงื่อนไขให้โปรแกรมทำงานตามที่ต้องการ
// รูปแบบของการใช้งานคำสั่ง if-else
if (expression){
    // statement 1
}else {
    // statement 2
}
// คำสั่ง if-else ใช้ตรวจสอบว่าเงื่อนไขเป็นจริงหรือไม่ ถ้าผลลัพธ์เป็นจริง โปรแกรมจะทำงานใน block

// คำสั่ง else-if
// คำสั่ง else-if เป็นคำสั่งมีการเพิ่มเงื่อนไข else if เข้ามาสำหรับการสร้างเงื่อนไขแบบหลายทางเลือก
// รูปแบบของการใช้งานคำสั่ง else-if
if (expression 1){
    // statement 1
}else if (expression 2){
    // statement 2
}else{
    // statement 3
}
// ถ้า expression ตัวไหนเป็น จริง statement ที่เกี่ยวข้องจะถูกทำงาน

// คำสั่ง switch (มีความคล้ายคลึงกับ if-else)
// switch ใช้ในการตรวจสอบเงื่อนไขในลักษณะของค่า expression นั้นเข้ากันได้กับค่าคงที่ตัวใด
// ถ้าตรงกับ expression ไหน โปรแกรมก็จะกระโดดมาทำงาน statement นั้น
switch (expression){
    case constant-expression:
        // statements
    case constant-expression:
        // statements
    default: // คล้าย else
        // statements 
}

// Loops- While , For
// รูปแบบของ while
while (expression){
    // statement
}
// รูปแบบ for
for (expr1;expr2;expr3){ // start;stop;step
    // statement
}