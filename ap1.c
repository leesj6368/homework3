#include<stdio.h>
#include<stdlib.h>

void main(){
    int list[5]; //5���� ���� �迭
    int *plist[5]={NULL}; //������ ���� 5�� ������ �ʱ�ȭ

    plist[0]=(int *)malloc(sizeof(int)); //���� �޸� �Ҵ�

    list[0]=1; //�迭�� �� ����
    list[1]=100;

    *plist[0]=200; //�����Ͱ� ����Ű�� ù �ּ��� ���� 200
    printf("[----- [�̼���] [2021041042] -----]\n");
    printf("value of list[0] = %d\n", list[0]); //�迭�� ù��° �� ���
    printf("address of list[0] = %p\n", &list[0]); //�迭�� ù��° �ּ� ���
    printf("value of list = %p\n", list); //list=list[0]=&list
    printf("address of list (&list) = %p\n", &list);
    printf("----------------------------------------\n\n");
    printf("value of list[1] = %d\n", list[1]); //�迭 �ι�° �� ���
    printf("address of list[1] = %p\n", &list[1]); //�迭 �ι�° �ּ� ���
    printf("value of *(list+1) = %d\n", *(list + 1)); //list[1]=*(list+1)
    printf("address of list+1 = %p\n", list+1); //list+1=&list[1]
    printf("----------------------------------------\n\n");
    printf("value of *plist[0] = %d\n", *plist[0]); //*plist[0]�� ���
    printf("&plist[0] = %p\n", &plist[0]); //plist[0]�� �ּ� ���
    printf("&plist = %p\n", &plist); 
    printf("plist = %p\n", plist); //plist=&plist=&plist[0]
    printf("plist[0] = %p\n", plist[0]); //plist �迭 �ּ� ���, 0~4
    printf("plist[1] = %p\n", plist[1]);
    printf("plist[2] = %p\n", plist[2]);
    printf("plist[3] = %p\n", plist[3]);
    printf("plist[4] = %p\n", plist[4]);
    free(plist[0]); //�����Ҵ� ����
    
}

