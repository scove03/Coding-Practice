#include <string>
#include <vector>

using namespace std;

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    string min_str[4], sec_str[4]; // 분과 초의 문자열
    int min[4], sec[4], time[4]; //분과 초과 합친 초시간 정수
    
    //숫자만 정리
    min_str[0] = video_len.substr(0, 2);
    sec_str[0] = video_len.substr(3, 2);
    min_str[1] = pos.substr(0, 2);
    sec_str[1] = pos.substr(3, 2);
    min_str[2] = op_start.substr(0, 2);
    sec_str[2] = op_start.substr(3, 2);
    min_str[3] = op_end.substr(0, 2);
    sec_str[3] = op_end.substr(3, 2);
    
    //문자열을 정수로 변환
    for(int i=0; i<4; i++) {
        min[i] = stoi(min_str[i]);
        sec[i] = stoi(sec_str[i]);
        time[i] = min[i]*60 + sec[i]; //초로 나타낸 시간
    }
    
    //현재시간이 오프닝 안에 있으면 오프닝 끝으로 이동
    if (time[1] >= time[2] && time[1] < time[3])
        time[1] = time[3];
    
    //commands 실행
    for (int i=0; i<commands.size(); i++) {
        //10초 앞으로 이동
        if (commands[i] == "prev") {
           time[1] -= 10;
        //00:00보다 작으면 00:00으로 초기화
        if(time[1] < 0)
            time[1] = 0;
        }
        
        //10초 뒤로 이동
        else if (commands[i] == "next") {
            time[1] += 10;
            // 동영상 길이보다 크면 마지막 위치로 초기화
            if(time[1] > time[0])
                time[1] = time[0];
        }
        //바뀐 시간이 오프닝 안에 있으면 오프닝 끝으로 이동
        if (time[1] >= time[2] && time[1] < time[3])
            time[1] = time[3];
    }
    
    //분과 초로 나누기
    min[1] = time[1] / 60;
    sec[1] = time[1] % 60;
    
    //정수를 문자열로 변환
    min_str[1] = to_string(min[1]);
    if (min[1] < 10)
        min_str[1] = '0'+ min_str[1];
    
    sec_str[1] = to_string(sec[1]);
    if (sec[1] < 10)
        sec_str[1] = '0'+ sec_str[1];
    
    string answer = min_str[1] + ":" + sec_str[1];
    return answer;
}