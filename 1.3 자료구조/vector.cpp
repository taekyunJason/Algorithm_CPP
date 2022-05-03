//벡터(vector)는 동적으로 요소를 할당할 수 있는 동적 배열입니다. 
//컴파일 시점에 개수를 모른다면 벡터를 써야 합니다. 
//또한, 중복을 허용하고 순서가 있고 랜덤 접근이 가능합니다. 
//탐색과 맨 뒤의 요소를 삭제하거나 삽입하는 데 O(1)이 걸리며, 맨 뒤나 맨 앞이 아닌 요소를 삭제하고 삽입하는 데 O(n)의 시간이 걸립니다.

// #include <bits/stdc++.h>
// using namespace std;
// vector<int> v;
// int main(){
//     for (int i = 1; i <= 10;i++){
//         v.push_back(i);
//     }
//     for(int a:v){
//         cout << a << " ";
//     }
//     cout << "\n";
//     v.pop_back();

//     for(int a:v) {
//         cout << a << " ";
//     };
//     cout << "\n";

//     v.erase(v.begin(), v.begin() + 1);

//     for(int a:v) {
//         cout << a << " ";
//     };
//     cout << "\n";

//     auto a = find(v.begin(), v.end(), 100);
//     if(a == v.end()) cout << "not found" << "\n";
//     fill(v.begin(), v.end(), 10); 
 
//     for(int a : v) cout << a << " "; cout << "\n";
//     v.clear();
//     cout << "아무것도 없을까?\n"; 
 
//     for(int a : v) cout << a << " "; 
//     cout << "\n";
//     return 0;
// }

//뒤부터 요소를 더하는 push_back(), 맨 뒤부터 지우는 pop_back(), 지우는 erase, 요소를 찾는 find(vector의 함수가 아니라 algorithm에서 제공하는 함수입니다.), 배열을 초기화 하는 clear()이라는 함수가 있습니다. 
//또한 push_back()과 같은 기능을 하는 emplase_back()도 있습니다. 
//이 함수가 더 빠릅니다만 알고리즘을 할 때 push_back()을 써도 무방합니다.(시간차이가 그렇게 많이 나지 않습니다.)

//for(int a:v)
//잠시 위의 코드를 보겠습니다. 이는 "vector의 요소를 순차적으로 탐색한다"라는 뜻입니다. 
//그렇다면 vector에 pair이라는 값이 들어가면 for(pair<int,int> a : v)이런식으로 정의해야 해야 겠죠? 
//for(int i = 0; i < v.size(); i++) v[i] 이런식으로 index를 기반으로 접근하는 것과 똑같은 의미입니다.

//또한 vector에 크기를 정해놓고 할 수도 있습니다.
#include <bits/stdc++.h>
using namespace std; 
vector<int> v(5, 100); 

int main(){
    for(int a : v) cout << a << " "; 
    cout << "\n";
    return 0;
}

//위코드는 5크기의 vector를 선언하고 100으로 채운 모습입니다.