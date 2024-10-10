#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int j=0, k=-1, count;
    
    while (j<progresses.size()) {
    //일일 작업 실행 
    for(int i=0; i<progresses.size(); i++)
        progresses[i] += speeds[i];
        
    count = 0;
    while (j < progresses.size() && progresses[j] >= 100) {
        count++;
        j++;
    }
    
    if (count > 0)
        answer.push_back(count);
    
    }
        
    return answer;
}