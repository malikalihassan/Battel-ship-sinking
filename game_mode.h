#include<iostream>
#include<fstream>
#include<string>

using namespace std;
#ifndef class_gamemode
#define class_gamemode

class gamemode{
int mode;      //To check difficulty level
int lives;      //to check lives when vs computer
public:
	void setlives(int a){
	lives=a;
	}
	
	
	int getlives(){
	return lives;
	}

	int menu(){

	cout<<"press 1 to play easy mode"<<endl;
	cout<<"press 2 to play difficult mode"<<endl;
	cout<<"press 3 to play hard mode"<<endl;
	cin>>mode;
	return mode;
	}








};
#endif
