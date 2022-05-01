//출력입니다. 크게 cout과 printf가 있습니다.



//cout
//cout << 출력할 것 <<"\n"해서 하는게 일반적입니다. 
//저렇게 한줄 띄어쓰기를 넣어도 되고 답이 한칸띄어쓰기를 원한다면 cout << "출력할 것" << " "; 이렇게 넣어도 됩니다. 
//문자열 출력에는 보통 cout을 써서 하는 것이 좋습니다.



//실수형 출력
//만약 cout을 사용해 정수부분 + 소수부분 해서 6자리까지 출력한다면 어떻게 해야할까요? (소수부분은 반올림)

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// double a = 1.23456789;
// int main(){
//     cout << a << "\n";  //1.23457
//     cout.precision(7);
//     cout << a << "\n";  //1.234568
//     return 0;
// }

//이렇게 precision을 통해 정해주면 됩니다.



//printf
//형식을 지정해서 출력할 때 좋습니다. 문자열을 출력할 때는 보통 cout을 쓰는 것이 좋으며 
//c_str()를 통해 printf로도 출력이 가능합니다. %다음에 오는 것으로 출력해야 할 변수의 유형을 정한다음에 출력할 수 있습니다. 
//예를 들어 문제에서 홍철 1 : 지수 2 이렇게 출력해라라고 한다면printf(“홍철%d:지수%d”, a, b)이렇게 해놓으면 되겠죠?

//예를 들어 prinf의 출력형식을 이용해 소수점 6자리까지, 그리고 2를 02로 만들어서 출력한다면 어떻게 해야할까요? 앞서 입력에서 설명했듯이 “형식”을 지정할 수 있습니다.

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// double a = 1.23456789;
// int b = 2;
// int main(){
//     printf("%.6lf\n", a);  //1.234568
//     printf("%03d\n", b);  //002
//     return 0;
// }

// 코드          설명
// d           int
// c           char
// s           string
// lf          double
// ld          long long

// #include <bits/stdc++.h>
// using namespace std;
// int a = 1;
// char s = 'a';
// string str = "어벤져스";
// double b = 1.223123;

// int main(){
//     printf("I am a ironman : %d\n", a);
//     printf("I am a ironman : %c\n", s);
//     printf("I am a ironman : %s\n", str.c_str());
//     printf("I am a ironman : %lf\n", b);
//     return 0;
// }



//형변환
//형변환이 문제에 나올 수 있습니다. 갑자기 int형인 것을 double형으로 등 형을 변환하는게 나올 때는 어떻게 해야 할까요?

//1. double을 int형으로 만들기
//그냥 앞에다가 int로 선언해주기만 하면 됩니다.

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     double ret = 2.12345;
//     int n = 2;
//     int a = (int)round(ret / double(n));
//     cout << a << "\n";  //1
//     return 0;
// }

//또한 같은 타입끼리 연산을 하는 것이 중요합니다. 
//예를 들어 double은 double끼리 나눠야 합니다. double과 int가 나눠진다면 어떻게 될까요? double이 됩니다. 
//이런게 순서나 타입간의 관계에 따라 결정이 되는데 이런걸 생각하느니 차라리 double형은 double형 끼리 연산하고 int는 int형끼리 연산하게끔 하는게 "맞왜틀"에 빠지지 않을 가능성을 높여줍니다. 
//“형과 형을 똑같이 해주어야 합니다.” 그리고 저렇게 출력할 때 (int)로 형변환을 해줬죠? 저렇게 하는 겁니다.

//문제를 드리죠.
// int a = (int)p * 100;
// int b = (int)100 * p;

//위의 두 코드가 같을까요? 전자가 형변환이 될 겁니다. 순서를 주의해주세요!

//2. 문자를 숫자로, 숫자를 문자로
//예를 들어 소문자로 된 문자를 숫자로 바꾸는 로직이 필요하다 생각해봅시다. 어떻게 해야 할까요? 
//정답은 아스키코드를 이용하는 것입니다. 앞서 설명했듯이 A ~ Z 는 65 ~ 90 / a ~ z 는 97 ~ 122의 아스키 코드를 가지고 있습니다.
//예를 들어 a부터 시작해 z부터 입력을 받는데 이를 정수 0~ 26까지 표현하고 싶다면 다음과 같이 작성합니다.

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     char a = 'a';
//     cout << (int)a - 97 << "\n";
//     return 0;
// }

//이렇게도 똑같은 의미입니다.

// #include <bits/stdc++.h>
// using namespace std; 
// int main(){
//     char a = 'a';
//     cout << (int)a - 'a' << "\n"; 
//     return 0;
// }



//문자열
//C++에서 많이 사용되는 문자열 함수는 몇개 없습니다.

// #include <bits/stdc++.h>
// using namespace std;
// string dopa = "amumu is best";
// int main(){
//     cout << dopa << "\n";
//     if(dopa.find("amumu") != string::npos){
//         cout << "dopa 속에 아무무 있다!\n";
//     }
//     cout << dopa.substr(0, 3) << "\n";
//     reverse(dopa.begin(), dopa.end());
//     cout << dopa << "\n";

//     return 0;
// }

//- reverse : 원래의 문자열을 바꿔버립니다. begin과 end를 통해 전체를 바꿔도 되고 dopa.begin(), dopa.begin() + 3 이런식으로 부분만 바꿔버릴 수도 있습니다.
//- substr : 시작지점으로부터 몇개의 문자열을 뽑아냅니다.
//- find : 어떠한 문자열이 들어있나 찾습니다. 만약 찾지 못한다면 문자열의 끝 위치인 string::npos를 반환합니다.

//split
//C++에서는 불행하게도문자열을 기반으로 split함수를 지원하지 않습니다. 따라서 다음과 같이 구현해야 합니다. 
//문자열을 문자열을 기준으로 나누는 split함수를 이렇게 만들어봅시다.

#include <bits/stdc++.h>
using namespace std;

vector<string> split(string input, string delimeter){
    vector<string> ret;
    long long pos = 0;
    string token = "";
    while((pos = input.find(delimeter)) != string::npos){
        token = input.substr(0, pos);
        ret.push_back(token);
        input.erase(0, pos + delimeter.length());
    }
    ret.push_back(input);
    return ret;
}

int main(){
    string s = "안녕하세요 큰돌이는 바보에요 정말이에요!"; 
    string d = " ";
    vector<string> a = split(s, d);
    for(string b : a) cout << b << "\n";
}

//복잡해보이지만

while ((pos = input.find(delimiter)) != string::npos) { 
    token = input.substr(0, pos); 
    ret.push_back(token);
    input.erase(0, pos + delimiter.length());
}

//이 세줄만 외우면 됩니다. 
//분해할 기준이 되는 delimiter를 기분으로 input에서 그걸 찾고 
//그걸 기반으로 input을 앞에서부터 지워가며 다시 찾는 로직입니다. 
//그러면서 최종배열인 ret에다 넣어가며 split이 완성된 배열을 완성시키는 것이죠.