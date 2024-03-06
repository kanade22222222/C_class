/* C언어 1일차
 *
 * 세미콜론(;) : C언어에서는 문장이 끝날 때마다 세미콜론을 붙여야한다.
 * 주석 : 코드에 설명문을 추가, 컴파일 시 영향 X
 *
 * */

#include <stdio.h> // standard input output 헤더 파일을 include(포함)하다

int main(void) { // main 함수

    printf("%d %d", 10, 20); // %d 는 정수의 서식문자, 즉 10과 20이 인자로 문자열 안으로 들어감
    printf("\n\n"); // \n : Escape 문자, 한줄을 띄우는 문자
    
    return 0;
}
