#include <ncurses.h>

int main(int argc, char **argv)
{
    initscr();
    int yMax, xMax;
    getmaxyx(stdscr, yMax, xMax);
    WINDOW *inputwin = newwin(3, yMax - 12, xMax - 5, 5);
    box(inputwin, 0, 0);
    refresh();
    wrefresh(inputwin);
    keypad(inputwin, true);

    int c = wgetch(inputwin);
    if (c == KEY_UP)
    {
        printw("You pressed up!");
        wrefresh(inputwin);
    }

    getch();
    endwin();
}