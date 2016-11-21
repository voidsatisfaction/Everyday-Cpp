#include <cstdio>

int main()
{
  int N, temp;
  scanf("%d",&N);

  if((N & 1) || (N & 2)){
    temp = N >> 2;
    temp++;
    N = temp << 2;
  }
  printf("The answer is : %d\n",N);
  return 0;
}