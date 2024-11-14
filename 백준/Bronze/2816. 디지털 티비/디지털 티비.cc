//문제: 디지털 티비 / #2816 (브론즈 1)
//이름: 최수영
//문제 풀이 시작 날자: 2024.11.13
//문제 풀이 마무리 날자: 2024.11.13
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); // C++ 입출력 속도를 높이기 위해 sync 해제
    cin.tie(NULL); // 입출력 묶음 해제

    int n; //채널 수
    vector <string> tv(100);

    cin >> n;

    //tv채널 입력
    for (int i = 0; i < n; i++)
        cin >> tv[i];
    
    for (int i = 0; i < n; i++) {
        if (tv[i] == "KBS1") {
            while (i != 0) {
                string temp = tv[i];
                tv[i] = tv[i - 1];
                tv[i - 1] = tv[i];
                cout << 4;
                i--;
            }
            break;
        }
        else {
            cout << 1;
        }
    }

    for (int i = 0; i < n; i++) {
        if (tv[i] == "KBS2") {
            while (i != 1) {
                string temp = tv[i];
                tv[i] = tv[i - 1];
                tv[i - 1] = tv[i];
                cout << 4;
                i--;
            }
            break;
        }
        else {
            cout << 1;
        }
    }
    return 0;
}