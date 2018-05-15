
#include"game_mode.h"

#ifndef class_gameboard
#define class_gameboard
class board{
private:
 gamemode g;     //For composition
 
 int maxships;
int scores;

int lives;
protected:
	int sea[9][9];         //
public:
	board(){
	maxships=0;
	scores =0;
	lives=0;
	
	}
	void setscores(int a){
	scores=a;
	}
	int getscores(){
	return scores;
	}
	void setlives(int l){
	lives=l;
	}
	int getlives(){
	return lives;
	
	}
	void clear_board(){      //To initialize the board 
	
	 for(int i=0; i < 9; i++)
        {
                for(int j=0; j < 9; j++)
                {
                        sea[i][j] = 0;
                }
        }
	
	}
	
	void Show_board()      //For showing user to hide ships
{
        for(int i=0; i < 9; i++)
        {
                for(int j=0; j < 9; j++)
                {
                        cout << sea[i][j] << " ";
               }
                cout << endl;
        }
}
	void setmaxships(int ships){

maxships=ships;
}

	
int getmaxships(){
	return maxships;
	}
void hide_ships(){  //hiding ships
	 int num1,num2,t;
	t=getmaxships();
	
	for(int i=0; i<t;i++)
{
		num1=rand()%t;                      
		num2=rand()%t;
		sea[num1][num2]=1;
		
	}
		/*for(int i=0; i < 9; i++)
        {
                for(int j=0; j < 9; j++)
                {
                        cout << sea[i][j] << " ";
                }
                cout << endl;
        }*/
	
}
void attack(){               //attack //comp vs player
	                           //no file handling or saving data in this mode
bool loose=true;
int row,col;
int count=g.menu();
if(count==1)
lives=maxships*4;
if(count==2)
	lives=3*maxships;
if(count==3)
	lives=2*maxships;
int pick=0;
bool won=true;
while((loose)&&( won)){
	cout<<"enter row where you want to search"<<endl;
	cin>>row;

	cout<<"enter column where you want to search"<<endl;
	cin>>col;
	if(sea[row][col]==1){
	cout<<"you destroyed enemy ship"<<endl;
	sea[row][col]=0;
	pick++;
	++scores;
	if(pick==maxships)
		won=false;
	
	}
	else{
		lives--;
	cout<<"you missed .....your remaining lives = "<<lives<<endl;
	
	
	}
	if(lives==0)
		loose= false;

}
if(!loose){
cout<<"you lost"<<endl;
cout<<"your scores =  "<<scores<<endl;
cout<<"ships were at........"<<endl;
for(int i=0; i < 9; i++)
        {
                for(int j=0; j < 9; j++)
                {
                        cout << sea[i][j] << " ";
                }
                cout << endl;
}
}
else if(!won)
	cout<<"you won"<<endl;

}
};
#endif
