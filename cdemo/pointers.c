#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);



  float d = 10.26;
  float e = 3.14;
  float f = 0;

  printf("The value of d is %f and the value of e is %f\n", d, e);

  ptrtoa = &d;
  printf("The address of d is %d\n", ptrtoa);

  ptrtoa = &e;
  printf("The address of e is %d\n", ptrtoa);
}
