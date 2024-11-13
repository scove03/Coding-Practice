//문제: 집합 / #11723 (실버 5)
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

    vector <int> s; //공집합S 선언
    string command; //명령어 선언
    int x, time; //입력 값 선언, 반복 횟수 선언
    
    cin >> time;
    
    for (int j = 0; j < time; j++) {
        cin >> command;

        //집합에 값 추가 명령어
        if (command == "add") {
            cin >> x;
            bool is_exist = false; //값 존재유무 값 선언
            //값 존재 확인
            for (int i = 0; i < s.size(); i++) {
                if (s[i] == x) {
                    is_exist = true;
                    break;
                }
            }
            //값이 존재하지 않으면 추가
            if (is_exist == false)
                s.push_back(x);
        }
        //집합에 값 제거 명령어
        else if (command == "remove") {
            cin >> x;
            s.erase(remove(s.begin(), s.end(), x), s.end());
        }
        //집합에 값이 있으면 1, 없으면 0출력
        else if (command == "check") {
            cin >> x;
            bool is_exist = false;
            //값 존재 확인
            for (int i = 0; i < s.size(); i++) {
                if (s[i] == x) {
                    is_exist = true;
                    cout << 1 << '\n';
                    break;
                }
            }
            if (is_exist == false)
                cout << 0 << '\n';
        }
        //집합에 값이 있으면 제거 없으면 추가 명령어
        else if (command == "toggle") {
            cin >> x;
            int i;
            bool is_exist = false;
            for (i = 0; i < s.size(); i++) {
                if (s[i] == x) {
                    is_exist = true;
                    break;
                }
            }
            if (is_exist == false)
                s.push_back(x);
            else
                s.erase(s.begin() + i);
        }
        //집합을 1~20으로 초기화 명령어
        else if (command == "all") {
            s.resize(20);
            for (int i = 0; i < 20; i++)
                s[i] = i+1;
        }
        //집합 비우기 명령어
        else if (command == "empty") {
            s.clear();
            s.resize(0);
        }
    }
    return 0;
}