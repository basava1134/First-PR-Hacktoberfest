#include  <stdio.h>

//Compiler version gcc  6.3.0
__int128 array[1000] = {0};
int main()
{
  array[0]=0;
  array[1]=1;
  
  for(int i=2; i<40; i++){
    array[i]=array[i-2]+array[i-1];
    printf("%d \n", array[i]);
  }
  
  return 0;
}
