//문제: 직사각형에서 탈출 / #1085 (브론즈 3)
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

    int x, y, w, h; //현재위치 및 직사각형 끝부분
    int xMin, yMin; //x최소거리와 y최소거리
    int min; //최종 최소거리
    cin >> x >> y >> w >> h;

    //x 최소거리 계산
    if (w - x < x)
        xMin = w - x;
    else
        xMin = x;
    //y 최소거리 계산
    if (h - y < y)
        yMin = h - y;
    else
        yMin = y;

    //x, y 중 최소거리 계산
    if (xMin < yMin)
        min = xMin;
    else
        min = yMin;

    //최소거리 출력
    cout << min;

    return 0;
}