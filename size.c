#include<stdio.h>
#include<stdlib.h>
void main()
{
int **x; //���������� ����
printf("[----- [�̼���] [2021041042] -----]\n");
printf("sizeof(x) = %lu\n", sizeof(x)); //x�� ũ�� ���
printf("sizeof(*x) = %lu\n", sizeof(*x)); //x�� ����Ű�� �� ���
printf("sizeof(**x) = %lu\n", sizeof(**x)); //*x�� ����Ű�� �� ���
}
