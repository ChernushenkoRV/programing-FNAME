#include "stdio.h"
int main()
{
//find minimal value in array
int arr [] = {5, -200, 500, 8, 10};

int min = arr[0];
for (int i = 0; i < 5; i++){
if (arr [i] < min)
min = arr [i];
}
printf ("Мінімум: %d\n", min);
return 0;
}
