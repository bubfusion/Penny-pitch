#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
  srand(time(NULL));
  char prizes[5][5];
  char pennies[5][5];


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


    for (int i = 0; i < 5; i++)
  {
    for(int j = 0; j < 5; j++)
    {
      cout << setw(2) << prizes[i][j];
    }
    cout << endl;
}
  return 0;
}
