#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, const char *argv[])
{
   const int TRIALS = 15000;
   short int birthdays[365];
   int successfulTrials;
   bool sharedBirthday;

   srand(time(NULL));

   for (int people = 2; people < 101; ++people) {

      successfulTrials = 0;
      for (int i = 0; i < TRIALS; ++i) {
         for (int j = 0; j < 365; birthdays[j++] = 0); // set days all to 0
         sharedBirthday = false;
         for (int j = 0; j < people; ++j) {
            // if the given birthday is shared (has more than one person)
            // then we have a shared birthday, stop checking
            if (++birthdays[rand() % 365] > 1){
               sharedBirthday = true;
               break;
            }
         }
         if (sharedBirthday) ++successfulTrials;
      }

      cout << "Probability of " << people << " people in a room sharing a birthday is \t"
           << ( float(successfulTrials) / float(TRIALS) ) << endl;
   }
   return 0;
}
