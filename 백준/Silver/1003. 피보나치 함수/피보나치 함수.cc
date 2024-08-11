#include <iostream>

using namespace std;

void fibonacci();//0~40 피보나치 수열 0과 1의 갯수 출력 함수
int dp[41][2];

int main(void)
{
    int T, N; //T: 테스트 횟수, N: 피보나치 함수 입력값
    cin >> T;

    fibonacci();

    for (int i = 0; i < T; i++) {
        cin >> N;
        cout << dp[N][0] << " " << dp[N][1] << '\n';
    }
	return 0;
}

void fibonacci()
{

    //초기값
    dp[0][0] = 1, dp[0][1] = 0; //0호출시 0의 개수 1개, 1의 개수 0개
    dp[1][0] = 0, dp[1][1] = 1; //1호출시 0의 개수 0개, 1의 개수 1개

    for (int l = 2; l <= 40; l++) {
        dp[l][0] = dp[l - 1][0] + dp[l - 2][0]; //n호출시 0의 개수
        dp[l][1] = dp[l - 1][1] + dp[l - 2][1]; //n호출시 1의 개수
    }
}
