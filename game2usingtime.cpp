#include <windows.h>
#include<iostream>
#include <cstdlib>
#include <string>
#include <cctype>
#include <ctime>
#include <bitset>

using namespace std;

//Class
class MemoryGameFinal
{
  public:

//Declare global variables
    int points = 0, point = 0;
    string firstName;
    char difficulty;
    int column, row, row1Value, column1Value, row2Value, column2Value, matrixe[4][4], matrixm[6][6], matrixh[8][8];
    int menu;
    bool again = true;
    bool matrix2[4][4];
    bool matrix3[6][6];
    bool matrix4[8][8];
    
    HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

    void pause(int dur)
    {
    	int temp = time(NULL)+dur;
    	while(temp>time(NULL));
	} 
	
	//displaying the matrix numbers for certain time	
	void dmatrix() //this we have to 3 times in the regular code for easy medium hard
	{
			cout << "    1 2 3 4" << endl; //diplay the matrix space so that it will be in proper lines n have 
	cout << "  ";

	for (int i = 0; i <= 8; i++) {
	    cout << "-"; //for horizontal line 
	}
	cout << endl;

	//More setup
	for (int row = 0; row < 4; row++) {
	    cout <<endl<< row + 1 << " | "; //for the vertical lines 

	    for (int column = 0; column < 4; column++) {
		// Print the value or '*' depending on wether the card
		// is exposed.
		cout << matrixe[row][column]<<" ";

	}
}
	    pause(10); //when the game starts it will display the cards for few seconds 
		system("cls"); //for clearing screen 
	}
	
	void dmatrixm() //this we have to 3 times in the regular code for easy medium hard
	{
			cout << "    1 2 3 4 5 6 " << endl; //diplay the matrix space so that it will be in proper lines n have 
	cout << "  ";

	for (int i = 0; i <= 12; i++) {
	    cout << "-"; //for horizontal line 
	}
	cout << endl;

	//More setup
	for (int row = 0; row < 6; row++) {
	    cout <<endl<< row + 1 << " | "; //for the vertical lines 

	    for (int column = 0; column < 6; column++) {
		// Print the value or '*' depending on wether the card
		// is exposed.
		cout << matrixm[row][column]<<"  ";

	}
}
	    pause(15); //when the game starts it will display the cards for few seconds 
		system("cls"); //for clearing screen 
	}
	
		void dmatrixh() //this we have to 3 times in the regular code for easy medium hard
	{
			cout << "    1 2 3 4 5 6 7 8 " << endl; //diplay the matrix space so that it will be in proper lines n have 
	cout << "  ";

	for (int i = 0; i <= 18; i++) {
	    cout << "-"; //for horizontal line 
	}
	cout << endl;

	//More setup
	for (int row = 0; row < 8; row++) {
	    cout <<endl<< row + 1 << " | "; //for the vertical lines 

	    for (int column = 0; column < 8; column++) {
		// Print the value or '*' depending on wether the card
		// is exposed.
		cout << matrixh[row][column]<<" ";

	}
}
	    pause(15); //when the game starts it will display the cards for few seconds 
		system("cls"); //for clearing screen 
	}
    // Display the cards
    void display()
    {
	// Easy grid setup
	cout << "    1 2 3 4 " << endl;
	cout << "  ";

	
	for (int i = 0; i <= 8; i++) 
	{
	    cout << "-";
	}
	cout << endl;

	//More setup
	for (int row = 0; row < 4; row++) 
	{
	    cout << row + 1 << " | ";

	    for (int column = 0; column < 4; column++) 
		{
		// Print the value or '*' depending on wether the card
		// is exposed.
		if (matrix2[row][column]) 
		{
		    cout << matrixe[row][column]<<" ";
		} else {
		    cout << '*';
		}
		cout << ' ';
	    }
	    cout << endl;
	}
	cout << endl;
    }
    
    void displaym()
    {
	// medium grid setup
	cout << "    1 2 3 4 5 6 " << endl;
	cout << "  ";

	
	for (int i = 0; i <= 12; i++) {
	    cout << "-";
	}
	cout << endl;

	//More setup
	for (int row = 0; row < 6; row++) {
	    cout << row + 1 << " | ";

	    for (int column = 0; column < 6; column++) {
		// Print the value or '*' depending on wether the card
		// is exposed.
		if (matrix3[row][column]) {
		    cout << matrixm[row][column]<<" ";
		} else {
		    cout << '*';
		}
		cout << ' ';
	    }
	    cout << endl;
	}
	cout << endl;
    }
    
