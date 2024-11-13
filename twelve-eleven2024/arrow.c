#include <ncurses.h>

int main()
{
    int key, x, y;
    x=5;
    y=5;

    initscr();
    keypad(stdscr, TRUE);
    noecho();

    while( key != 'q')
    {
        clear();
        move(0, 0);
        printw("select right or left key or q to quir");


        move(y, x);
        printw("O");
        refresh();

        key = getch();
        if (key == KEY_LEFT)
        {
            x--;
            if (x<0) x=0; 
        }
        else if (key == KEY_RIGHT)
        {
            x++;
            if (x > 30) x = 30;
        }
    }
    endwin();
    return 0;
}
