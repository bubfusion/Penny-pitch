#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
  srand(time(NULL));
  char prizes[5][5];
  char pennies[5][5];

  int cashPrize = 0;
  int popcornPrize = 0;
  int foxPrize = 0;
  int hamburgerPrize = 0;
  int airpodPrize = 0;
  int totalWins = 0;

  int row,col;
  int num = 0;

  for (int i = 0; i < 5; i++)
		{
			for(int j = 0; j < 5; j++)
			{
				prizes[i][j] = '-';
        pennies[i][j] = '-';
			}
    }

    while(num < 3)
    {
      row = rand()%5;
      col = rand()%5;
        if (prizes[row][col] == '-')
        {
          prizes [row][col] = '$';
          num ++;
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
    num ++;
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
          num ++;
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
          num ++;
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
      num ++;
      }
    }
num = 0;

    while(num < 10)
      {
        row = rand()%5;
        col = rand()%5;

            pennies [row][col] = '0';
            num ++;

}
  num = 0;
cout << "Penny Board" << endl;
  for (int i = 0; i < 5; i++)
{
  for(int j = 0; j < 5; j++)
  {
    cout << setw(2) << pennies[i][j];
  }
  cout << endl;
}
  cout << endl;

  cout << "Prize Board" << endl;
    for (int i = 0; i < 5; i++)
  {
    for(int j = 0; j < 5; j++)
    {
      cout << setw(2) << prizes[i][j];
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
      cashPrize = cashPrize + 1;
    }
  }
}

for (int i = 0; i < 5; i++)
{
  for(int j = 0; j < 5; j++)
  {
    if(prizes[i][j] == 'P' && pennies[i][j] == '0')
    {
      popcornPrize = popcornPrize + 1;
    }
  }
}

for (int i = 0; i < 5; i++)
{
  for(int j = 0; j < 5; j++)
  {
    if(prizes[i][j] == 'F' && pennies[i][j] == '0')
    {
      foxPrize = foxPrize + 1;
    }
  }
}

for (int i = 0; i < 5; i++)
{
  for(int j = 0; j < 5; j++)
  {
    if(prizes[i][j] == 'H' && pennies[i][j] == '0')
    {
      hamburgerPrize = hamburgerPrize + 1;
    }
  }
}

for (int i = 0; i < 5; i++)
{
  for(int j = 0; j < 5; j++)
  {
    if(prizes[i][j] == 'A' && pennies[i][j] == '0')
    {
      airpodPrize = airpodPrize + 1;
    }
  }
}

  if(cashPrize == 3)
{
  cout << "You won $5!" << endl;
  totalWins = totalWins + 1;
}

  if(popcornPrize == 3)
{
  cout << "You won a large Popcorn!" << endl;
  totalWins = totalWins + 1;
}

  if(foxPrize == 3)
{
  cout << "You literally won a fox. Wack" << endl;
  totalWins = totalWins + 1;
}
if (hamburgerPrize == 3)
{
  cout << "You won a hamburger!" << endl;
  totalWins = totalWins + 1;
}
if (airpodPrize == 3)
{
  cout << "You won aipods. Now you can flex on them brokes" << endl;
  totalWins = totalWins + 1;
}

if (totalWins == 0) {
  cout << "You won nothin. Better luck next time." << endl;
}
if (totalWins == 5)
{
  cout << "Alright buddy calm down. You won popcorn, a hamburger, a fox, airpods, and $5. Thats pretty crazy" << endl;
}
  return 0;
}
