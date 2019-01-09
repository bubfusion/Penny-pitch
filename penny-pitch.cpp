#include<iostream>
#include<iomanip>

using namespace std;

int main() //all the necessary things to start my program
{
  srand(time(NULL)); //need for random number gen
  char prizes[5][5]; // initials prize board
  char pennies[5][5]; // initials coin board

  int cashPrize = 0; //creates var that keep track of how many pennies and prizes match for the cash prize. 3 needed to win
  int popcornPrize = 0;//creates var that keep track of how many pennies and prizes match for the popcorn pize. 3 needed to win
  int foxPrize = 0; //creates var that keep track of how many pennies and prizes match for the fox prize. 3 needed to win
  int hamburgerPrize = 0; //creates var that keep track of how many pennies and prizes match for the hamburger prize. 3 needed to win
  int airpodPrize = 0;  //creates var that keep track of how many pennies and prizes match for the airpod prize. 3 needed to win
  int totalWins = 0; //used to see if the user wins any prizes

  int row,col; //universal var used in generating board
  int num = 0; //used to run loops x amount of times

  cout << "Prize Key!" << endl;
  cout << "F = Fox" << endl;
  cout << "A = Airpods" << endl;
  cout << "$ = $5" << endl;
  cout << "P = Popcorn" << endl;
  cout << "H = hamburger" << endl; //outputs key for the user

  for (int i = 0; i < 5; i++)
		{
			for(int j = 0; j < 5; j++)
			{
				prizes[i][j] = '-';
        pennies[i][j] = '-'; // loops creates the empty prize and penny board
			}
    }

    while(num < 3)
    {
      row = rand()%5;
      col = rand()%5;
        if (prizes[row][col] == '-')
        {
          prizes [row][col] = '$';
          num ++; // loop creates 2 random numbers, x and y value, checks to make sure it is an empty spot, and if so, then adds a $
        }
    }
        num = 0;

    while(num < 3)
        {
      row = rand()%5;
      col = rand()%5;
      if (prizes[row][col] == '-')
            {
    prizes [row][col] = 'P';
    num ++; // loop creates 2 random numbers, x and y value, checks to make sure it is an empty spot, and if so, then adds a P
            }
        }
    num = 0;
    while(num < 3)
            {
      row = rand()%5;
      col = rand()%5;
        if (prizes[row][col] == '-')
        {
          prizes [row][col] = 'F';
          num ++; // loop creates 2 random numbers, x and y value, checks to make sure it is an empty spot, and if so, then adds a F
        }
    }
num = 0;
    while(num < 3)
      {
      row = rand()%5;
      col = rand()%5;
        if (prizes[row][col] == '-')
          {
          prizes [row][col] = 'H';
          num ++; // loop creates 2 random numbers, x and y value, checks to make sure it is an empty spot, and if so, then adds a H
          }
        }
num = 0;
    while(num < 3)
      {
      row = rand()%5;
      col = rand()%5;
      if (prizes[row][col] == '-')
      {
      prizes [row][col] = 'A';
      num ++; // loop creates 2 random numbers, x and y value, checks to make sure it is an empty spot, and if so, then adds an A
      }
    }
num = 0;

    while(num < 10)
      {
        row = rand()%5;
        col = rand()%5;

            pennies [row][col] = '0';
            num ++; //this runs 10 times and generates 10 pennies. Doesn't check if the spot is empty because 2 pennies can land on the same spot

}
  num = 0;

  cout << endl;

  cout << "Prize Board" << endl;
    for (int i = 0; i < 5; i++)
  {
    for(int j = 0; j < 5; j++)
    {
      cout << setw(2) << prizes[i][j]; //loop used to output the prize board
    }
    cout << endl;
}
cout << endl;
cout << "Penny Board" << endl;
  for (int i = 0; i < 5; i++)
{
  for(int j = 0; j < 5; j++)
  {
    cout << setw(2) << pennies[i][j]; //loop used to output the penny board
  }
  cout << endl;
}

cout << endl;

for (int i = 0; i < 5; i++)
{
  for(int j = 0; j < 5; j++)
  {
    if(prizes[i][j] == '$' && pennies[i][j] == '0')
    {
      cashPrize = cashPrize + 1; //loop used to check if user pennies and prizes match. If it does adds 1 to its corrsponding var that hold that value
    }
  }
}

for (int i = 0; i < 5; i++)
{
  for(int j = 0; j < 5; j++)
  {
    if(prizes[i][j] == 'P' && pennies[i][j] == '0')
    {
      popcornPrize = popcornPrize + 1; //loop used to check if user pennies and prizes match. If it does adds 1 to its corrsponding var that hold that value
    }
  }
}

for (int i = 0; i < 5; i++)
{
  for(int j = 0; j < 5; j++)
  {
    if(prizes[i][j] == 'F' && pennies[i][j] == '0')
    {
      foxPrize = foxPrize + 1; //loop used to check if user pennies and prizes match. If it does adds 1 to its corrsponding var that hold that value
    }
  }
}

for (int i = 0; i < 5; i++)
{
  for(int j = 0; j < 5; j++)
  {
    if(prizes[i][j] == 'H' && pennies[i][j] == '0')
    {
      hamburgerPrize = hamburgerPrize + 1; //loop used to check if user pennies and prizes match. If it does adds 1 to its corrsponding var that hold that value
    }
  }
}

for (int i = 0; i < 5; i++)
{
  for(int j = 0; j < 5; j++)
  {
    if(prizes[i][j] == 'A' && pennies[i][j] == '0')
    {
      airpodPrize = airpodPrize + 1; //loop used to check if user pennies and prizes match. If it does adds 1 to its corrsponding var that hold that value
    }
  }
}

  if(cashPrize == 3)
{
  cout << "You won $5!" << endl;
  totalWins = totalWins + 1; //checks if user has exactly 3 for the corrsponding var that holds the number of pennies and prizes matching. If you win adds 1 to total win counter
}

  if(popcornPrize == 3)
{
  cout << "You won a large Popcorn!" << endl;
  totalWins = totalWins + 1; //checks if user has exactly 3 for the corrsponding var that holds the number of pennies and prizes matching. If you win adds 1 to total win counter
}

  if(foxPrize == 3)
{
  cout << "You literally won a fox. Wack" << endl;
  totalWins = totalWins + 1; //checks if user has exactly 3 for the corrsponding var that holds the number of pennies and prizes matching. If you win adds 1 to total win counter
}
if (hamburgerPrize == 3)
{
  cout << "You won a hamburger!" << endl;
  totalWins = totalWins + 1; //checks if user has exactly 3 for the corrsponding var that holds the number of pennies and prizes matching. If you win adds 1 to total win counter
}
if (airpodPrize == 3)
{
  cout << "You won aipods. Now you can flex on them brokes" << endl;
  totalWins = totalWins + 1; //checks if user has exactly 3 for the corrsponding var that holds the number of pennies and prizes matching. If you win adds 1 to total win counter
}

if (totalWins == 0) {
  cout << "You won nothin. Better luck next time." << endl; //checks to see if the user won nothing by checking totalWins. If they dont it outputs this message
}
if (totalWins == 5)
{
  cout << "Alright buddy calm down. You won popcorn, a hamburger, a fox, airpods, and $5. Thats pretty crazy" << endl; //sneaky dev message nobody is going to see ;)
}
  return 0;
}
