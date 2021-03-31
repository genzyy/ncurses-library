#include <ncurses.h>

int main()
{
    initscr();

    if (!has_colors())
    {
        printw("Error! the terminal has no colors");
        getch();
        return -1;
    }
    start_color();
    init_pair(1, COLOR_BLACK, COLOR_GREEN);

    if (can_change_color())
        printw("Can change color");
    else
        printw("Cannot change color");

    // function to change the default color with rgb values.
    //init_color(COLOR_CYAN, 0-999, 0-999, 0-999);

    /**
     * A_NORMAL
     * A_STANDOUT
     * a-REVERSE
     * A_BLINK
     * A_DIM
     * A_BOLD
     * A_PROTECT
     * A_INVIS
     * A-ALTCHARSET
     * A_CHARTEXT
    */

    attron(COLOR_PAIR(1));
    printw("This is some text");
    attroff(COLOR_PAIR(1));

    /**
     * COLOR_PAIR(n)    
     * COLOR_BLACK  0
     * COLOR_RED    1
     * COLOR_YELLOW 2
     * COLOR_GREEN  3
     * COLOR_BLUE   4
     * COLOR_MAGENTA    5
     * COLOR_CYAN   6
     * COLOR_WHITE  7
    */

    getch();
    endwin();
}