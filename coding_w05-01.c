#include <stdio.h>

int main() {
    char name = 'J';         // ตัวแปรเก็บชื่อ (อักษรตัวเดียว)
    int age = 20;            // ตัวแปรเก็บอายุ
    float weight = 55.5;     // ตัวแปรเก็บน้ำหนัก

    printf("Student %c is %d years old.\n", name, age);
    printf("His weighs is %.1f kg.\n", weight);

    return 0;
}
