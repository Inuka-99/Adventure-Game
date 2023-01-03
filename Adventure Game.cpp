#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;


int main()
{
	cout << "Inuka Hulathduwage\n";
	cout << "Adventure Story\n";

	int choiceup;			//variable declaration of data type integer
	bool choice,replay;					//variable dclaration of data type boolean
	string morning, bfast, spread, flavor, evening, game, console, pc, outdoor;		//variable declaration of data type string
	cout << "Do you want to start planning for your weekend? (only the input value 1, only allows you to proceed)\n";
	cin >> choice;
	while (choice == 1)			//using of while loop to decide whether the user wants to perform the program
	{
		cout << "Hello! You will be given a set of choices, inorder to input your answer enter the keyword mentioned and hit the enter key on your keyboard.\n";
		cout << "\n";
		cout << "Tomorrow is Saturday and what would you like to do?\n";
		cout << setw(52) << "Get up early and go to the gym, if so, type gym\n";
		cout << setw(52) << "Get up early and meditate, if so, type meditate\n";
		cin >> morning;

		if (morning == "gym" || morning == "GYM" || morning == "Gym")				//if loop
			cout << "Great! That's the spirit!\n";
		else
			cout << "That's a good way to start off to the weekend!\n";
		cout << "\n";

		cout << "what would you like to have for breakfast?\n";
		cout << setw(38) << "if you want to have Bread, type Bread\n"; //using on string manipulation
		cout << setw(38) << "if you want to have Pancakes, type Pancakes\n";
		cin >> bfast;

		if (bfast == "Bread" || bfast == "BREAD" || bfast == "bread")
		{
			cout << "Great!\n";
			cout << "\n";
			cout << "What would you like to have with bread?\n";
			cout << setw(35) << "If you would like peanut butter, type peanut\n";
			cout << setw(35) << "If you would like chocolate spread, type chocolate\n";
			cin >> spread;
			cout << "That's classic!\n";
			cout << '\n';
		}
		else if (bfast == "Pancakes" || bfast == "pancakes" || bfast == "PANCAKES")
		{
			cout << "Hmm...That sound's good for a saturday morning!\n";
			cout << "Which flavoured panckaes would you like to have?\n";
			cout << setw(35) << "If you would like Vanilla flavor, type vflavor\n";
			cout << setw(35) << "If you would like chocolate flavor, type cflavor\n";
			cin >> flavor;
			cout << '\n';
			cout << "That's all time favorite!\n";
		}
		else
			cout << "invlaid input, try again!\n";

		cout << "Would you like to play some video games or outdoor sports in the evening?\n";
		cout << "If you would like to play video games, type video\n";
		cout << "If you would like to play some outdoor games, type outdoor\n";
		cin >> evening;
		cout << '\n';

		if (evening == "VIDEO" || evening == "Video" || evening == "video")
		{
			cout << "Would you like to play in a gaming console or on your PC?\n";
			cout << "If a Gaming Console, type console\n";
			cout << "If PC, type PC\n";
			cin >> game;
			cout << '\n';
			if (game == "CONSOLE" || game == "Console" || game == "console")		//nested if loop
			{
				cout << "Would you like to play GTA V or Forza Horizon?\n";
				cout << "If GTA V, type GTA\n";
				cout << "If Forza Horizon, type Forza\n";
				cin >> console;
			}
			else
			{
				cout << "Would you like to play Fortnite or APEX ?\n";
				cout << "If Fortnite, type Fortnite\n";
				cout << "If Forza Apex, type Apex\n";
				cin >> pc;
			}
		}
		else
		{
			cout << "would you like to play Cricket or Football?\n";
			cout << "If you want to play cricket, type cricket\n";
			cout << "If you want to play football, type football\n";
			cin >> outdoor;
			cout << '\n';
		}
		cout << "That's a nice choice! Hope you enjoy playing it!\n";
		cout << "\n";
		cout << "You planned out for tomorrow! Hope it works out well for you without any unaviodable circumstances.  Have a sweet weekend!\n";
		cout << "\n";
		
		cout << '\n';
		choice = 0;
		cout << "If you want to re-plan your weekend by playing it again, press 1 and enter or press 0 and enter!\n";
		cin >> choiceup;
		choice += choiceup;
	}
	return 0;
}