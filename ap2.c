#include <stdio.h>
#include <stdlib.h>
void main()
{
int list[5]; //5개 정수 배열
int *plist[5]; //정수에 대한 5개 포인터
list[0] = 10; //값 대입
list[1] = 11;
plist[0] = (int*)malloc(sizeof(int)); //동적 메모리 할당
printf("[----- [이선주] [2021041042] -----]\n");
printf("list[0] \t= %d\n", list[0]);
printf("address of list \t= %p\n", list); //list 주소 출력
printf("address of list[0] \t= %p\n", &list[0]); //list 주소 출력
printf("address of list + 0 \t= %p\n", list+0); // list=&list[0]=list+0
printf("address of list + 1 \t= %p\n", list+1); //4바이트 증가, 주소출력
printf("address of list + 2 \t= %p\n", list+2); //8바이트 증가, 주소출력
printf("address of list + 3 \t= %p\n", list+3); //12바이트 증가, 주소출력
printf("address of list + 4 \t= %p\n", list+4); //16바이트 증가, 주소출력
printf("address of list[4] \t= %p\n", &list[4]); //list+4=&list[4]
free(plist[0]); //동적 메모리 해제
}
