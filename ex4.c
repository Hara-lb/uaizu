#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int heads = 0;
  int tails = 0;
  int i;
printf("Tossing a coin...\n");

  srand(time(NULL));

  for(i = 1; i < 4; i++){
      int result = rand() % 2;
    if(result == 0){
      heads++;
      printf("Round %d: Heads\n",i);
    }else{
      tails++;
      printf("Round %d: Tails\n",i);
    }
  }
printf("Heads: %d, Tails: %d\n",heads,tails);

return 0;
}
