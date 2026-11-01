#include "levels.h"

int level(int number) {
  switch (number) {
    case 1:
      if (MessageBox(NULL, "Do you want to install the update?", "cool_game.exe (LEVEL 1)", MB_YESNO | MB_ICONQUESTION) == IDYES) return 1;
      else return 0;
    case 2:
      if (MessageBox(NULL, "Are you sure?", "cool_game.exe (LEVEL 2)", MB_YESNO | MB_ICONQUESTION) == IDYES) return 1;
      else return 0;
    case 3:
      if (MessageBox(NULL, "Really sure?", "cool_game.exe (LEVEL 3)", MB_YESNO | MB_ICONQUESTION) == IDYES) return 1;
      else return 0;
    case 4:
      if (MessageBox(NULL, "...Really really sure?!", "cool_game.exe (LEVEL 4)", MB_YESNO | MB_ICONQUESTION) == IDYES) return 1;
      else return 0;
    case 5:
      if (MessageBox(NULL, "Really really really not sure?!!", "cool_game.exe (LEVEL 5)", MB_YESNO | MB_ICONQUESTION) == IDNO) return 1;
      else return 0;
  }
}
