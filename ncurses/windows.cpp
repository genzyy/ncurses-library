#include <ncurses.h>

int main()
{
    initscr();

    // function to break out of the program using ctrl+c.
    cbreak();

    // function that takes every input and doesn't end the program until
    // it finishes by itself.
    //raw()

    // function that doesnt show the output of the characters that are given
    // as the input.
    //noecho()

    int height = 10, width = 20, start_y = 10, start_x = 10;

    // creating a pointer of WINDOWS type which is set to null by default.
    WINDOW *win = newwin(height, width, start_y, start_x);
    refresh();

    // box requires 3 params: window ptr, L & R char, T & D char.
    box(win, 0, 0);
    int left, right, top, bottom, tlc, trc, blc, brc;
    left = right = 102;
    top = bottom = 102;
    tlc = trc = (int)'-';
    brc = blc = (int)'-';
    wborder(win, left, right, top, bottom, tlc, trc, blc, brc);
    mvwprintw(win, 1, 1, "This is string");
    // refreshes the windows that is created.
    wrefresh(win);
    int c = getch();
    endwin();
}