#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


void main()
{

}


uint32_t* cpy_arr(uint32_t *arr,int8_t len)
{
    uint32_t *ptr;
    ptr = (void*)malloc(len*sizeof(arr));

    if(ptr==NULL)
    {
        exit(0);
    }
    else
    {
        for(int8_t k=0; k < len ;k++)
            ptr[k]=arr[k];
    }


}