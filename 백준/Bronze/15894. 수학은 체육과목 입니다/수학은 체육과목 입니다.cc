//문제: 수학은 체육과목 입니다 / #15894 (브론즈 3)
//이름: 최수영
//문제 풀이 시작 날자: 2024.11.13
//문제 풀이 마무리 날자: 2024.11.13
#include <iostream>

using namespace std;

//아래 정사각형 개수 x 4
int main()
{
    ios::sync_with_stdio(false); // C++ 입출력 속도를 높이기 위해 sync 해제
    cin.tie(NULL); // 입출력 묶음 해제

    unsigned int under_num;
    cin >> under_num;
    cout << under_num * 4;

    return 0;
}