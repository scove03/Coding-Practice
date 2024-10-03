#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for(int i=0; i<commands.size(); i++) {
    vector<int> array2(array.begin() + commands[i][0]-1, array.begin() + commands[i][1]);
    sort(array2.begin(), array2.end());
    
    answer.push_back(array2[commands[i][2] - 1]);
    }
    
    return answer;
}