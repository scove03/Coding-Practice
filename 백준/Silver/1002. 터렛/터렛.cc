#include <iostream>
#include <cmath>
using namespace std;

int main(void) 
{
	int x1, y1, r1, x2, y2, r2, n, i=0, T;

	cin >> T;
	
	while (i < T)
	{
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		/*
		두 점이 같을 때
		두 원이 내접 or 외접하는 경우(한 점에서 만남)
		두 원이 서로 다른 두 점에서 만날 때
		*/

		int r;
		float r3; //두 점의 거리

		
		r3 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); // 두 점의 거리
		r = r1 + r2; //목표 거리 합
		
		//두 점이 같을 때
		if (r3 == 0 && r1 == r2)
			n = -1;

		//두 원이 내접 or 외접하는 경우(한 점에서 만남)
		else if (abs(r1 - r2) == r3 || r1 + r2 == r3)
			n = 1;

		//두 원이 서로 다른 두 점에서 만날 때
		else if (abs(r1 - r2) < r3 && r3 < r1 + r2)
			n = 2;

		else
			n = 0;

		cout << n << endl;
		i++;
	}
}