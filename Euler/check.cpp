#include<iostream>
#include<stdio.h>
#include<windows.h>
#include<ctime>
#include<conio.h>
#include<cstdlib>
using namespace std;
static void clreol(void) { printf("\033[K"); fflush(stdout); }
static void clrscr(void) { printf("\033[H\033[2J"); fflush(stdout); }

void gotoxy( int column, int line )
  {
  COORD coord;
  coord.X = column;
  coord.Y = line;
  SetConsoleCursorPosition(
    GetStdHandle( STD_OUTPUT_HANDLE ),
    coord
    );
  }

int wherex()
  {
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  COORD  result;
  if (!GetConsoleScreenBufferInfo(
         GetStdHandle( STD_OUTPUT_HANDLE ),
         &csbi
         ))
    return -1;
  return result.X;
  }

int wherey()
  {
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  COORD  result;
  if (!GetConsoleScreenBufferInfo(
         GetStdHandle( STD_OUTPUT_HANDLE ),
         &csbi
         ))
    return -1;
  return result.Y;
  }

int main()
{
    srand(time(NULL));

    char KeyPress;  //Key Press by user
    int x=40;int y=10;  //Establish initial position of cursor
    char answer;
    do{
        cout<<"Doodler! Press I/J/K/M to move. Q to quit"<<endl;
    do{
        //Plot a "point"

        gotoxy(x,y);
        cout<<"*";
        gotoxy(x,y); //move blinking cursor under current spot

        KeyPress = getch(); //Get a key, not echoing to the screem

        if (KeyPress==' '){
            clreol();
        }
        if(KeyPress=='I'||KeyPress=='i')
            y--;
        else if (KeyPress=='M'||KeyPress=='m')
            y++;
        else if (KeyPress=='J'||KeyPress=='j')
            x--;
        else if (KeyPress=='K'||KeyPress=='k')
            x++;
        else if (KeyPress=='Q'||KeyPress=='q')
        ;   //Do nothing
        else
            cout<<"\a";     //Beep for bad keystroke
        }while((KeyPress!='Q')&&(KeyPress!='q'));

        gotoxy(1,1);    //Clear and display new little
        clreol();
        cout<<"Random stars! Press any key to stop."<<endl;
        while(!kbhit()){
            gotoxy(rand()%(60)+1,rand()%(20)+2);
            cout<<"*";  //A star and a blank to draw AND erase
        }
        clreol();
        cout<<"Do another game(N/Y)?";cin>>answer;
        if ((answer=='y')||(answer=='Y'))
            clrscr();
    }while((answer=='y')||(answer=='Y'));

    return 0;
}
