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
      return 1;
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
      MessageBox(NULL, "Wow, you're kinda smart...", "cool_game.exe (LEVEL 11)", MB_OK | MB_ICONINFORMATION);
      return 1;
    case 12:
      MessageBox(NULL, "...But not enough.\n(This game is turning into a quiz right now XD,\ndont't worry, it's not for long)", "cool_game.exe (LEVEL 12)", MB_OK | MB_ICONINFORMATION);
      return 1;
    case 13:
      if (MessageBox(NULL, "Is the Great Wall of China visible from space with the naked eye?", "cool_game.exe (LEVEL 13)", MB_YESNO | MB_ICONQUESTION) == IDNO) return 1;
      else return 0;
    case 14:
      if (MessageBox(NULL, "Is sound able to travel through the vacuum of space?", "cool_game.exe (LEVEL 14)", MB_YESNO | MB_ICONQUESTION) == IDNO) return 1;
      else return 0;
    case 15:
      if (MessageBox(NULL, "Do sharks have bones in their bodies?", "cool_game.exe (LEVEL 15)", MB_YESNO | MB_ICONQUESTION) == IDNO) return 1;
      else return 0;
    case 16:
      if (MessageBox(NULL, "Do human ears ever stop growing during a person's life?", "cool_game.exe (LEVEL 16)", MB_YESNO | MB_ICONQUESTION) == IDNO) return 1;
      else return 0;
    case 17:
      if (MessageBox(NULL, "Do humans share about 50% of their DNA with bananas?", "cool_game.exe (LEVEL 17)", MB_YESNO | MB_ICONQUESTION) == IDYES) return 1;
      else return 0;
    case 18:
      if (MessageBox(NULL, "Do you want to finish this game right now?", "cool_game.exe (LEVEL 18)", MB_YESNO | MB_ICONQUESTION) == IDNO) return 1;
      else return 0;
  }
}
