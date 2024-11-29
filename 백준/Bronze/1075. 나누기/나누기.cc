//문제: 나누기 / #1075 (브론즈 2)
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

    int n, f;

    cin >> n >> f;

    n = (n / 100) * 100;
    
    while (n % f != 0) {
        n++;
    }
    n %= 100;

    printf("%02d", n);

    return 0;
}