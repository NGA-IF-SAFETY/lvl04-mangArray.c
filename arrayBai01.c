#include <stdio.h>

#define N 10

 void main()

{


int x[N], min, max,i;

for (i=0; i <= N-1; i++){

printf(" x[%d]= ", i);

scanf("%d", &x[i]);

}

min = x[0];

max =x[0];
for (i=1; i < N; i++)

if (max <x[i]) max =x[i];

printf("\n max= %d", max);

if (min > x[i]) min = x[i];

printf("\n min= %d", min);

}
