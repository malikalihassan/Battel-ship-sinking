#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class data{
	string name;
public:
	data(){
	
	name=" ";
	
	}
void input(int score)
   
	{
		bool count=true;
		int location=0;
		
		
		   string str0="you have entered digits in your name which are not allowed",str1="you are not allowed name more then 7 letter";
	       cout<<"plze enter your name & you are not allowed name more then 7 letter "<<endl;
		   cin.ignore();
		 getline(cin,name);
	 try{

		 if (name.length()>7)
			 throw str1;
		 for(int i=0;i<name.length();i++)
		{
			if(name[i]>=48&&name[i]<=57)
				throw str0;
		}
		 
		}
	 
		catch(string st)
		{ 
			if(st==str0)
				cout<<str0;
			if(st==str1)
			   cout<<str1;
		}
		string data;
		int updatescore=23;
		ifstream file1("file1.txt",ios::in);
		if(file1.is_open())
			cout<<"open"<<endl;
		else
			cout<<"not open"<<endl;
		int i=0;
		while (!file1.eof()&&count)
		{
			file1>>data;
		
			if(name==data)
			{
				
				cout<<"your name="<<data<<endl;
				location=file1.tellg();//current location
				cout<<"your all scores is=";
				file1.seekg(location+1); //current main 1 add kiya 
				
				file1>>data;
				cout<<data;
				cout<<endl;
				file1.close();
				ofstream scoreupdate("file1.txt",ios::app);
					scoreupdate.seekp(location);
					scoreupdate<<" "<<updatescore;
					scoreupdate.close();
			}
			else
			{
				ofstream file("file1.txt",ios::app);
				if(file.is_open())
					cout<<"open";
			file<<name<<" "<<score;
			
				count=false;
				file.close();
			}
			

		
		
		
		
		/*ofstream file("file1.txt",ios::out|ios::app);
		file<<name<<endl;
		file<<score<<endl;
		file1.close();*/
	}
	
	}




};

