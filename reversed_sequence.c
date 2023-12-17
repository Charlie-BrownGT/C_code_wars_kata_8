/* Note: allocate memory yourself */
/* return NULL in case num == 0 */

#include <stdlib.h>

unsigned short *reverse_seq(unsigned short num)
{
    unsigned short *result;
    result = malloc(sizeof(unsigned short)*num);
    if(num == 0)  return NULL;
    else{
        for(int i = 0, j = num ; i < num; i++,j--){
            *(result+i) = j;
        }
    }
    
    return result;
    
}