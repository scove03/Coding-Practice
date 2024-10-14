#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); // C++ 입출력 속도를 높이기 위해 sync 해제
    cin.tie(NULL); // 입출력 묶음 해제

    int N, k; // 명령 개수 선언
    cin >> N;

    vector<int> stack; // 스택 선언

    for (int i = 0; i < N; i++) {
        cin >> k; // 명령값 입력

        switch (k) {
            // 1 입력: 정수 X를 스택 맨 위에 삽입
            case 1: {
                int X;
                cin >> X;
                stack.push_back(X);
                break;
            }
            // 2 입력: 맨 위의 스택을 제거하고 그 값을 출력
            case 2: {
                if (!stack.empty()) {
                    cout << stack.back() << '\n';
                    stack.pop_back();
                } else
                    cout << -1 << '\n';
                break;
            }
            // 3 입력: 스택에 있는 정수 개수 출력
            case 3: 
                cout << stack.size() << '\n';
                break;
            // 4 입력: 스택이 비어있으면 1, 아니면 0 출력
            case 4: 
                cout << stack.empty() << '\n';
                break;
            // 5 입력: 스택에 정수가 있으면 맨 위의 정수 출력, 없으면 -1 출력 
            case 5: {
                if (!stack.empty())
                    cout << stack.back() << '\n';
                else
                    cout << -1 << '\n';
                break;
            }
        }
    }
}