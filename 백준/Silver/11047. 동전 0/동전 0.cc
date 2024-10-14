#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, K, c = 0; //N: 동전 종류 개수, K: 원하는 동전 총 합
	
	cin >> N >> K;
	
	vector <int> A(N); //동전 종류

	for (int i = 0; i < N; i++)
		cin >> A[i];


	for (int i = N - 1; i >= 0; i--) {
		if (K >= A[i]) { //동전이 원하는 총 합보다 작으면 
			c = c + (K / A[i]); //C를 K의 몫만큼 더함
			K %= A[i]; //K를 나머지 값으로 초기화
		}
	}

	cout << c << endl; //동전 개수 출력
}