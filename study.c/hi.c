#include<stdio.h>
void function() {
    int a;  // 모든 변수를 함수 시작 부분에서 선언해야 함
    a = 10;
    printf("%d", a);
}
int main() {
    int num;
    printf("숫자를 입력하세요: ");
    scanf("%d", &num);
    printf("입력한 숫자: %d\n", num);
    return 0;
}
// C: 같은 이름의 함수를 여러 개 정의할 수 없음.
// C: 구조체(struct)만 존재하며, 데이터와 함수를 함께 담을 수 없음.
// C: malloc(), calloc(), free()를 사용하여 동적 메모리를 할당/해제.
// C 코드 (malloc, free 사용)
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int* ptr = (int*)malloc(sizeof(int));  // 동적 메모리 할당
//     *ptr = 10;
//     printf("%d\n", *ptr);
//     free(ptr);  // 메모리 해제
//     return 0;
// }
