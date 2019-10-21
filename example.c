#include<stdio.h>
#include "conio.h"

int main(){
    int x, y;

    x = 10;
    y = 10;

    clrscr();

    textcolor(MAGENTA);
    cprintf("Welcome to ");
    textbackground(BLUE);
    textcolor(YELLOW);
    cprintf("GNU C");
    resetBackgroundColor();
    textcolor(MAGENTA);
    cprintf(" programing.\n");

    getch();
    return 0;
}