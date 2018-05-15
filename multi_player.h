#include"board.h"
#include"playerdata.h"
#ifndef class_multi_player
#define class_multi_player
class multi_player:public board{
	int row;
	int col;
	data e;
public:
	void player1(){ //player 1 is setting ships
		

	int max=getmaxships();
	
	int count=0;
	while(count<max){
	cout<<"enter row of ship "<<count+1<<" where you want to hide it"<<endl;
	cin>>row;
	cout<<"enter col of ship " <<count+1 <<"  where you want to hide it"<<endl;
	cin>>col;
	sea[row][col]=1;
	count++;

	}
	

	}
void player2(){        //player 2 is setting ships
		

	int max=getmaxships();
	
	int count=0;
	while(count<max){
	cout<<"enter row of ship "<<count+1<<" where you want to hide it"<<endl;
	cin>>row;
	cout<<"enter col of ship " <<count+1 <<"  where you want to hide it"<<endl;
	cin>>col;
	sea[row][col]=1;
	count++;

	}
	

	}

void attack(multi_player &p1,multi_player &p2,int s){        //player vs player
	bool won1=true;
	bool won2=true;
	int pick=0;
	int pick2=0;
	int scores1=0;
	int scores2=0;
	cout<<"player 1 turn............................"<<endl;
	while(won1&&won2){
	cout<<"enter row where you want to search"<<endl;
	cin>>row;

	cout<<"enter column where you want to search"<<endl;
	cin>>col;
	if(p2.sea[row][col]==1){
	cout<<"you destroyed enemy ship"<<endl;
	sea[row][col]=0;
	pick++;
	scores1++;
		cout<<"player 2 turn"<<endl;
	if(pick==s)
		won1=false;
	}

	else{
		cout<<"you missed........."<<endl;
	cout<<"its player 2 turn"<<endl;

	}
	cout<<"____________________________________________________"<<endl;


	cout<<"enter row where you want to search"<<endl;
	cin>>row;

	cout<<"enter column where you want to search"<<endl;
	cin>>col;

	if(p1.sea[row][col]==1){
	cout<<"you destroyed enemy ship"<<endl;
	sea[row][col]=0;
	pick2++;
	scores2++;
	cout<<"player 1 turn"<<endl;
	if(pick2==s)
		won2=false;
	
	}
	else
	{	
		cout<<"you missed........."<<endl;
	cout<<"its player 1 turn"<<endl;

	}
	}

	if(!won1){
		cout<<"player 1 won"<<endl;
	e.input(scores1);
	}
	if(!won2)
	{
		cout<<"player 2 won"<<endl;
	e.input(scores1);
	}
}
};
#endif