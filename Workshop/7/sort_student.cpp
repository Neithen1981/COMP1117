#include <fstream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	//create a sturcture
	struct student
	{
		string name;
		int score;
	};

	student good_student[100];

	//input from file
	ifstream good_stream;
	good_stream.open("good.txt");

	int i = 0;
	for (i; i < 100; i ++){
		if (good_stream >> good_student[i].name >> good_student[i].score);
		else break;
	}

	//sort
	for (int j = 0; j < i; j ++){
		for (int k = j + 1; k < i; k ++){
			if (good_student[j].score < good_student[k].score){
				swap(good_student[j].name, good_student[k].name);
				swap(good_student[j].score, good_student[k].score);
			}

		}
	}

	ofstream result_stream;
	result_stream.open("good2.txt");
	for (int j = 0; j < i; j ++)
		result_stream << good_student[j].name << "	"
						<< good_student[j].score << endl;

	return 0;
}
