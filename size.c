#include<stdio.h>
#include<stdlib.h>
void main()
{
int **x; //이중포인터 선언
printf("[----- [이선주] [2021041042] -----]\n");
printf("sizeof(x) = %lu\n", sizeof(x)); //x의 크기 출력
printf("sizeof(*x) = %lu\n", sizeof(*x)); //x가 가리키는 값 출력
printf("sizeof(**x) = %lu\n", sizeof(**x)); //*x가 가리키는 값 출력
}
