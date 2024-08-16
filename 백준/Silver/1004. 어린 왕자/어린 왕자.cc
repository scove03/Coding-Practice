#include <iostream>
#include <cmath>

using namespace std;

int start();
//**알고리즘**
//출발(도착)점과 원의 중심점의 거리 > 반지름 == 만나지않음
//출발(도착)점과 원의 중심점의 거리 <= 반지름 == 만남

int main(void)
{
    int T, G; //T: 테스트 횟수, NG: 만나는 횟수
    
    cin >> T; //테스트 횟수 입력

    for (int i = 0; i < T; i++) {
        G = start();
        cout << G << '\n';
    }
	return 0;
}

int start() {
    int x1, y1, x2, y2, n, g = 0;
    //x~y: 출발(도착)점, n: 행성 개수, g: 만나는 횟수
    int cx[50], cy[50], r[50];
    //cx, cy:행성 중점좌표, r: 행성 반지름 

    cin >> x1 >> y1 >> x2 >> y2; //출발점, 도착점 입력

    cin >> n; //행성 개수 입력

    for (int i = 0; i < n; i++) {

        cin >> cx[i] >> cy[i] >> r[i]; //행성 입력

        //출발점과 원의 중심점의 거리 <= 반지름
        if (sqrt(pow(abs(x1 - cx[i]), 2) + pow(abs(y1 - cy[i]), 2)) <= r[i])
            g++;

        //도착점과 원의 중심점의 거리 <= 반지름
        if (sqrt(pow(abs(x2 - cx[i]), 2) + pow(abs(y2 - cy[i]), 2)) <= r[i])
            g++;

        if (sqrt(pow(abs(x1 - cx[i]), 2) + pow(abs(y1 - cy[i]), 2)) <= r[i] && sqrt(pow(abs(x2 - cx[i]), 2) + pow(abs(y2 - cy[i]), 2)) <= r[i])
            g -= 2;
    }
    return g;
}
