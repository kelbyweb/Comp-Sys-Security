#include <iostream>
#include <string.h>
using namespace std;
class separator
{
public:
void separatestring(char str[], int n)
{ // Function for N equal parts
  int size_of_str = strlen(str);
  int i;
  int size_of_part;
  // Check for the string if it can be divided or not
  if (size_of_str % n != 0)
  {
    cout<<"Invalid";
    return;
  }
  // Get the size of parts to get the division
  size_of_part = size_of_str / n;
  for (i = 0; i< size_of_str; i++)
  {
    if (i % size_of_part == 0)
      cout<<endl;
    cout<< str[i];
  }
}
};
int main()// Driver code
{
    separator s;
    // get input
    int numOfParts;
    cout << "Enter how many partitions: " << endl;
    cin >> numOfParts; /
    
    char str[] = "";

    int totalLength = strlen(str);
    cout << "Total number of partitions is " << (totalLength/numOfParts);
    s.separatestring(str, numOfParts);
    return 0;
}
