/******************
* Name: Lu Kexin  *
* UID: 3035329869 *
*******************/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void print_menu();
/* print the instruction menu */

void order(string l[], int n);
/*
* Task:reorder the list in ascending order
* input: the string list l, number of elements in the list n
*/

int keyword_search(string kw, string w);
/*
* Task: search the keyword
* Input: the keyword kw, the search target w
* return the number of occurrences of the keyword
*/

void print_result(string l[], int a[], int n);
/* print the result of searching */


int main(int argc, char const *argv[])
{
	/*
	* Part (a): Read the contents in "table_of_content.txt"
	*           store the lists in an array of strings
	*           store each student's homework in another array of strings
	*           output the number of students
	*/
	string list_of_homework[20];
	ifstream table_input_stream;
	table_input_stream.open("table_of_content.txt");

	// count the no. of homework
	int number_of_students = 0;
	for (number_of_students; number_of_students < 20; number_of_students ++){
		if (table_input_stream >> list_of_homework[number_of_students]);
		else break;
	}

	table_input_stream.close();

	// change into ascending order
	order(list_of_homework, number_of_students);

	// open every homework and store the content in an array
	string homework[number_of_students];
	for (int j = 0; j < number_of_students; j++){
		// open the j-th homework
        ifstream homework_stream;
        homework_stream.open(list_of_homework[j].c_str());

        // get everything in the specific homework
        getline(homework_stream, homework[j]);
        homework_stream.close();
    }

	cout << number_of_students << " students' text files are read." << endl;


	/*
	* Part(b): print the instruction menu repeatedly
	*         ask for the user's input
	*         deal with the logic flow
	*/
	int command;

	while (true){
		print_menu();
		cin >> command;

		if (command == 1){
			// get the keyword
			cout << "The keyword is:" << endl;
			string keyword;
			cin >> keyword;

            int occurrences[number_of_students] = {0};
			for (int j = 0; j < number_of_students; j++)
				occurrences[j] = keyword_search(keyword, homework[j]);

			print_result(list_of_homework, occurrences, number_of_students);
		}
		else break;
	}

	return 0;
}

int keyword_search(string kw, string w){
	int count = 0, pos = 0;

	//try to locate the first occurrence
	pos = w.find(kw.c_str());
	if (pos != string::npos){
		count ++;

		//then try to find the next keyword position until it cannot find one
		while (true){
			pos = w.find(kw.c_str(), pos + 1);
			if (pos != string::npos) count ++;
			else break;
		}
	}
	return count;
}

void order(string l[], int n){
	//bubble sort
	for (int j = 0; j < n; j ++){
		for (int k = j + 1; k < n; k ++){
			if (l[j] > l[k]) swap(l[j], l[k]);
		}
	}
}

void print_menu(){
	cout << "------\n"
		<< "Options:\n"
		<< "1. Keyword search\n"
		<< "2. Exit\n"
		<< "Your choice:\n";
}

void print_result(string l[], int a[], int n){
	for (int j = 0; j < n; j++)
		cout << l[j] << " " << a[j] << endl;
}
