#include <stdio.h> 

int main() {
    // ประกาศตัวแปรสำหรับเก็บข้อมูลของแต่ละคน
    char name1;                                  // ชื่อ
    int age1;                                    // อายุ
    float height1;                               // ส่วนสูง
    float weight1;                               // น้ำหนัก
    char grade_code1;                            // เกรด

    char name2;                                  // ชื่อ
    int age2;                                    // อายุ
    float height2;                               // ส่วนสูง
    float weight2;                               // น้ำหนัก
    char grade_code2;                            // เกรด

    char name3;                                  // ชื่อ
    int age3;                                    // อายุ
    float height3;                               // ส่วนสูง
    float weight3;                               // น้ำหนัก
    char grade_code3;                            // เกรด

   
    printf("Enter data for 3 people (NameAgeHeightWeightGradeCode):\n");
    printf("Example: K13167.556.0A\n");

    // รับข้อมูล
    printf("Person 1: ");
   
    scanf(" %c*%d*%f*%f*%c", &name1, &age1, &height1, &weight1, &grade_code1);  //พิมพ์ ชื่อ อายุ ส่วนสูง น้ำหนัก เกรด คนที่1

    printf("Person 2: ");
    scanf(" %c*%d*%f*%f*%c", &name2, &age2, &height2, &weight2, &grade_code2);  //พิมพ์ ชื่อ อายุ ส่วนสูง น้ำหนัก เกรด คนที่2

    printf("Person 3: ");
    scanf(" %c*%d*%f*%f*%c", &name3, &age3, &height3, &weight3, &grade_code3);  //พิมพ์ ชื่อ อายุ ส่วนสูง น้ำหนัก เกรด คนที่3

   
  
    printf("+-------+-----+----------+----------+------------+\n");
    
    printf("| %-5s | %-3s | %-8s | %-8s | %-10s |\n", "Name", "Age", "Height(cm)", "Weight(kg)", "Grade Code");
   
    printf("+-------+-----+----------+----------+------------+\n");


    printf("| %-5c | %-3d | %9.1f | %9.1f | %-10c |\n", name1, age1, height1, weight1, grade_code1); //แสดงผล ชื่อ อายุ ส่วนสูง น้ำนัก เกรด คนที่1
    printf("| %-5c | %-3d | %9.1f | %9.1f | %-10c |\n", name2, age2, height2, weight2, grade_code2); //แสดงผล ชื่อ อายุ ส่วนสูง น้ำนัก เกรด คนที่2
    printf("| %-5c | %-3d | %9.1f | %9.1f | %-10c |\n", name3, age3, height3, weight3, grade_code3); //แสดงผล ชื่อ อายุ ส่วนสูง น้ำนัก เกรด คนที่3
    
    printf("+-------+-----+----------+----------+------------+\n");

    return 0; 
}