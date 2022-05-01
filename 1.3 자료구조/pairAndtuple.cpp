//두가지의 값을 담아야 할 때가 있습니다. 그럴 때 쓰는 pair, 
//그리고 세가지 이상의 값을 넣을 때 쓰는 tuple입니다. 
//여기서 tie는 pair또는 tuple에 들어있는 두가지 이상의 값을 끄집어낼 때 사용됩니다.

// #include <bits/stdc++.h>
// using namespace std;
// pair<int, int> pi;
// tuple<int, int, int> tl;
// int a, b, c;
// int main(){
//     pi = {1, 2};
//     tl = make_tuple(1, 2, 3);
//     tie(a, b) = pi;
//     cout << a << " : " << b << "\n";
//     tie(a, b, c) = tl;
//     cout << a << " : " << b << " : " << c << "\n";
//     return 0;
// }
// 1 : 2
// 1 : 2 : 3

//pair의 경우 {a, b} 또는 make_pair(a, b)로 만들 수 있습니다. 
//그저 2개의 원소를 담은 바구니를 생각하면 됩니다. 
//이 때 보통은 a = pi.first; b = pi.second 이런식으로 끄집어내야 하는데 
//tie(a, b) = pi 이렇게 끄집어 낼 수 있는 것이죠. 
//first와 second라는 코드를 쓰지 않으니 너무나도 편하게 요소를 끄집어낼 수 있습니다. 
//물론 이 때 a와 b는 변수로 선언되어야 합니다.

// #include<bits/stdc++.h> 
// using namespace std; 
// pair<int, int> pi; 
// tuple<int, int, int> ti; 
// int a, b, c;
// int main(){
//     pi = {1, 2};
//     a = pi.first;
//     b = pi.second;
//     cout << a << " : " << b << "\n";
//     ti = make_tuple(1, 2, 3);
//     a = get<0>(ti);
//     b = get<1>(ti);
//     c = get<2>(ti);
//     cout << a << " : " << b << " : "<< c << "\n";
//     return 0; 
// }
// 1 : 2
// 1 : 2 : 3

//위 코드처럼 tie를 쓰지 않으면 조금 더 코드양이 많아지죠? 그래서 tie를 주로 씁니다. 
//예를 들어 pair형태나 tuple형태의 값들이 들어가고 이를 정렬한다면 어떻게 해야할까요?


//참고 : sort
//먼저 sort를 배워보겠습니다. sort는 배열 등을 정렬하는 함수입니다. 
//sort에 들어가는 매개변수로는 3가지가 있으며 2개는 반드시 넣어야 하며 한개는 선택입니다.

//sort(처음, 마지막, 커스텀비교함수)

//이렇게 들어갑니다.
//여기서 첫번째 인자, 처음과 주번째 인자, 마지막은 배열에서 정렬하고 싶은 처음 부분과 마지막 부분을 가리킵니다. first와 last라고 불리죠. 그리고 (first,last) 라는 범위를 갖습니다. 
//즉, first는 포함하고 last는 포함하지 않는다는 의미입니다. 그렇기 때문에 예를 들어 크기가 5인 a라는 배열 전체를 sort한다고 하면 sort(a[0], a[0] + 5)라고 해야 합니다. 
//last위치에 배열의 마지막요소 그 “다음”의 위치를 넣어주어야 합니다. 참고로 a[0] + 5는 배열의 마지막원소가 아닙니다. 마지막원소는 a[0] + 4이겠죠? 
//하지만 sort의 특성상 arr[last]로 last는 포함하지 않기 때문에 마지막 원소 그 다음의 위치를 가리켜야 하는 것이죠.
//또한 내가 만약 3번째 요소까지만 정렬하고 싶다면 sort(a[0], a[0] + 3)이렇게 하면 됩니다. 그렇게 하면 a[0] + 2 까지 정렬됩니다.

//3번째 인자로는 커스텀비교함수(선택)이 있습니다. sort에 커스텀비교함수를 넣지 않으면 기본적으로 오름차순이며 이를 3번째 인자에 greater<int>()를 넣어 내림차순등으로 변경할 수 있습니다. 
//참고로 less<int>()을 통해 오름차순으로 정렬할 수 도 있습니다.

#include <bits/stdc++.h>
    using namespace std;
    vector<int> a;
    int b[5];
    int main(){
        for (int i = 5; i >= 1; i--){
            b[i - 1] = i;
        }

        for (int i = 5; i >= 1; i--){
            a.push_back(i);
        }
    
    // 오름차순
    sort(b, b + 5);
    sort(a.begin(),a.end());
    for(int i : b) cout << i << ' '; 
    cout << '\n';
    
    for(int i : a) cout << i << ' '; 
    cout << '\n';
    
    sort(b, b + 5, less<int>()); 
    sort(a.begin(),a.end(), less<int>()); 
    for(int i : b) cout << i << ' '; 
    cout << '\n';
    
    for(int i : a) cout << i << ' '; 
    cout << '\n';
    
    //내림차순
    sort(b, b + 5, greater<int>()); 
    sort(a.begin(),a.end(), greater<int>()); 
    for(int i : b) cout << i << ' ';
    cout << '\n';
    
    for(int i : a) cout << i << ' ';
    cout << '\n';
    return 0;
}

//먼저 따로 설정하지 않으면 first, second, third 순으로 차례차례 오름차순 정렬됩니다.

#include<bits/stdc++.h>
using namespace std; 
vector<pair<int, int>> v; 
int main(){
    for(int i = 10; i >= 1; i--){ 
        v.push_back({i, 10 - i});
    }

    sort(v.begin(), v.end());
    for(auto it : v) cout << it.first << " : " << it.second << "\n";
    return 0;
}

//위 코드처럼 오름차순 정렬된 것을 볼 수 있습니다. 
//여기서 for(auto it : v) cout << it.first << " :"<< it.second << "\n"; 이 부분은 
//for(pair<int,int> it : v로 할 수도 있습니다. 
//vector v에 있는 “요소”들을 끄집어내서 순회한다는 의미죠. 
//v[0], v[1] 따위로 접근한다는 의미입니다. 
//auto는 형이 정해져있지 않은 형을 뜻합니다. 
//pair<int, int> 보다 auto가 코드수가 더 짧기 때문에 pair나 tuple에 있는 값이나 struct에 있는 값을 기반으로 순회할 때 이런 걸 쓰면 조금 더 빠르게 코드를 짤 수 있습니다.

//자 그렇다면 내림차순 정렬을 하고 싶을 때는 어떻게 해야 할까요? 또 first는 내림차순, second는 오름차순 정렬하고 싶다면요? 
//바로 커스텀 연산자를 만들면 됩니다. sort 함수에 3번째 인자는 커스텀 오퍼레이터를 넣는 인자입니다. 커스텀으로 설정한 정렬함수를 집어넣어서 “커스텀”하게 정렬할 수 있는 것이죠.

#include<bits/stdc++.h>
using namespace std;
vector<pair<int, int>> v;
bool cmp(pair<int, int> a, pair<int, int> b){
    return a.first > b.first; 
}
int main(){
    for(int i = 10; i >= 1; i--){ 
        v.push_back({i, 10 - i});
    }

    sort(v.begin(), v.end(), cmp);
    for(auto it : v) cout << it.first << " : " << it.second << "\n";
    return 0;
}

//vector
//