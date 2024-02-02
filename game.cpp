#include <iostream>
#include<fstream>
#include<cstdlib>
#include<string>
#include<ctime>
using namespace std;
const int rows = 10;
const int cols =10;
int matrix[rows][cols];
int maxship = 10;
void making_board()
{
		for(int i =0; i< rows; i++)
	{
		for(int j=0; j<cols; j++)
		{
			matrix[i][j]=0;
		}
	}
}
void showing_board()
{
		for(int i =0; i < rows; i++)
	{
		for(int j=0; j<cols; j++)
		{
		 cout<<matrix[i][j];
		 cout<<" ";
		}
		cout<<endl;
	}
}
void setting_ships()
{
	
	int ships = 0 ;
	while( ships < maxship)
	{
           int x = rand() % rows;
		   int y = rand() % cols;
		   if( matrix [x][y]!=1)
		   {
              ships++;
			  matrix[x][y]=1;
		   }
	}
}
int total_ships()
{
		int counter = 0;
	
	for(int i =0; i< rows; i++)
	{
		for(int j=0; j<cols; j++)
		{
			
			if (matrix[i][j] == 1)
			{
				counter++;
			}
		}
	}
	return counter;
}
bool guessing(int x, int y)
{
		for(int i =0; i < rows; i++)
	{
		for(int j=0; j < cols; j++)
		{
			if(matrix[i][j]==1)
			{
				matrix[i][j]=2;
				return true;
			}
			return false;
		}
	}
}
int main()
{
	int conti , choice, choice2, shifts=0;
	char choice3;
	string name;
	ofstream outputfile("dataout.txt");
	ifstream inputfile("dataout.txt");
	cout<<"input the name of a player"<<endl;
	getline(cin, name);
	cout<<"thankyou for entering the name\nthe name have been registered"<<endl;
	cout<<"press the desire option for your choice"<<endl;
	cout<<"1. rules"<<endl<<"2. play game"<<endl;
	cin>>choice;
	switch(choice)
	{
		
	case 1:
	{
		cout<<"\t\t\twelcome to Battleship Game!"<<endl;
		cout<<"\t\t\tRULES!!"<<endl;
		cout<<"there are some enemy ships hidden in some specific locations"<<endl;
		cout<<"you have to guess their locations and sink all their ships for our kingdom safety"<<endl;
		cout<<"you will be asked about their locations and then automated telemachine will hit missile at that location"<<endl;
		cout<<"guess all their location right to win this game"<<endl;
		cout<<"our kingdom future is in your hand... GOODLUCK!"<<endl;
		cout<<"press 1 to continue...."<<endl;
		cin>>conti;
		if(conti!=1)
		{
			cout<<"you have entered the wrong input. you have to press 1 to continue\ngame has been terminated"<<endl;
			break;
		}
	}
		case 2:
		{
			cout<<"game starts now"<<endl;
	srand(time(NULL));
    making_board();
	setting_ships();
	int pos1, pos2;
	while(1)
	{
		cout<<"please enter location"<<endl;
		cin>>pos1>>pos2;
		shifts= shifts + 1;
		if(guessing(pos1, pos2))
		{
			cout<<"target hit"<<endl;
	
		}
		else
		{
		
		cout<<"target miss"<<endl;
		cout<<"haar manlyy bhai...  y/n ?";
		cin>>choice3;
		if(choice3 == 'y')
		{
			cout<<"better luck next time..!!"<<endl;
			break;
		}
    	}
		cout<<"number of ships left is : "<<total_ships()<<endl;
	     
			cout<<endl<<endl;
	}
		}
		default :
		{
		
		
			break;
		}
	}
	outputfile<<name;
	outputfile<<shifts;
	return 0;
	}
