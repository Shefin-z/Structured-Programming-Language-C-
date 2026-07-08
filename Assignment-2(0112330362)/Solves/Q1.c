#include <stdio.h>

int main ()
{

    char board [8][8];

    for (int i = 0; i < 8; i++)
    {
      for (int j = 0; j < 8; j++)
      {
         board [i][j]=' ';
      }

    }

  board [0][0]=board[0][7]='R';
  board [7][0]=board[7][7]='R';

  board [0][1]=board[0][6]='N';
  board [7][1]=board[7][6]='N';

  board [0][2]=board[0][5]='B';
  board [7][2]=board[7][5]='B';

  board [0][3]=board[7][3]='Q';

  board [0][4]=board[7][4]='K';


  for (int j = 0; j < 8; j++)
  {
    board [1][j]='p';
    board [6][j]='p';
  }



  for (int i = 0; i < 8; i++)
  {
     for (int j = 0; j < 8; j++)
     {
        printf ("%c ",board[i][j]);
     }
     printf ("\n");
  }


  return 0;
}
