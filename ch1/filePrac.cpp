#include <iostream>

using namespace std;

int main()
{
  FILE *pFile;
  char buffer[128];

  pFile = fopen("test.txt", "r");
  fgets(buffer, 128, pFile);
  fgets(buffer, 128, pFile);
  printf(buffer);
  fclose(pFile);
  return 0;
}