     void displayh()
    {
	// hard grid setup
	cout << "  1 2 3 4 5 6 7 8  " << endl;
	cout << "  ";

	
	for (int i = 0; i <= 16; i++) {
	    cout << "-";
	}
	cout << endl;

	//More setup
	for (int row = 0; row < 8; row++) {
	    cout << row + 1 << " | ";

	    for (int column = 0; column < 8; column++) {
		// Print the value or '*' depending on wether the card
		// is exposed.
		if (matrix4[row][column]) {
		    cout << matrixh[row][column]<<" ";
		} else {
		    cout << '*';
		}
		cout << ' ';
	    }
	    cout << endl;
	}
	cout << endl;
    }
    
    void start()
    {
	// The first few lines are only printed once.
	SetConsoleTextAttribute(color, 9);
	cout << "Welcome to Memory - The Card Game" << endl << endl;

	// Select game
	SetConsoleTextAttribute(color, 7);
	cout << "Please enter your first name" << endl;
	cin >> firstName;

	//Main Menu
	while (again) {
	    cout << "Welcome, " << firstName << "!" << endl;
	    cout << endl << endl;
	    cout << "Game Menu" << endl;
	    cout << " ********" << endl;
	    cout << "Select 1 for a New Game and 2 to Exit Game" << endl;
	    cout << "1. New Game" << endl;
	    cout << "2. Exit Game" << endl;
	    cout << " ********" << endl;
	    cin >> menu;

	    //Option to exit game and reasks the user to play again
	    if (menu == 2) {
		cout << endl;
		cout << "Would you like to play Memory - The Card Game again?" << endl;
		cout << "Type '1' to play again and '0' to leave" << endl;
		cin >> again;
		cout << endl;
	    }
	    // Option to start game and difficulty selection
	    else if (menu == 1) {
		// Game grid selection
		cout << endl << "Difficulty level selection" << endl;
		cout << "***********" << endl;
		cout << "For an Easy Game type 'e' ( 4x4 grid )" << endl;
		cout << "For an Intermediate Game type 'm' ( 6x6 grid )" << endl;
		cout << "For an Hard Game type 'h' ( 8x8 grid )" << endl;
		cout << "***********" << endl;

		cin >> difficulty;

		//Switch statement which determines the grid setup for
		//the chosen game
		switch (difficulty) {
		    //Case easy
		case 'e':
		 //srand((unsigned int) time(NULL));
		    //Dictates number of columns and rows
		    for (int row = 0; row < 4; row++) {
			for (int column = 0; column < 4; column++) {
			    //Initialize a random matrix
			    matrixe[row][column] = rand() % 8 + 1;
			    matrix2[row][column] = false;
			}
			cout << endl;
		    }
		    cout << "Easy Game" << endl;
		    cout << "Points: " << points << endl;
		    
             dmatrix();
		    // display the board
		    display();

		    //Initalize the  game function after setup
		    Loop();

		    //End of case easy
		    break; 
		
		
		case 'm':
		    //Dictates number of columns and rows
		   // srand((unsigned int) time(NULL));
		    for (int row = 0; row < 6; row++) {
			for (int column = 0; column < 6; column++) {
			    //Initialize a random matrix
			    matrixm[row][column] = rand() % 18 + 1;
			    matrix3[row][column] = false;
			}
			cout << endl;
		    }
		    cout << "Medium" << endl;
		    cout << "Points: " << points << endl;

			dmatrixm();
		    // display the board
		    displaym();

		    //Initalize the  game function after setup
		    Loopm();

		    //End of case easy
		    break;
		    
		    case 'h':
		    //Dictates number of columns and rows
		   // srand((unsigned int) time(NULL));
		    for (int row = 0; row < 8; row++) {
			for (int column = 0; column < 8; column++) {
			    //Initialize a random matrix
			    matrixh[row][column] = rand() % 32 + 1;
			    matrix4[row][column] = false;
			}
			cout << endl;
		    }
		    cout << "hard" << endl;
		    cout << "Points: " << points << endl;

			dmatrixh();
		    // display the board
		    displayh();

		    //Initalize the  game function after setup
		    Looph();

		    //End of case easy
		    break;
		}
		}
		}

	};

