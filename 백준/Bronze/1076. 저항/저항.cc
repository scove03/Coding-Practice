//문제: 저항 / #1076 (브론즈 2)
//이름: 최수영
//문제 풀이 시작 날자: 2024.12.04
//문제 풀이 마무리 날자: 2024.12.04

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); // C++ 입출력 속도를 높이기 위해 sync 해제
    cin.tie(NULL); // 입출력 묶음 해제
    long long result[4]; //색의 값
    string color[3];//입력할 3개의 색
    //저장되어 있는 색 10개
    string colors[] = { "black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"
    };

    //색 입력
    cin >> color[0] >> color[1] >> color[2];

    //색의 값 찾기
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) {
            if (color[i] == colors[j]) {
                result[i] = j;
                break;
            }
            
        }
    }
    //곱 제외 저항 값
    result[3] = result[0] * 10 + result[1];
    
    for (int i = 1; i <= result[2] && result[2] != 0; i++) {
        result[3] *= 10;
    }

    //최종 결과값 출력
    cout << result[3];

    return 0;
}