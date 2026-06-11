#include <iostream>
#include <random>
#include <windows.h>
using namespace std;

void showMatrixIntro() {
   HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
   SetConsoleTextAttribute(console, 10);

   random_device rd;
   mt19937 gen(rd());
   uniform_int_distribution<> bit(0, 1);

   cout << "\n";
   for (int row = 0; row < 12; row++) {
      cout << "\t";
      for (int col = 0; col < 45; col++) {
         cout << bit(gen);
      }
      cout << "\n";
      Sleep(80);
   }

   Beep(500, 80);
   Beep(700, 80);
   Beep(900, 100);

   cout << "\n\t>>> SYSTEM LOADED <<<\n\n";
   Sleep(500);
   SetConsoleTextAttribute(console, 7);
}

void playTooHighSound() {
   Beep(900, 120);
   Beep(650, 120);
}

void playTooLowSound() {
   Beep(400, 120);
   Beep(600, 120);
}

void playWinSound() {
   Beep(700, 120);
   Beep(900, 120);
   Beep(1100, 180);
}

int main() {
   showMatrixIntro();

   random_device rd;
   mt19937 gen(rd());
   uniform_int_distribution<> dist(1, 100);
   int num = dist(gen);
   int moves = 1;
   int a;
   cout << "\t### Guess number ###\n";
   cout << "Enter the Number: ";
   while(cin >> a){
         if(a > num){
            cout << "Number is high\n";
            playTooHighSound();
            cout << "Try agan: ";

            moves++;
         }
         else if ( a < num ){
            cout << "Number is Low\n";
            playTooLowSound();
            cout << "Try agan: ";

            moves++;
         }
         else {
            cout << "You found the Number\n";
            playWinSound();
            cout << "In " << moves << " moves";
            break;
         }
   }
   return 0;
}
