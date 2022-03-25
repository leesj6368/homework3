#include <stdio.h>
void print1 (int *ptr, int rows); //print1 함수 선언
int main()
{
int one[] = {0, 1, 2, 3, 4}; //배열 초기화
printf("one = %p\n", one); //one=&one=&one[0] 
printf("&one = %p\n", &one); //주소 출력
printf("&one[0] = %p\n", &one[0]); //첫번째 주소출력
printf("\n");
print1(&one[0], 5); //pritn1 함수 호출
return 0;
}
void print1 (int *ptr, int rows) //*ptr과 rows를 매개변수로
{/* print out a one-dimensional array using a pointer */
int i;
printf ("Address \t Contents\n");
for (i = 0; i < rows; i++)
printf("%p \t %5d\n", ptr + i, *(ptr + i)); //for루프가 돌면서 i의 값에 따라 4바이트씩 증가
printf("\n");
printf("[----- [이선주] [2021041042] -----]\n");
}
