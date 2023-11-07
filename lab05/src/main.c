#include "stdio.h"
int main()
{
// find diven pover to given number
int num = 5;
int pov = 4;
int result = 1;
for (int i = 0; i < pov; i++){
result *= num;
}
return 0;
}
