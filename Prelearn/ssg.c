#include <stdio.h>
int main()
{
  double foot;
  double inch;

  scanf("%lf %lf", &foot, &inch);
  printf("身高%f米\n", (foot + inch / 12) * 0.3048);

  return 0;
}