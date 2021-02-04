#include <iostream>
using namespace std;

int main ()
{
  int a[10] = { 2, 5, 9, 0, 19, 8, 4, 7, 11, 12 };
  int i, j, temp;
  cout << "Before sorting : " << "[";
  for (i = 0; i < 10; i++)
    {
      cout << a[i] << " ";
    }
  cout << "]";
  cout << "\nAfter sorting: "<<"[";
  for (i = 0; i < 10; i++)
    {
      for (j = 0; j < 10 - i - 1; j++)
	{
	  if (a[j] > a[j + 1])
	    {
	      temp = a[j];
	      a[j] = a[j + 1];
	      a[j + 1] = temp;
	    }

	}
    }
  for (i = 0; i < 10; i++)
    {
      cout << a[i] << " ";
    }
 cout <<"]";

  return 0;
}

