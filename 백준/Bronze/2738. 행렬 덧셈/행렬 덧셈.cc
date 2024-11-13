#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false); // C++ 입출력 속도를 높이기 위해 sync 해제
    cin.tie(NULL); // 입출력 묶음 해제

    int n, m;
    cin >> n >> m;

    vector <vector<int>> a(n, vector <int>(m));
    vector <vector<int>> b(n, vector <int>(m));

    //2차 벡터 a 초기화
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    //2차 벡터 b 초기화
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cin >> b[i][j];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] += b[i][j];
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}