    // game function
    void Loop()
    {
	while (points != 16) {
	    //Prompt
	    cout << firstName << ", please enter a row value for first card: "
		 << endl;
	    cin >> row1Value;

	    cout << firstName <<
		", please enter a column value for first card: " << endl;
	    cin >> column1Value;

	    cout << firstName <<
		", please enter a row value for second card: " << endl;
	    cin >> row2Value;

	    cout << firstName <<
		", please enter a column value for second card: " << endl;
	    cin >> column2Value;
	    cout << endl;

	    //Decrease the number value as the rows and columns go down
	    row1Value--;
	    column1Value--;
	    row2Value--;
	    column2Value--;

	    // Temporarily expose the cards
	    matrix2[row1Value][column1Value] = true;
	    matrix2[row2Value][column2Value] = true;

	    // display the board
	    display();

	    // Initializes the function for matching results
	    Match();
	}
}

void Loopm()
    {
	while (points != 36) {
	    //Prompt
	    cout << firstName << ", please enter a row value for first card: "
		 << endl;
	    cin >> row1Value;

	    cout << firstName <<
		", please enter a column value for first card: " << endl;
	    cin >> column1Value;

	    cout << firstName <<
		", please enter a row value for second card: " << endl;
	    cin >> row2Value;

	    cout << firstName <<
		", please enter a column value for second card: " << endl;
	    cin >> column2Value;
	    cout << endl;

	    //Decrease the number value as the rows and columns go down
	    row1Value--;
	    column1Value--;
	    row2Value--;
	    column2Value--;

	    // Temporarily expose the cards
	    matrix3[row1Value][column1Value] = true;
	    matrix3[row2Value][column2Value] = true;

	    // display the board
	    displaym();

	    // Initializes the function for matching results
	    Matchm();
	}
}
	
	
	void Looph()
    {
	while (points != 36) {
	    //Prompt
	    cout << firstName << ", please enter a row value for first card: "
		 << endl;
	    cin >> row1Value;

	    cout << firstName <<
		", please enter a column value for first card: " << endl;
	    cin >> column1Value;

	    cout << firstName <<
		", please enter a row value for second card: " << endl;
	    cin >> row2Value;

	    cout << firstName <<
		", please enter a column value for second card: " << endl;
	    cin >> column2Value;
	    cout << endl;

	    //Decrease the number value as the rows and columns go down
	    row1Value--;
	    column1Value--;
	    row2Value--;
	    column2Value--;

	    // Temporarily expose the cards
	    matrix4[row1Value][column1Value] = true;
	    matrix4[row2Value][column2Value] = true;

	    // display the board
	    displayh();

	    // Initializes the function for matching results
	    Matchh();
	}
}



    //Match in  game function
    void Match()
    {
	//Check condition
	if (matrixe[row1Value][column1Value] == matrixe[row2Value][column2Value]) {	//If there is a match
	    // Leave them exposed
	    points = points + 2;
	    SetConsoleTextAttribute(color, 4);
	    cout << "Congratulations!" << endl;
	    cout << "Your Two Cards Match!" << endl << endl;
	    SetConsoleTextAttribute(color, 7);
	    cout << "Points: " << points << endl << endl;	//update points
	} else {
	    SetConsoleTextAttribute(color, 4);
	    cout << "Oh No!" << endl;
	    cout << "Your Two Cards Do Not Match!" << endl << endl;
	    SetConsoleTextAttribute(color, 7);
	    cout << "Points: " << points << endl << endl;	//update points

	    // Cover them up again
	    matrix2[row1Value][column1Value] = false;
	    matrix2[row2Value][column2Value] = false;
	}
    }
    void Matchm()
    {
	//Check condition
	if (matrixm[row1Value][column1Value] == matrixm[row2Value][column2Value]) {	//If there is a match
	    // Leave them exposed
	    points = points + 2;
	    SetConsoleTextAttribute(color, 4);
	    cout << "Congratulations!" << endl;
	    cout << "Your Two Cards Match!" << endl << endl;
	    SetConsoleTextAttribute(color, 7);
	    cout << "Points: " << points << endl << endl;	//update points
	} else {
	    SetConsoleTextAttribute(color, 4);
	    cout << "Oh No!" << endl;
	    cout << "Your Two Cards Do Not Match!" << endl << endl;
	    SetConsoleTextAttribute(color, 7);
	    cout << "Points: " << points << endl << endl;	//update points

	    // Cover them up again
	    
	    matrix3[row1Value][column1Value] = false;
	    matrix3[row2Value][column2Value] = false;
	}
    }
    
     void Matchh()
    {
	//Check condition
	if (matrixh[row1Value][column1Value] == matrixh[row2Value][column2Value]) {	//If there is a match
	    // Leave them exposed
	    points = points + 2;
	    SetConsoleTextAttribute(color, 4);
	    cout << "Congratulations!" << endl;
	    cout << "Your Two Cards Match!" << endl << endl;
	    SetConsoleTextAttribute(color, 7);
	    cout << "Points: " << points << endl << endl;	//update points
	} else {
	    SetConsoleTextAttribute(color, 4);
	    cout << "Oh No!" << endl;
	    cout << "Your Two Cards Do Not Match!" << endl << endl;
	    SetConsoleTextAttribute(color, 7);
	    cout << "Points: " << points << endl << endl;	//update points

	    // Cover them up again
	    
	    matrix4[row1Value][column1Value] = false;
	    matrix4[row2Value][column2Value] = false;
	}
    }
    
};

// Executable code for the whole program
int main()
{
	srand((unsigned int) time(NULL));
    MemoryGameFinal Game;
    Game.start();

}
