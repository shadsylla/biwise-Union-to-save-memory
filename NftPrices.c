#include <stdio.h>
#include <stdint.h>
/* thi is to compress the price of NFT's and its info in small
  spaces of memory. 64 bits of memory*/

  unit64_t array_of_bits = 0;

  #define SET_BIT(BF, N) BF |= ((unit64_t)0x00000000000000001 << N)
  /* now we gonna turn the zero to ones and the ones to zeros.*/
  #define CLR_BIT(BF, N) BF &= ~((unit64_t)0x00000000000000001 << N)
  #define IS_BIT_SET(BF, N) ((BF >> N) & 0x1)



int main()
{
  SET_BIT(array_of_bits, 0);
    SET_BIT(array_of_bits, 2);
      SET_BIT(array_of_bits, 0);
        SET_BIT(array_of_bits, 7);
          SET_BIT(array_of_bits, 0);
            SET_BIT(array_of_bits, 45);
        CLR_BIT (array_of_bits, 7 );

        for(int i=0; i < 64; i++)
        {
          if(IS_BIT_SET(array_of_bits, i))
          {
            printf("+");
          } else {
             printf(")");
          }
          printf(" end ");
        }
 return 0;
}
