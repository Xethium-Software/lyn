#include <ncurses.h>

int main() {
    initscr();
    cbreak();
    noecho();
    curs_set(0);

    int max_y, max_x;
    int y, x;
    int ch;

    while (1) {
        getmaxyx(stdscr, max_y, max_x);
        y = max_y / 2;
        x = max_x / 2 - 8;

        clear();
        mvprintw(1, 1, "Lyn text editor.");

        mvprintw(60,1, "-- Normal Mode --");
        refresh();

        ch = getch();
        if (ch == 27) {
            break;
        }
    }

    endwin();
    return 0;
}
