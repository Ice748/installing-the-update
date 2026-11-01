#include "levels.h"

int levels(int number) {
  switch (number) {
    case 1:
      if (MessageBox(NULL, "Do you want to install the update?", "cool_game.exe", MB_YESNO | MB_ICONQUESTION) == IDYES) return 1;
      else return 0;
  }
}
