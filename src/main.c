#include <windows.h>
#include "levels.h"

void lose(void);
void win(void);

int main(void) {
  if (!level(1)) {lose(); return 0;}
  if (!level(2)) {lose(); return 0;}
  if (!level(3)) {lose(); return 0;}
  // keep going...
  if (!level(100)) {lose(); return 0;}

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
