#include <iostream>
#include <string>
using namespace std;

bool winCheck(string board[3][3],string player){
	for(int i=0;i<3;i++){
		if(board[i][0]==player&&board[i][1]==player&&board[i][2]==player)
		return true;
	}
	
	for(int j=0;j<3;j++){
		if(board[0][j]==player&&board[1][j]==player&&board[2][j]==player)
		return true;
	}
	
		if(board[0][0]==player&&board[1][1]==player&&board[1][2]==player){
		
		return true;
	}
	
		if(board[0][2]==player&&board[1][1]==player&&board[2][0]==player){
		
		return true;
	}
}

int main() {
    cout << "========= Welcome to Tic Tac Toe =========\n" << endl;

string board[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = " ";
        }
    }
	
string pl1="X";
string pl2="O";
int row,col;
int moves = 0; // Track total moves
while(true){

cout<<endl<<"==============Player One Turn!!============"<<endl;
cout<<"Enter row and col you want to mark (1-3): "<<endl;
cin>>row>>col;

row--;
col--;

if(row>=0&&row<3&&col>=0&&col<3&&board[row][col]==" "){
	board[row][col]=pl1;
	  moves++;
}
else{
	cout<<"Invalid Move!!"<<endl;
}

for(int i=0;i<3;i++){
	cout<<"["<<i+1<<"] ";
	for(int j=0;j<3;j++){
		cout<<" | "<<board[i][j];
	}
	cout<<" | "<<endl;
}

if(winCheck(board,pl1)){
	cout<<"\n======PLAYER ONE HAS WIN!!======="<<endl;
	break;
}
if(moves==9){
	cout<<"DRAW!!"<<endl;
	break;
}


cout<<endl<<"==============Player Two Turn!!============"<<endl;
cout<<"Enter row and col you want to mark (1-3): "<<endl;
cin>>row>>col;

row--;
col--;

if(row>=0&&row<3&&col>=0&&col<3&&board[row][col]==" "){
	board[row][col]=pl2;
	  moves++;
}
else{
	cout<<"Invalid Move!!"<<endl;
}

for(int i=0;i<3;i++){
	cout<<"["<<i+1<<"] ";
	for(int j=0;j<3;j++){
		cout<<" | "<<board[i][j];
	}
	cout<<" | "<<endl;
}
if(winCheck(board,pl2)){
	cout<<"\n======PLAYER TWO HAS WIN!!======="<<endl;
	break;
}
if(moves==9){
	cout<<"DRAW!!"<<endl;
	break;
}
}
}   


