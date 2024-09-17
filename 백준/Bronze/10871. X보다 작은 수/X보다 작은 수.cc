#include <iostream>;
#include <vector>;

using namespace std;

int main()
{
	int N, X; //N: 정수 갯수, X: 비교 정수 
	
	cin >> N >> X;

	vector<int> A(N); //수열 A생성

	for (int i = 0; i < N; i++) {
		cin >> A[i];
		
		if (A[i] < X)
			cout << A[i] << endl;
	}
}