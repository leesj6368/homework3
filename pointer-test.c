#include <stdio.h>
int main()
{
    int i, *p; //정수 변수i와 포인터변수 p 선언
    i = 10; //i를 10으로 초기화
    printf("value of i = %d\n", i); //i 값을 10진수 형태로 출력
    printf("address of i = %p\n", &i); //i의 주소값 출력
    printf("value of p = %p\n", p); //p의 값 출력
    printf("address of p = %p\n", &p); //p의 주소값 출력
    p = &i; //변수 i의 주소를 p에 대입
    printf("\n\n----- after p = &i ------------\n\n"); //문장출력
    printf("value of p = %p\n", p); // p값 출력
    printf("address of p = %p\n", &p); //p의 주소값 출력
    printf("dereferencing *p = %d\n", *p); //p의 참조값 출력
    printf("안녕하세요");
    return 0;
}
