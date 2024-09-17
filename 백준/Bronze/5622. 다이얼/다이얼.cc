#include <iostream>;
#include <string>;

using namespace std;

int main()
{
	int time = 0; //총 걸린 시간
	string s; //다이얼 문자열

	cin >> s; //s 입력

	//문자열을 하나씩 탐색하여 시간을 추가
	for (int i = 0; i < s.length(); i++) {
		switch (s[i]) {
		case 'A': case'B': case'C': time += 3; break;
		case 'D': case'E': case'F': time += 4; break;
		case 'G': case'H': case'I': time += 5; break;
		case 'J': case'K': case'L': time += 6; break;
		case 'M': case'N': case'O': time += 7; break;
		case 'P': case'Q': case'R': case'S': time += 8; break;
		case 'T': case'U': case'V': time += 9; break;
		case 'W': case'X': case'Y': case'Z': time += 10; break;
		}
	}

	cout << time << endl; //시간 출력
}