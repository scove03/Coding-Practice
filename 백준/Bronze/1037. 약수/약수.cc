#include <iostream>;
#include <vector>;

using namespace std;

int main()
{
	int n, N; //1과 자기자신을 제외한 약수의 개수

	cin >> n; //약수 개수 입력

	vector <int> a(n); //1과 자기자신을 제외한 약수

	//a 약수 입력
	for (int i = 0; i < n; i++)
		cin >> a[i];

	//약수 값 순서 정렬
	int temp = 0;

	for (int i = 0; i < a.size() - 1; i++) {
		for (int j = i+1; j < a.size(); j++) {
			if (a[i] > a[j])
			{
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}

	//앞에서 2번째와 뒤에서 2번째를 곱하여 N을 구한다
	N = a[0] * a[a.size() - 1];

	cout << N << endl; // N 출력
}