#include <stdio.h>
#include <stdlib.h>
void main()
{
int list[5]; //5�� ���� �迭
int *plist[5]; //������ ���� 5�� ������
list[0] = 10; //�� ����
list[1] = 11;
plist[0] = (int*)malloc(sizeof(int)); //���� �޸� �Ҵ�
printf("[----- [�̼���] [2021041042] -----]\n");
printf("list[0] \t= %d\n", list[0]);
printf("address of list \t= %p\n", list); //list �ּ� ���
printf("address of list[0] \t= %p\n", &list[0]); //list �ּ� ���
printf("address of list + 0 \t= %p\n", list+0); // list=&list[0]=list+0
printf("address of list + 1 \t= %p\n", list+1); //4����Ʈ ����, �ּ����
printf("address of list + 2 \t= %p\n", list+2); //8����Ʈ ����, �ּ����
printf("address of list + 3 \t= %p\n", list+3); //12����Ʈ ����, �ּ����
printf("address of list + 4 \t= %p\n", list+4); //16����Ʈ ����, �ּ����
printf("address of list[4] \t= %p\n", &list[4]); //list+4=&list[4]
free(plist[0]); //���� �޸� ����
}
