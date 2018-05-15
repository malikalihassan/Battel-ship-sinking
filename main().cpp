#include"board.h"

#include"multi_player.h"
#include<string>

void main(){

	cout<<"____________________________________________________________________________________________"<<endl;

	cout<<"**************************WELCOME TO BATTLE SHIP SINKING GAME*******************************"<<endl;
	cout<<"____________________________________________________________________________________________"<<endl;




board h;

gamemode g;
multi_player p1;
multi_player p2;
multi_player p3;
h.clear_board();
int ships,choice;
char ch;
do{
cout<<"press 1 to play single player"<<endl;
cout<<"press 2 to play multiplayer mode"<<endl;
cin>>choice;

cout<<"enter max ships you want to hide not greater then 8"<<endl;
cin>>ships;
while(ships>8){
cout<<"you exceede the limit......enter again"<<endl;
cin>>ships;

}
if(choice==1){
h.setmaxships(ships);
h.Show_board();
h.hide_ships();

h.attack();


}


else if(choice==2){

p1.clear_board();                      //p1.Show_board();
p2.clear_board();                       //p1.Show_board();
                                         //p2.Show_board();
p1.Show_board();

p1.setmaxships(ships);
p2.setmaxships(ships);
cout<<"player 1 turn to hide ships"<<endl;

p1.player1();
cout<<"player 2 turn to hide ships"<<endl;

p2.Show_board();

p2.player2();

p3.attack(p1,p2,ships);


}
cout<<"press y to continue or any key to exit"<<endl;
cin>>ch;
}while(ch=='y');

}