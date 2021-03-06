//우리는 항상 입력을 받아 문제를 풀어야 합니다. 물론 프로그래머스나 다른 사이트에서는 그러지 않을 수도 있지만 
//우리는 백준문제를 기본으로 합니다. 백준문제는 항상 입력을 받게 되어있습니다. 그렇다면 어떻게 입력을 받을까요?

// #include <bits/stdc++.h>
// using namespace std;
// int a;
// int main(){
//     cin >> a;
//     scanf("%d", &a);
//     return 0;
// }

//보통은 이렇게 cin과 scanf로 받습니다. 저기 %d는 int형을 받겠다라는 뜻이며 %lf로는 실수형을 받을 수 있습니다. %c로는 char형이 있습니다.
//문제에서 형식을 기반으로 입력이 주어지지 않은 경우 cin을 쓰는 것이 좋습니다. cin은 개행문자(띄어쓰기, 엔터)를 구분하여 입력을 받습니다.
//예를 들어 3.22로 소수점을 두고 입력형식이 주어진 상태로 오는 경우가 있습니다. 이를 어떻게 받아야 할까요?



//바로 아래와 같이 받아야 겠죠? 이렇듯, scanf를 쓰는 때는 입력형식이 정해져있을 때 받습니다.
//또한 이렇게 실수형으로 입력이 올 때 정수형으로 입력을 받고 싶다면 이렇게 하기도 합니다.
//추후 설명하겠지만 실수형연산은 너무나도 정신건강에 해롭습니다. 되도록이면 정수형변환을 해서 하는 것이 좋습니다.
// scanf("%d, %d", &m1, &m2);  3.22를 받는 경우

// 코드          설명
// d           int
// c           char
// s           string
// lf          double
// ld          long long



//따닥따닥 붙여있는 것을 입력받는 법.
// 4 4, 1000, 0000, 0111
//이렇게 따닥따닥 입력이 붙어서 주어지는 경우가 있습니다. 어떻게 하면 좋을까요? 
//2가지 방법이 있습니다.

// 1. string으로 변환
//첫번째는 string으로 받아 변환하는 방법입니다.
// cin으로 받을 때는 개행문자(띄어쓰기, 한줄띄기)까지 받을 수 있습니다.

//  cin >> n >> m;
//  for(int i = 0; i < n; i++){
//      cin >> s;
//  }

//즉 위와 같이 되겠죠. 그리고 그 다음 형변환 과정을 해주거나 문제를 문자로 풀어야 할 것입니다.

//2. scanf로 받기
//두번째 방법, scanf로 바로 받을 수 있습니다.

// #include <bits/stdc++.h>
// using namespace std;
// int a[10][10];
// int main(){
//     cin >> n >> m;
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < m; j++){
//             scanf("%1d", &a[i][j]);
//         }
//     }
//     return 0;
// }

//이렇게 앞에 1을 붙이면 한자리의 int만 받겠다라는 뜻이 되어 받을 수 있습니다.



//getline
//제가 아까 cin이 개행문자를 구분해서 받는다고 했죠? 
//그렇다면 “엄준식 화이팅” 이런 문자열은 어떻게 한번에 받을 수 있을까요? 
//이럴 땐 getline으로 받으면 됩니다. 아래의 코드는 정답 코드입니다.

// #include <bits/stdc++.h>
// using namespace std;
// string s;
// int main() {
//     getline(cin, s);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
    getline(cin, s);
    cout << s << '\n';
    return 0;
}



//입력이 계속해서 이어질 때
//그런데 이런 문제가 있습니다. 문제가 입력을 주다가 안줄 때 끝난다고 명시되어있습니다. 
//그럴 땐 아래와 같이 코드를 구축하면 됩니다.

// while (scanf("%d", &n) != EOF)
// while (cin >> n) // cin으로는 이렇게 하면 됩니다

// #include <bits/stdc++.h>
// using namespace std;
// int a;
// int main(){
//     cin >> a;
//     cout << a << "\n";
//     return 0;
// }