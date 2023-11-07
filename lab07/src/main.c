#include "stdio.h"
int main(){
int i = 5;
M1: if (i < 0) goto M2;
printf("%d\n", i);
i--;
goto M1;
M2: return 0;
}
