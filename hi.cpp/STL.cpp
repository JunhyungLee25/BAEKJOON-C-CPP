#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l1; // 비어있는 int list 생성
    list<char> l2; // 비어있는 char list 생성

    list<int> l3(5); // int list 생성 후 5개의 원소를 0으로 초기화
    list<int> l4(4, 3); // int list 생성 후 4개의 원소를 3으로 초기화 {3, 3, 3, 3}

    list<int> L = {3, 7}; // int list 생성 후 3, 7로 초기화

    // 리스트에 값 추가
    list<int> L1 = {3, 7};
    list<int>::iterator cur = L1.begin(); // cur는 3을 가리키고 있다
    L1.push_front(1); // {1, 3, 7}
    L1.push_back(10); // {1, 3, 7, 10}
    L1.insert(cur, 5); // cur가 가리키는 곳(3) 앞에 5를 추가 {1, 5, 3, 7, 10}
    cur++; // cur가 1칸 앞을 가리킨다 -> cur는 5를 가리킨다

    // 리스트에 값 삭제
    L1.pop_front(); // {5, 3, 7, 10}
    L1.pop_back(); // {5, 3, 7}
    cur = L.erase(cur); // cur이 가리키는 값을 제거 후 그 다음 원소의 위치를 반환 -> 3 가르킴

    for(auto i : L){
        cout << i << ' ';
    }
    return 0;
}