#include <iostream>
#include <string>

using namespace std;


int main()
{
	ios::sync_with_stdio(false); // C++ 입출력 속도를 높이기 위해 sync 해제
	cin.tie(NULL); // 입출력 묶음 해제

	int i;
	string s;

	cin >> s;

	for (i = 0; i < (s.length()) / 2; i++) {
		if (s[i] != s[s.length() -1- i]) {
			cout << 0;
			break;
		}
	}

	if (i == s.length() / 2)
		cout << 1;
}