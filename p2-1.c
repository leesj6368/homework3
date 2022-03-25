#include <stdio.h>
#define MAX_SIZE 100 //배열 크기 선언
float sum(float [], int); //sum 함수선언
float input[MAX_SIZE], answer; //변수 선언
int i;
void main(void)
{
for(i=0; i < MAX_SIZE; i++)
input[i] = i; //i의 값을 변수에 넣기
/* for checking call by reference */
printf("[----- [이선주] [2021041042] -----]\n");
printf("address of input = %p\n", input); // input의 주소 출력
answer = sum(input, MAX_SIZE); //sum 함수 결과를 answer 변수에 대입
printf("The sum is: %f\n", answer); //answer값 출력
}

float sum(float list[], int n) //sum 함수 
{
printf("value of list = %p\n", list); //list 값 출력
printf("address of list = %p\n\n", &list); //list 주소 출력
int i;
float tempsum = 0;
for(i = 0; i < n; i++)
tempsum += list[i]; //tempsum=tempsum+list[i]
return tempsum;
}
