#include <ncurses.h>
#include <string>

int main(int argv, char **argc) {
  printw("before\n");
  refresh();

  initscr();
  printw("after\n");
  refresh();

  cbreak();
  noecho();
  clear();
  refresh();

  move(5, 5);

  std::string text = "Hello, World!";
  for (int i = 0; i < text.size(); i++) {
    addch(text[i]);
    addch(' ');
  }

  refresh();
  getch();

  endwin();
  return 0;
}
