#include <fstream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string name[100];
	int score[100] = {0};

	ifstream record_stream;
	record_stream.open("students.txt");

	int i = 0;
	for (i; i < 100; i ++){
		if (record_stream >> name[i] >> score[i]);
		else break;
	}

	double sum = 0, avg = 0;
	for (int j = 0; j <= i; j ++){
		sum += score[j];
	}
	avg = double(sum/i);

	ofstream good_stream;
	good_stream.open("good2.txt");

	for (int j = 0; j <= i; j ++){
		if (score[j] > avg)
			good_stream << name[j] << "	" << score[j] << endl;
	}

	return 0;
}
