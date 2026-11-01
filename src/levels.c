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
    case 6:
      MessageBox(NULL, "Prove it.", "cool_game.exe (LEVEL 6)", MB_OK | MB_ICONINFORMATION);
      return 0;
    case 7:
      if (MessageBox(NULL, "Is tomato botanically classified as a vegetable?", "cool_game.exe (LEVEL 7)", MB_YESNO | MB_ICONQUESTION) == IDNO) return 1;
      else return 0;
    case 8:
      if (MessageBox(NULL, "Is Uranus the 7th planet of the Solar System?", "cool_game.exe (LEVEL 8)", MB_YESNO | MB_ICONQUESTION) == IDYES) return 1;
      else return 0;
    case 9:
      if (MessageBox(NULL, "Is lightning not hotter than the surface of the Sun?", "cool_game.exe (LEVEL 9)", MB_YESNO | MB_ICONQUESTION) == IDNO) return 1;
      else return 0;
    case 10:
      if (MessageBox(NULL, "Is the Sahara the largest desert on Earth?", "cool_game.exe (LEVEL 10)", MB_YESNO | MB_ICONQUESTION) == IDNO) return 1;
      else return 0;
    case 11:
      MessageBox(NULL, "Wow, you're kinda smart.", "cool_game.exe (LEVEL 11)", MB_OK | MB_ICONINFORMATION);
      return 0;
  }
}
