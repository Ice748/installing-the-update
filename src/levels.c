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
    case 19:
      MessageBox(NULL, "Wow, these questions are actually tricky...\n...And you answer them all!", "cool_game.exe (LEVEL 19)", MB_OK | MB_ICONINFORMATION);
      return 1;
    case 20:
      MessageBox(NULL, "Quiz is over.\nLet's get back to the actual installation.", "cool_game.exe (LEVEL 20)", MB_OK | MB_ICONINFORMATION);
      return 1;

    case 21:
      if (MessageBox(NULL, "Click YES to uninstall the game.\nClick NO to continue the setup.", "cool_game.exe (LEVEL 21)", MB_YESNO | MB_ICONEXCLAMATION) == IDNO) return 1;
      else return 0;
    case 22:
      if (MessageBox(NULL, "Click NO to uninstall the game.\nClick YES to continue the setup.", "cool_game.exe (LEVEL 22)", MB_YESNO | MB_ICONEXCLAMATION) == IDYES) return 1;
      else return 0;
    case 23:
      if (MessageBox(NULL, "Did you know that the word 'No' is spelled with two letters?", "cool_game.exe (LEVEL 23)", MB_YESNO | MB_ICONQUESTION) == IDYES) return 1;
      else return 0;
    case 24:
      if (MessageBox(NULL, "Don't click YES if you don't want to not to not to win.", "cool_game.exe (LEVEL 24)", MB_YESNO | MB_ICONQUESTION) == IDNO) return 1;
      else return 0;
    case 25:
      if (MessageBox(NULL, "Click YES to test if the button is working.", "cool_game.exe (LEVEL 25)", MB_YESNO | MB_ICONEXCLAMATION) == IDYES) return 1;
      else {MessageBox(NULL, "Why did you clicked No??\nNow the game would crassshhhshsshhshsshhshhhssshhhshssshshhshshs", "Fatal Error", MB_OK | MB_ICONERROR); return 0;}
    case 26:
      MessageBox(NULL, "Deleting system32...\nJust kidding.", "cool_game.exe (LEVEL 26)", MB_OK | MB_ICONEXCLAMATION);
      return 1;

    case 27:
      if (MessageBox(NULL, "Click YES to confirm you are still here.", "cool_game.exe (LEVEL 27)", MB_YESNO | MB_ICONINFORMATION) == IDYES) return 1;
      else return 0;
    case 28:
      if (MessageBox(NULL, "Click YES again.", "cool_game.exe (LEVEL 28)", MB_YESNO | MB_ICONINFORMATION) == IDYES) return 1;
      else return 0;
    case 29:
      if (MessageBox(NULL, "Click YES one more time.", "cool_game.exe (LEVEL 29)", MB_YESNO | MB_ICONINFORMATION) == IDYES) return 1;
      else return 0;
    case 30:
      if (MessageBox(NULL, "WAIT! CLICK NO RIGHT NOW!!!", "cool_game.exe (LEVEL 30)", MB_YESNO | MB_ICONINFORMATION) == IDNO) return 1;
      else {MessageBox(NULL, "I TOLD YOU TO CLICK NO! ):<", "cool_game.exe", MB_OK | MB_ICONERROR); return 0;}
    case 31:
      MessageBox(NULL, "Phew... Good job.\nYou actually have fast reactions.", "cool_game.exe (LEVEL 31)", MB_OK | MB_ICONINFORMATION);
      return 1;
    case 32:
      if (MessageBox(NULL, "Btw this is the 2^5 level, right?", "cool_game.exe (LEVEL 32)", MB_YESNO | MB_ICONQUESTION) == IDYES) return 1;
      else return 0;

    case 33:
      if (MessageBox(NULL, "Introducing, the CANCEL button!\nClick it to continue.", "cool_game.exe (LEVEL 33)", MB_YESNOCANCEL | MB_ICONINFORMATION) == IDCANCEL) return 1;
      else return 0;
    case 34:
      if (MessageBox(NULL, "Stopping the installation...\n(Click CANCEL in these situations)", "cool_game.exe (LEVEL 34)", MB_YESNOCANCEL | MB_ICONEXCLANATION) == IDCANCEL) return 1;
      else return 0;
    case 35:
      if (MessageBox(NULL, "Deleting system32...", "cool_game.exe (LEVEL 35)", MB_YESNOCANCEL | MB_ICONEXCLANATION) == IDCANCEL) return 1;
      else return 0;
    case 36:
      if (MessageBox(NULL, "Erasing the progress...", "cool_game.exe (LEVEL 36)", MB_YESNOCANCEL | MB_ICONEXCLANATION) == IDCANCEL) return 1;
      else return 0;
    case 37:
      MessageBox(NULL, "Good job!\nYou can use the CANCEL button now!", "cool_game.exe (LEVEL 37)", MB_OK | MB_ICONINFORMATION);
      return 0;

    case 38:
      if (MessageBox(NULL, "Btw, did you even count the levels?\n\nYES:    36\nNO:     37\nCANCEL: 38", "cool_game.exe (LEVEL ?)", MB_YESNOCANCEL | MB_ICONQUESTION) == IDCANCEL) return 1;
      else return 0;
    case 39:
      MessageBox(NULL, "That was actually really tricky question, isn't it?\nMay not answer.", "cool_game.exe (LEVEL 39)", MB_OK | MB_ICONINFORMATION);
      return 1;
    case 40:
      MessageBox(NULL, "This is still a game about installing the update.\nI just don't want you to install the update until the level 100...\n...and i just don't know what can I put in those levels.", "cool_game.exe (LEVEL 40)", MB_OK | MB_ICONINFORMATION);
      return 1;
    case 41:
      if (MessageBox(NULL, "If you tired of this game, you can just quit.\nI can do it for you, if you want to quit, just press YES, if you want to continue, press NO.\nYou'll quit without this annoying LOSE window.", "cool_game.exe (LEVEL 41)", MB_YESNO | MB_ICONINFORMATION) == IDYES) exit(0);
      else return 1;
    case 42:
      MessageBox(NULL, "OK, you didn't left.\nGood! I- I think...", "cool_game.exe (LEVEL 42)", MB_OK | MB_ICONINFORMATION);
      return 1;
    case 43:
      MessageBox(NULL, "Let's go back to quiz!", "cool_game.exe (LEVEL 43)", MB_OK | MB_ICONINFORMATION);
      return 1;

    case 44:
      if (MessageBox(NULL, "Do bananas grow on trees?", "cool_game.exe (LEVEL 44)", MB_YESNO | MB_ICONQUESTION) == IDNO) return 1;
      else return 0;
    case 45:
      if (MessageBox(NULL, "Do you NOT want to stop playing?", "cool_game.exe (LEVEL 45)", MB_YESNO | MB_ICONQUESTION) == IDYES) return 1;
      else return 0;
    case 46:
      MessageBox(NULL, "Level 46.\nStill here? Impressive.", "cool_game.exe (LEVEL 46)", MB_OK | MB_ICONINFORMATION);
      return 1;
    case 47:
      if (MessageBox(NULL, "Is Mount Everest the tallest mountain on Earth when measured from base to peak?", "cool_game.exe (LEVEL 47)", MB_YESNO | MB_ICONQUESTION) == IDNO) return 1;
      else return 0;
    case 48:
      if (MessageBox(NULL, "This is a trick question.\nClick YES.", "cool_game.exe (LEVEL 48)", MB_YESNO | MB_ICONQUESTION) == IDNO) return 1;
      else return 0;
    case 49:
      if (MessageBox(NULL, "Do octopuses have three hearts?", "cool_game.exe (LEVEL 49)", MB_YESNO | MB_ICONQUESTION) == IDYES) return 1;
      else return 0;
    case 50:
      MessageBox(NULL, "LEVEL 50!\nHalfway to 100!\nI still have no idea what to put in levels 54-99...", "cool_game.exe (LEVEL 50)", MB_OK | MB_ICONINFORMATION);
      return 1;
    case 51:
      if (MessageBox(NULL, "QUICK! Click NO before you overthink it!", "cool_game.exe (LEVEL 51)", MB_YESNO | MB_ICONEXCLAMATION) == IDNO) return 1;
      else {MessageBox(NULL, "You clicked YES...\nWhy?!", "cool_game.exe", MB_OK | MB_ICONERROR); return 0;}
    case 52:
      if (MessageBox(NULL, "Are spiders insects?", "cool_game.exe (LEVEL 52)", MB_YESNO | MB_ICONQUESTION) == IDNO) return 1;
      else return 0;
    case 53:
      if (MessageBox(NULL, "Only 47 more levels to go!\nDo you want to keep going?", "cool_game.exe (LEVEL 53)", MB_YESNO | MB_ICONQUESTION) == IDYES) return 1;
      else return 0;

    case 54:
      MessageBox(NULL, "Um, so, as I said before, I have no idea what can I put in the next levels...", "cool_game.exe (LEVEL 54)", MB_OK | MB_ICONINFORMATION);
      return 1;
    case 55:
      if (MessageBox(NULL, "I think I'll just repeat the hardest question. (In my opinion)\nWhat is the number of this level?\n\nYES:    55\nNO:     56\nCANCEL: 57", "cool_game.exe (LEVEL ?)", MB_YESNOCANCEL | MB_ICONQUESTION) == IDYES) return 1;
      else return 0;
    case 56:
      MessageBox(NULL, "Impressive... But I still have no idea what can I put next...", "cool_game.exe (LEVEL 54)", MB_OK | MB_ICONINFORMATION);
      return 1;

    case 57:
      if (MessageBox(NULL, "Is a peanut actually a nut?", "cool_game.exe (LEVEL 57)", MB_YESNO | MB_ICONQUESTION) == IDNO) return 1;
      else return 0;
    case 58:
      MessageBox(NULL, "Correct! It's a legume.\nSee? I can still make questions.", "cool_game.exe (LEVEL 58)", MB_OK | MB_ICONINFORMATION);
      return 1;
    case 59:
      if (MessageBox(NULL, "Um, is tomato botanically classified as a berry?", "cool_game.exe (LEVEL 7)", MB_YESNO | MB_ICONQUESTION) == IDYES) return 1;
      else return 0;
    case 60:
      MessageBox(NULL, "CORRECT! It's a berry.\nSee? I can still make ques- oh wait, it's just a level 7...\nI even forget to change the level number of the past level while copying it...", "cool_game.exe (LEVEL 60)", MB_OK | MB_ICONINFORMATION);
      return 1;
    case 61:
      MessageBox(NULL, "Nevermind.", "cool_game.exe (LEVEL 61)", MB_OK | MB_ICONINFORMATION);
      return 1;

    default:
      MessageBox(NULL, "Bruh, how did you get there? O_o", "Installing the Update", MB_OK | MB_ICONERROR);
      return 0;
  }
}
