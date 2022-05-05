//정적배열입니다. 연속된 메모리 공간이며 스택에 할당됩니다. 
//컴파일단계에서 크기가 결정됩니다. c스타일과 std스타일이 있는데 c스타일을 중심으로 배웁니다. 
//c스타일은 int a[10] 이렇게 선언하는 것이며 std스타일은 array<int, 10> a; 이렇게 선언하는 것을 말합니다.

#include <bits/stdc++.h>
using namespace std; 
int v[10];
int main(){
    for(int i=1;i<=10;i++)v[i-1]=i; 
    for(int a:v)cout<<a<<" ";
    cout << "\n";

    auto a = find(v, v + 10, 100);
    if(a == v + 10) cout << "not found" << "\n";
    
    fill(v, v +10, 10); 
    for(int a:v)cout<<a<<" "; 
    cout << "\n";
    
    return 0; 
}

//뭔가 vector에 비해 좀 텅텅 비었습니다. erase, push_back 등의 메서드들이 없기 때문입니다.
//배열의 크기를 먼저 선언해 준 후 배열의 요소를 할당해 준뒤 이런식으로 진행해야 합니다. 
//이때 크기는 문제에서 필요한 “최대크기”로 선언해야 합니다.




//배열의 초기화 : fill과 memset
//위의 코드를 보면 fill을 통해 초기화를 진행한 것을 볼 수 있습니다. 
//fill(시작값, 끝값, 초기화하는값)이렇게 하면 됩니다. 
//이는 memset으로도 할 수 있으며 memset은 바이트단위로 초기화를 하며 보통 0, -1, 하나의 문자로 초기화를 할 때 사용합니다. 
//memset(초기화하는 배열, 값, 배열의 크기) 이렇게 사용합니다.

//vector 초기화 하기
vector<int> v[10]; //v벡터를 10개를 생성합니다. 
vector<int> v(n, 0); //0이라는 value를 가진 n개의 벡터를 생성 

//vector로 2차원 배열 매트릭스 만들기
vector<vector<int> > checked;
vector <vector<int> > v(n + 1 , vector<int> (n + 1, 0));

//fill로도 초기화할 수 있다.
fill(v.begin(), v.end(), 0);

//배열초기화 shortcut : 전체 0으로 초기화한다. 일부 컴파일러에서 통하지 않을 수도 있습니다.
int dp[10] = {0,};
int dp[10][10] = {{0, } };
fill(dist, dist + MAX_N, 0);

//부분초기화 : 0번째를 0, 1번째를 1로 초기화한다.
int a[n] = {0,1};

memset(check, 0, sizeof(check));
//fill을 사용한 2차원 배열 초기화는 이렇습니다.
for(int i = 0;i < 10;i ++) fill(dp[i], dp[i]+10, 0);
fill(&arr[0][0], &arr[0][0] + n*m, k) // 이런식으로 한번에 초기화를 할 수 있습니다.




//배열의 복사 : memcpy
//어떤 변수의 메모리에 있는 값들을 다른 변수의 “특정 메모리값”으로 복사할 때 사용합니다. 
//주로 배열을 복사할 때 사용합니다. 
//아래와 같이 어떤 배열을 수정할 때 원본 배열을 온전히 저장하고 싶을때다음과 같이 씁니다. 
//아래의 모습은 temp라는 배열에 a를 담아두고 a를 수정하는 로직을 구현한 뒤 a라는 배열에 다시 예전 온전한 a를 담은 temp를 이용해 다시 a를 만드는 모습입니다.

memcpy(temp, a, sizeof(a)); 
//a 라는 배열을 수정하는 로직 
memcpy(a, temp, sizeof(temp));

//예를 들어 이렇게 temp라는 배열에 a라는 배열의 모든 것이 담기는 것을 보 수 있습니다.
#include <bits/stdc++.h>
using namespace std; int a[5];
int temp[5];
int main(){
    for(int i = 0; i < 5; i++)a[i] = i; 
    memcpy(temp, a, sizeof(a)); 
    for(int i : temp) cout << i << ' ';
    return 0; 
}