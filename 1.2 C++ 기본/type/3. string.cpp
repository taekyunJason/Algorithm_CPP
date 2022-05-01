//char을 아래의 코드처럼 배열로 선언해 여러개의 문자열을 받을 수도 있습니다.
//char s[10];
//하지만 문자열 string으로 선언을 해서 긴 문자열을 할당할 수 있습니다. 
//보통 char[]을 쓰는 것보다 string을 써서 문제를 푸는 것을 추천드립니다.

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string a = "wow fantastic";
//     cout << a << "\n";
//     return 0;                 //wow fantastic
// }

//이 문자열은 각각의 문자요소를 a[0], a[1]... 배열처럼 접근할 수 있습니다. 
//문자열은 문자로 이루어진 배열이니까요.

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string a = "wow";
//     a += " ";
//     a += "fantastic";
//     cout << a.size() << "\n";
//     cout << a << "\n";
//     return 0;                 //13, wow fantastic
// }

//기존값에 더할 때 += 를 쓰면 더할 수 있으며,
//길이를 출력할 때는 size 라는 메소드를 씁니다.

//문자열
//만약 숫자로 된 문자에서 1을 더해준다면 어떻게 될까요? 
//바로 아스키코드에서 + 1한 값이 됩니다.

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s = "123";
    s[0]++;
    cout << s << "\n";
    return 0;              //223
}


//아스키코드는 1963년 미국 ANSI에서 표준화한 정보교환용 7비트 부호체계이며 
//000(0x00)부터 127(0x7F)까지 총 128개의 부호가 사용됩니다. 
//1바이트를 구성하는 8비트 중에서 7비트만 쓰도록 제정된 이유는, 나머지 1비트를 통신 에러 검출을 위한 용도로 비워두었기 때문입니다.
//이는 영문 키보드로 입력할 수 있는 모든 기호들이 할당되어 있는 가장 기본적인 부호 체계입니다.

//https://ko.wikipedia.org/wiki/ASCII 

//문자들은 이렇게 숫자로 변환되서 표기됩니다. 
//위의 코드를 보면 123에서 s[0]에 1을 더해 223이 되었는데 
//이는 아스키코드 49에서 1을 더한 값인 50이 가리키는 값이 2이기 때문에 123 에서 223이 되는 것입니다. 
//즉, 문자열에서 + 하는 연산은 “아스키코드”를 기반으로 수행됩니다.