//Number guessing game
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int randomValue,n;
	srand(time(NULL));
	randomValue = rand()%500+1;
	cout<<"Choose a number between 1 to 500"<<endl;
	while(true)
	{
		cout<<"Guess the number: ";
	    cin>>n;
	    if(n>randomValue)
	    {
	        cout<<"guess a smaller number"<<endl;
	    }
	    else if(n<randomValue)
	    {
	         cout<<"guess a larger number"<<endl;
	    }
	    else 
	    {
	        cout<<"Congratulation!You have guessed the right number that is "<<n<<endl<<endl;
	        break;
	    }
	}
	return 0;
}
