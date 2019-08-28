#include<iostream>
#include<iomanip>
#include<time.h>
using namespace std;
void checkNum( int num1 , int num2 ,bool &done);

void main()
{
	int num1, num2 , num3 = 0;
	bool done = true;
	srand(time(NULL));
	num2 = 1+(rand()%9);
	cout <<"==============================================" << endl;
	cout <<" ##### Welcome to guessing number game #####  " << endl;
	cout <<"==============================================" << endl;
	cout << "Secret number has been chosen"<<endl;
	do{
	     cout << "Guess the number (1 to 10) : ";
	     cin  >> num1;
         num3++;
		 checkNum(num1,num2,done);
	 }while(done); 

	cout << "The secret number is " <<  num2 << endl;
	cout << "You made " <<  num3   << " guesses" << endl;
	cout <<"==============================================" << endl;
}
void checkNum (int num1 ,int num2 , bool &done)
{
	if(num1 > num2)
	{
		cout << "The secret number is lower" << endl;
	}
	else if(num1 < num2)
	{
		cout << "The secret number is higher" << endl;
	}
	else if(num1 == num2)
	{
		cout << "Congratulations!" << endl;
		done = false;
	}
}
	