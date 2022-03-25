#include <stdio.h>
struct student1 { //구조체 선언
char lastName;
int studentId;
char grade;
};

typedef struct { //구조체 선언
char lastName;
int studentId;
char grade;
} student2;

int main() {
printf("[----- [이선주] [2021041042] -----]\n");
struct student1 st1 = {'A', 100, 'A'}; //구조체 변수를 선언하는 동시에 초기화하기
printf("st1.lastName = %c\n", st1.lastName);//st1.lastName 출력
printf("st1.studentId = %d\n", st1.studentId);//st1.studentId 출력
printf("st1.grade = %c\n", st1.grade);//st1.grade 출력
student2 st2 = {'B', 200, 'B'}; //구조체 변수 선언, 초기화
printf("\nst2.lastName = %c\n", st2.lastName);//st2.lastName 출력
printf("st2.studentId = %d\n", st2.studentId);//st2.studentId 출력
printf("st2.grade = %c\n", st2.grade);//st2.grade출력 
student2 st3;
st3 = st2; //구조치환
printf("\nst3.lastName = %c\n", st3.lastName);//st3.lastName 출력
printf("st3.studentId = %d\n", st3.studentId);//st3.studentId 출력
printf("st3.grade = %c\n", st3.grade); //st3.grade출력
/* equality test */

if(st3 == st2) /* not working */ //컴파일오류, 구조체 비교는 불가능하며, 멤버로 접근하는 방법을 활용해야함
printf("equal\n");
else
printf("not equal\n");
return 0;
}