#include <stdio.h>



int main() {

//created empty board
    char board[] = { '-','-','-','-','-','-','-','-','-'};


//prints out inital board
for (int i = 0; i < 9; i++) {
  if (i==3 || i == 6 || i==9)
  {
    printf("\n");
  }
  printf("%c ",board[i]);

}

    char p1 = 'x';
    char p2 = 'o';

    char turn = p1;

    int row;
   
int tcount = 0;



//game 
while(checkWinner(board) ==  0)
{
  
  if (tcount % 2 == 0)
  {
    turn = p1;
  }
  else{
    turn = p2;
  }


  printf("\n");
  printf("Enter row 1, 2, 3");
    printf("\n");
    scanf("%d", &row);

    int col;
    printf("Enter col 1, 2, 3");
    printf("\n");
    scanf("%d", &col);


int pos = getPos(row, col);



board[pos]=turn;


 for (int i = 0; i < 9; i++) {
  if (i==3 || i == 6 || i==9)
  {
    printf("\n");
  }
  printf("%c ",board[i]);

}

printf("\n");

tcount++;




}


printf("Winner %c", turn);





return 0;



}

int getPos(int row, int col)
{
    int pos;

  if (col == 1)
  {
    pos = row-1;
  }
  else if (col == 2)
  {
    pos = row+3-1;
  }
  else 
  {
    pos = row+6-1;
  }

//printf("%d", pos);


  return pos;
}


int checkWinner(char board[])

//checks horizontal winners
{
  if (board[0] != '-')
  {
    if (board[1] == board[0])
    {
      if (board[2]==board[0])
      {
        if (board[0]=='x')
        {
          return 1;
        }
        return 2;
      }
    }
  }


if (board[3] != '-')
  {
    if (board[4] == board[3])
    {
      if (board[5]==board[3])
      {
        if (board[3]=='x')
        {
          return 1;
        }
        return 2;
      }
    }
  }

  if (board[6] != '-')
  {
    if (board[7] == board[6])
    {
      if (board[8]==board[6])
      {
        if (board[6]=='x')
        {
          return 1;
        }
        return 2;
      }
    }
  }

//cheaks vertical winners

  if (board[0] != '-')
  {
    if (board[3] == board[0])
    {
      if (board[6]==board[0])
      {
        if (board[0]=='x')
        {
          return 1;
        }
        return 2;
      }
    }
  }

if (board[1] != '-')
  {
    if (board[4] == board[1])
    {
      if (board[7]==board[1])
      {
        if (board[1]=='x')
        {
          return 1;
        }
        return 2;
      }
    }
  }


if (board[2] != '-')
  {
    if (board[5] == board[2])
    {
      if (board[8]==board[2])
      {
        if (board[2]=='x')
        {
          return 1;
        }
        return 2;
      }
    }
  }

//check diaginal 

  if (board[0] != '-')
  {
    if (board[4] == board[0])
    {
      if (board[8]==board[0])
      {
        if (board[0]=='x')
        {
          return 1;
        }
        return 2;
      }
    }
  }

  if (board[2] != '-')
  {
    if (board[4] == board[2])
    {
      if (board[6]==board[2])
      {
        if (board[2]=='x')
        {
          return 1;
        }
        return 2;
      }
    }
  }

 return 0;
}