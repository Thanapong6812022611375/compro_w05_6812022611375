#include <stdio.h> 

int main() {
    char name;           // ชื่อ 
    int age;             // อายุ 
    float height;        // ส่วนสูง 

    char subject[20];    // ชื่อวิชา
    float grade;         // เกรดที่ได้
    char grade_symbol;   // สัญลักษณ์เกรด

    // รับข้อมูลส่วนบุคคลจากผู้ใช้
    scanf(" %c %d %f", &name, &age, &height);

    // รับข้อมูลผลการเรียนจากผู้ใช้
    scanf(" %s %f %c", subject, &grade, &grade_symbol);

    // แสดงผลข้อมูลส่วนบุคคล
    printf("%c is %d years old and %.1f centimeters tall.\n", name, age, height);

    // แสดงผลข้อมูลผลการเรียน
    printf("In subject %s, %c got %.2f which is symbolized as '%c'.\n", subject, name, grade, grade_symbol);

    return 0;
}
