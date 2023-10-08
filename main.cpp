#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int w=0;
	srand(time(0));//is used in C++ to help in the generation of random numbers by seeding rand with a starting value.
	const int size=60;
	cout << "Enter a letter to begin \n ";
	char x; 
	cin>> x;
	int position = size /2;
	while (true) 
	{
		cout << "|START|" ;
		for (int i=0; i<size;i++) 
		{  
			if (i == position)
			cout << x;
			else 
      cout << " ";   //empty
		}
		cout << "|FINISH|"<<w++<< endl;// w is for calculating the number of positions
		int move= rand()%3 - 1;  // rand() is used to generate a series of random numbers
		position = position + move; 
		if (position <1) 
		{
			cout << "You could not finish the race!" <<endl; 
			break;
		}
		if (position >size-1) 
		{
		cout << "You finished the race!" << endl; 
		break;
		}
		for(int sleep=0; sleep< 1000000; ++ sleep);
	}   
	return 0; 
}
