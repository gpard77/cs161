/**************************************************
 *
 * Geoff
 *
 * Board
 *************************************************/
#include <iostream>
#define ROW 3
#define COL 3
using namespace std;

int main()
{
   char array[ROW][COL];
   
   for (int i = 0; i < ROW; i++)
   {
      cout << endl;
      for (int j = 0; j < COL; j++)
      {
         array[i][j] = '.';
      }
   }
   cout << endl << endl;

   for (int s = 0; s < 1; s++)
   {
      cout << " ";
   }   
   for (int num = 0; num < ROW; num++)
   {
      cout << num;
   }
      for (int i = 0; i < ROW; i++)
      {
         cout << endl;
         cout << i;
         for (int j = 0; j < COL; j++)
         {
            cout << array[i][j];
         }
      }
   cout << endl << endl;



   return 0;
}
