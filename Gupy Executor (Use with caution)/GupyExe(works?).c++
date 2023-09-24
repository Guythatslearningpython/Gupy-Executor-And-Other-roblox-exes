#include <ncurses.h>

int main() {
    initscr();          // Start the ncurses mode
    raw();             // Line buffering disabled, Pass on everty thing to me
    keypad(stdscr, TRUE); // Allows the program to receive special keys like F1, F2, etc...
    noecho();           // Don't echo() the input.

    printw("Testing");  // Print the string "Testing" at the current cursor position
    refresh();         // Refresh the screen
    getch();            // Wait for the user to press a key
    endwin();           // End the ncurses mode
    return 0;
}
