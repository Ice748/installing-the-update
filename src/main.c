#include <windows.h>
#include "levels.h"

void lose(void);
void win(void);

int main(void) {
  for (size_t i = 1; i <= 100; i++) {
    if (!level(i)) {
      lose();
      return 0;
    }
  }

  win();
  return 0;
}

void lose(void) {
  MessageBox(NULL, "YOU LOSE!\nYou didn't install the update.", "cool_game.exe", MB_OK | MB_ICONERROR);
}

void win(void) {
  MessageBox(NULL, "YOU WIN!\nYou finally install the update.", "cool_game.exe", MB_OK | MB_ICONINFORMATION);
  MessageBox(NULL, "Installing the Update\n\nA game by Ice748\nWritten in C\nBuilt on Github\n\nThanks for playing! (:", "credits.exe", MB_OK | MB_ICONINFORMATION);
}
