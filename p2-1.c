#include <stdio.h>
#define MAX_SIZE 100 //�迭 ũ�� ����
float sum(float [], int); //sum �Լ�����
float input[MAX_SIZE], answer; //���� ����
int i;
void main(void)
{
for(i=0; i < MAX_SIZE; i++)
input[i] = i; //i�� ���� ������ �ֱ�
/* for checking call by reference */
printf("[----- [�̼���] [2021041042] -----]\n");
printf("address of input = %p\n", input); // input�� �ּ� ���
answer = sum(input, MAX_SIZE); //sum �Լ� ����� answer ������ ����
printf("The sum is: %f\n", answer); //answer�� ���
}

float sum(float list[], int n) //sum �Լ� 
{
printf("value of list = %p\n", list); //list �� ���
printf("address of list = %p\n\n", &list); //list �ּ� ���
int i;
float tempsum = 0;
for(i = 0; i < n; i++)
tempsum += list[i]; //tempsum=tempsum+list[i]
return tempsum;
}
