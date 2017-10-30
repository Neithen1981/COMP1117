#include <iostream>
using namespace std;

void draw_board(int b[3][3]);
int check(int b[3][3]);
void deal(int s);



int main(){
	int board[3][3] = {0};
	int status = 0;
	int round = 0;
	while (round <= 5){
		draw_board(board);
		cout << "Player 1's turn, please select a cell: ";
		int row, column;
		cin >> row >> column;
		board[row][column] = 1;
		status = check(board);
		if (status == 1){
			cout << "Player 1 is the winner!" << endl;
			break;
		}
		round ++;
		if (round == 5){
			cout << "Draw!" << endl;
			break;
		}

		draw_board(board);
		cout << "Player 2's turn, please select a cell: ";
		cin >> row >> column;
		board[row][column] = 2;
		status = check(board);
		if (status == 2){
			cout << "Player 2 is the winner!" << endl;
			break;
		}
	}
	return 0;
}



void draw_board(int b[3][3]){
	cout << "   :   :   " << endl;
	cout << " " << b[0][0] << " : " << b[0][1] << " : " << b[0][2] << " " << endl;
	cout << "---:---:---" << endl;
	cout << " " << b[1][0] << " : " << b[1][1] << " : " << b[1][2] << " " << endl;
	cout << "---:---:---" << endl;
	cout << " " << b[2][0] << " : " << b[2][1] << " : " << b[2][2] << " " << endl;
	cout << "   :   :   " << endl;
}

int check(int b[3][3]){
	for (int i = 0; i < 3; i ++){
		if (b[i][0] == b[i][1] && b[i][1] == b[i][2])
			return b[i][0];
	}
	for (int i = 0; i < 3; i ++){
		if (b[0][i] == b[1][i] && b[1][i] == b[2][i])
			return b[0][i];
	}
	if (b[0][0] == b[1][1] && b[1][1] == b[2][2])
		return b[0][0];
	if (b[2][0] == b[1][1] && b[1][1] == b[0][2])
		return b[2][0];
	return 0;
}

void deal(int s){
	if (s == 0)
		return;
	if (s == 1)
		cout << "Player 1 is the winner!" << endl;
	if (s == 2)
		cout << "Player 2 is the winner!" << endl;
}
