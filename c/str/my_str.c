/*Input out put func´s, */
#include <stdio.h>

/*Precise data types sizes*/
#include <stdint.h>

#include "my_str.h"


/**
 * @brief Finds index of 1st '\0' character 
 * 
 * @param str 
 * @param count 
 * @return uint32_t 
 */
uint32_t my_strlen(char *str, uint32_t count)
{
    uint32_t i = 0;
    for (; i < count; i++)
    {
        if(*(str + i) == '\0') { break; }
    }
    
    return i;
}

/**
 * @brief Makes all alphabetical characters too upper case
 * 
 * @param str 
 * @param count 
 */
void mk_upper(char *str, uint32_t count)
{
    for (uint32_t i = 0UL; i < count; i++)
    {
        if((*(str + i) >= LWR_A && *(str + i) <= LWR_Z ))
        {
            *(str + i) = *(str + i) - ALPHA_CASE_DIF;
        }
    }
}

/**
 * @brief Makes all alphabetical characters too lower case
 * 
 * @param str 
 * @param count 
 */
void mk_lwr(char *str, uint32_t count)
{
    for (uint32_t i = 0UL; i < count; i++)
    {
        if((*(str + i) >= UPR_A && *(str + i) <= UPR_Z ))
        {
            *(str + i) = *(str + i) + ALPHA_CASE_DIF;
        }
    }
}

/**
 * @brief Reverses a strings order from index 0 too index with '\n' or '\0' character is found. 
 * 
 * @param str 
 * @param count 
 */
void reverse_str(char *str, uint32_t count)
{
    char tmp[count];
    
    for (uint32_t i = 0; i < count; i++)
    {
        tmp[i] = *(str + i);

        if(str[i] == '\0' || str[i] == '\n')
        {
            *(str + i) = '\0';

            for (uint32_t j = 0UL, k = (i -1);  j < i; j++, k--)
            {
                *(str + j) = tmp[k];
            }

            break;
        }   
    }
}
