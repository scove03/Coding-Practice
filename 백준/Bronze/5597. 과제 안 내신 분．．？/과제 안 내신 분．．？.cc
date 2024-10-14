#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() 
{
    ios::sync_with_stdio(false); // C++ 입출력 속도를 높이기 위해 sync 해제
    cin.tie(NULL); // 입출력 묶음 해제

    vector <int> n(30), n_sub(30, 0), result(2); //n: 제출한 학생, n_sub: 제출한 학생(정렬), result: 제출하지 않은 학생
    int k = 0;

    //제출한 학생 입력
    for (int i = 0; i < 28; i++)
        cin >> n[i];

    //제출한 학생을 n_sub에 정렬
    for (int i = 0; i < 28; i++) {
        for (int j = 0; j < 30; j++) {
            if (n[i] == j+1) {
                n_sub[j] = j+1;
                break;
            }
        }
    }

    //제출하지 않은 학생 구하기
    for (int i = 0; i < 30; i++) {
        if (n_sub[i] == 0) {
            result[k] = i + 1;
            k++;
        }
    }

    //순서 정렬
    sort(result.begin(), result.end());

    //제출 안한 학생 출력
    cout << result[0] << "\n" << result[1];
    
    return 0;
}