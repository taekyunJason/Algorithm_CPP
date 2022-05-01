//C++ 엄격한 타입시스템 언어입니다. 즉, type을 설정해줘야 합니다. 또한 매개변수의 수나 타입 등에 따라 함수가 다르게 설정됩니다.
//즉, func(int a, int b)와 func(int a)는 엄연하게 다른 함수로 인식됩니다.
//알고리즘에서 자주 나오는 형은 다음과 같습니다. 이를 배워보겠습니다.



//1. 헤더파일입니다. STL 라이브러리를 import합니다. 
//이 중 bits/stdc++.h는 모든 표준 라이브러리가 포함된 헤더입니다. 
//그래서 queue나 stack 등을 사용할 때 일일이 입력할 필요가 없습니다. 
//저것만 입력해놓고 빠르게 알고리즘만 신경 쓰면 됩니다.
#include <bits/stdc++.h> 
//2. std라는 namespace를 사용한다는 뜻입니다. 
//cin이나 cout 등을 사용할 때 원래는 std::cin 이렇게 호출을 해야 하는데 
//std를 기본으로 설정한다는 뜻입니다. 이 네임스페이스는 같은 클래스 이름 구별, 모듈화에 쓰입니다.
using namespace std;
//3. 문자열을 선언했습니다. <타입> <변수명> 이렇게 선언합니다. 
//string이라는 타입(형)을 가진 a라는 변수명입니다.
//이 때 예를 들어 string a = “큰돌”이라고 해봅시다. 
//이럴 때 a를 lvalue라고 하며 큰돌을 rvalue라고 합니다. 
//lvalue는 추후에 다시 사용될 수 있는 변수이며 rvalue는 한번쓰고 다시 사용되지 않은 변수를 말합니다.
string a;
int main(){
    //4. 입력입니다. 대표적으로 cin, scanf가 있습니다. 후에 좀 더 자세하게 설명합니다.
    cin >> a;
    //5. 출력입니다. 대표적으로 cout과 printf가 있습니다. 후에 좀 더 자세하게 설명합니다.
    cout << a << "\n";
    //6. return 0입니다. 프로세스가 일이 정상적으로 마무리되며 process exit call을 한다는 뜻입니다.
    //참고로 stdlib.h 를 보면 다음과 같이 설명되어있습니다.
    //#define EXIT_SUCCESS 0
    //#define EXIT_FAILURE 1
    //0을 return해야 프로세스를 성공적으로 종료했다라는 의미입니다.
    return 0; 
}




//g++ -std=c++14 -Wall a.cpp -o test.out
//a.cpp파일을 엄격하게(-wall) C++ 14버전으로 컴파일해서 test.out이라는 파일을 
//만든다(-o test.out)는 의미

//./test.out 명령어로 실행!