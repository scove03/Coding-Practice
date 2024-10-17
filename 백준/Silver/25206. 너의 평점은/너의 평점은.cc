#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct {
	char r[3];
	float score;
} S_Score;

int main() 
{
	char sub[51]; //과목
	float grade; //학점 (시간)
	float grade_sum = 0; //학점(시간) 합
	float grade_score = 0; //학점(점수)합
	float div; //평점


	S_Score score[] ={
		{"A+", 4.5},
		{"A0", 4.0},
		{"B+", 3.5},
		{"B0", 3.0},
		{"C+", 2.5},
		{"C0", 2.0},
		{"D+", 1.5},
		{"D0", 1.0},
		{"F", 0.0},
	};
		
	
	char score_sub[3]; //입력

	for (int i = 0; i < 20; i++) {
		scanf("%s %f %s" , sub, &grade, score_sub);
		
		if (strcmp(score_sub, "P") == 0)
			continue;

		for (int j = 0; j < 9; j++) {
			if (strcmp(score_sub, score[j].r) == 0)
			{
				grade_score += score[j].score * grade;
				grade_sum += grade;
			}
		}
	}
	div = grade_score / grade_sum;

	printf("%f", div);


	return 0;
}