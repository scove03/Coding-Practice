//문제: K번째 소수 / #15965 (실버 2)
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

    int k; //소수 번째
    int i = 3, j, count = 1; //처음 소수검사 값, 소수횟수
    cin >> k;
    
    //소수 확인
    while (k != 2 && count != k) {
        //한 숫자씩 소수 확인
        for (j = 2; j < i; j++) {
            if (i % j == 0)
                break;
        }
        //소수이면 count + 1
        if (i == j)
            count++;
        i++; //다음 숫자 확인
    }

    cout << --i;
    return 0;
}