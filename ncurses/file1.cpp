#include <ncurses.h>
using namespace std;

/*
*ncurses (new curses) is a programming library providing an 
application programming interface (API) that allows the programmer
 to write text-based user interfaces in a terminal-independent manner.
 It is a toolkit for developing "GUI-like" application software that runs under a terminal emulator.
*/

int main(int argc, char **argv)
{
    // The function to initiate a screen for ncurses.
    // sets up the memory and clears the screen.
    initscr();

    int x, y;
    x = y = 10;

    // moves the cursor to the given coordinates.
    move(y, x);

    // function to print string(const char *) to a window.
    printw("Hello World!");

    // clears the screen.
    clear();

    // move() and printw() together so that you can give coordinates
    // to print something.
    mvprintw(0, 2, "Hello World!");

    // refreshes the current ncurses screen to match whats in the memory.
    refresh();

    // whats the user input and returns the int value of that key.
    int c = getch();

    printw("%d", c);
    move(0, 0);
    getch();

    // deallocates memory and ends ncurses.
    endwin();
}