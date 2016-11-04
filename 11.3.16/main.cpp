#include <iostream>
using namespace std;

#include"Question.HPP"

int main()
{
	int score = 0;
	
	
	Question question[3];

	question[0].SetQuestion("What is 2+2?", "4");
	question[1].SetQuestion("What is 2*2?", "4");
    question[2].SetQuestion("What is 2-2?", "0");
	

	for (int i = 0; i < 3; i++)
	{
		if (question[i].AskQuestion())
		{
			score++;
		}

	}

	




	
	
	cout << "Final Score: " << score << endl;

	
	return 0;
}