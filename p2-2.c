#include <stdio.h>
void print1 (int *ptr, int rows); //print1 �Լ� ����
int main()
{
int one[] = {0, 1, 2, 3, 4}; //�迭 �ʱ�ȭ
printf("one = %p\n", one); //one=&one=&one[0] 
printf("&one = %p\n", &one); //�ּ� ���
printf("&one[0] = %p\n", &one[0]); //ù��° �ּ����
printf("\n");
print1(&one[0], 5); //pritn1 �Լ� ȣ��
return 0;
}
void print1 (int *ptr, int rows) //*ptr�� rows�� �Ű�������
{/* print out a one-dimensional array using a pointer */
int i;
printf ("Address \t Contents\n");
for (i = 0; i < rows; i++)
printf("%p \t %5d\n", ptr + i, *(ptr + i)); //for������ ���鼭 i�� ���� ���� 4����Ʈ�� ����
printf("\n");
printf("[----- [�̼���] [2021041042] -----]\n");
}
