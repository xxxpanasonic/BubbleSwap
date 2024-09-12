#include <iostream>

using namespace std;
int main() {
   setlocale(LC_ALL, "rus");

   int digitals[10];

   cout << "Введите 10 чисел для заполнения массива: " << endl;

   for (int i = 0; i < 10; i++) {
      cin >> digitals[i];
   }

   for (int i = 0; i < 10; i++) {
      bool proverka = true;
      for (int j = 0; j < 10  - (i + 1); j++) {
         if (digitals[j] > digitals[j + 1]) {
            proverka = false;
           swap (digitals[j], digitals[j + 1]);

         }
      }
      if (proverka) {
         cout << "массив в отсортированном виде: ";

         for (int i = 0; i < 10; i++) {
            cout << digitals[i] << " ";
         }
         system("pause");
         return 0;
         break;
      }
   }
   }

