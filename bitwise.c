#include <stdio.h>

 /*bit masking, helps in compression
   -AND
   -OR
   -XOR
   -LEFT-SHIFT
   -RIGHT-SHIFT
*/
struct NFTprice {

  int little: 2;
  int medium: 4;
  int large: 6;

};

#define NUM_LOOPS 10

int main()
{
   struct NFTprice counts;

   counts.little = 0;
   counts.medium = 0;
   counts.large = 0;

   for ( int index = 0; index < NUM_LOOPS; index++)
   {
        counts.little++;
        counts.medium++;
        counts.large++;
        printf("%u, %u, %u, %s,\n", counts.little, counts.medium,
     counts.large,  " \nThis is the price of your NFT today\n\n");
   }
   printf(" \nSizeof counts =n %lu\n", sizeof(counts));
}
