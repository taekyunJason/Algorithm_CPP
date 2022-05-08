//리턴하는 값이 없다.

// #include <bits/stdc++.h>
// using namespace std;
// int ret = 1;
// void a(){
//     ret = 2;
//     cout << ret << "\n";
//     return;
// }
// int main(){
//     a();
//     return 0;
// }

//a라는 함수가 ret을 바꾸고 아무것도 리턴하지 않음을 보여줍니다. 이렇게 아무것도 리턴하지 않을 때는 void를 씁니다.
//함수를 선언할 때 어떤 형을 반환하는지 명시해주어야 하고 이를 return하는 값과 맞춰주어야 합니다. 
//위의 코드는 아무것도 반환하지 않는 void형이며 만약 int를 리턴하는 함수는 int, double를 리턴하는 함수는 double를 써야 합니다.

//함수를 선언할 때는 항상 호출되는 위쪽 부분에 선언을 해야 합니다. 위의 코드를 보면 
//a()라는함수를위에 선언했고 main에서 a()라는 함수를 호출하는 것을 볼 수 있죠?
//물론 형과 인자만 선언을 해 놓고 아래쪽에 해서 모듈화를 하는 방법이 있는데 알고리즘은 시간싸움입니다. 
//그냥 위에다 선언합시다.


#include <bits/stdc++.h>
using namespace std;
int ret = 1;
void a(){
    ret = 2;
    cout << ret << "\n";
    return;
}

int main(){
    a();
    return 0;
}