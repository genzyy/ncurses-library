#include <ncurses.h>

int main(int argc, char **argv)
{
    initscr();
    cbreak();
    noecho();
    WINDOW *win = newwin(10, 20, 10, 10);
    int y, x, yBeg, xBeg, yMax, xMax;
    getyx(stdscr, y, x);
    refresh();
    getbegyx(stdscr, xBeg, yBeg);
    refresh();
    getmaxyx(stdscr, xMax, yMax);
    mvprintw(50 / 2, 50 / 2, "%d %d", yBeg, xBeg);
    getch();
    endwin();
    return 0;
}