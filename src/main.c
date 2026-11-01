#include <windows.h>
#include "levels.h"

void lose(void);
void win(void);

int main(void) {
  for (int i = 1; i <= 100; i++) {
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
  MessageBox(NULL, "YOU WIN!\nYou finally install the update.\n\nCONGRATULATIONS! YOU COMPLETED THE GAME!!!\nIf you don't understand, I'm that guy who made all these questions,\nI also said \"Good luck!\" on the 89th level!", "cool_game.exe", MB_OK | MB_ICONINFORMATION);
  MessageBox(NULL, "Installing the Update\n\nA game by Ice748\nWritten in C\nBuilt on GitHub\n\nThanks for playing! (:", "credits.exe", MB_OK | MB_ICONINFORMATION);
}
