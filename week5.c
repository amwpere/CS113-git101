// week 5
// scope rules (ขอบเขตหรือช่วงชีวิตของตัวแปร)
// มักจะประกาศนอกฟังก์ชันหรือ block ทั้งหมดที่ด้านบนของโปรแกรมและสามารถเข้าถึงได้จากส่วนใดๆของโปรแกรม เรียกว่า Global Variables
// เช่น
int x = 10; // global variable
int main(){
    // statement
}

// Local Variables จะถูกประกาศไว้ใน block , ภายในตัวฟังก์ชัน รวมถึงตัวแปรพารามิเตอร์ของฟังก์ชัน
// Local Variables จะสามารถใช้งานได้แค่ภายในฟังก์ชันที่ถูกประกาศไว้
// เช่น
int main(){
    int x = 10 ; // Local Variable
    // statement
}
// ตัวอย่างโค้ดในแลป 05
int main(){
    double n,m;
    char operator;
    printf("Initial Value: ");
    scanf("%lf",&n);
    while (1){
        printf("\nOperator: ");
        scanf("%s",&operator);
        if (operator == '+'){
            printf("Input Value: ");
            scanf("%lf",&m);
            n = n + m;
            printf("Present Value is %.4lf\n",n);
        }else if (operator == '-'){
            printf("Input Value: ");
            scanf("%lf",&m);
            n = n - m;
            printf("Present Value is %.4lf\n",n);
        }else if (operator == '*'){
            printf("Input Value: ");
            scanf("%lf",&m);
            n = n * m;
            printf("Present Value is %.4lf\n",n);
        }else if (operator == '/'){
            printf("Input Value: ");
            scanf("%lf",&m);
            n = n / m;
            printf("Present Value is %.4lf\n",n);
        }else {
            printf("\nFinish Calculation. Final Value is %.4lf\n", n);
            break;
        }
    }
}
// โค้ดนี้มีการประกาศตัวแปรแบบ local variable
// โค้ดนี้ทำงานโดยการรับค่าเริ่มต้นมา แล้วให้ผู้ใช้ป้อนค่า +,-,*,/ และรับจำนวนใหม่มาเพื่อทำการ +,-,*,/ กับค่าเริ่มต้น