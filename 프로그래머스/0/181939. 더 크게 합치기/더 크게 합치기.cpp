#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    string p, q, max;
    
    p=to_string(a) + to_string(b);
    q=to_string(b) + to_string(a);
    
    max = (p > q) ? p : q;
    answer = stoi(max);     
        
    return answer;
}