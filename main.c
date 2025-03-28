#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint32_t* cpy_arr(uint32_t *arr,int8_t len);

void main()
{
    uint32_t a[]={1,5,6,7,8,9,10};
    uint32_t *b;
    b = cpy_arr(a,7);

    for(int i=0;i<7;i++) printf("%3u",b[i]);
  
}

uint32_t* cpy_arr(uint32_t *arr,int8_t len)
{
    uint32_t *ptr;
    ptr = (void*)malloc(len*sizeof(uint32_t));

    for(int8_t k=0; k < len ;k++) ptr[k]=arr[k];
    
    return ptr;
}