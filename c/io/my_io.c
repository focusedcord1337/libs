/*Input out put func´s, */
#include <stdio.h>

/*Precise data types sizes*/
#include <stdint.h>

#include "/home/hugo/libs/c/my_str.h"

#include "/home/hugo/libs/c/my_io.h"

/**
 * @brief Clears input buffer
 * 
 */
void my_cl_stdin(void)
{
    int hold;// Holds value too clear from buffer
    while ((hold = getc(stdin)) != EOF) 
    { 
        if(hold == '\n') 
        { break; } 
    }
}

/**
 * @brief Reads a string from output buffer and stores it in str untill count chars -1 for '\0' 
 * 
 * @param str 
 * @param count 
 */
int read_str(char *str, uint32_t count)
{
    uint32_t i = 0UL;

    while (i < count)
    {
        // Checks IF last index = assign the null char '\0' ELSE get input
        str[i] = (i == count -1) ? ('\0') : (getc(stdin));
        
        // IF not last index but enter pressed => replace the \n with a \0
        if(str[i] == '\n' || str[i] == '\r' || str[i] == '\0')
        {
            str[i] = '\0';
            break;
        }
        else if((str[i] >= NON_SPECIAL && str[i] <= MAX_UCH))
        {
            (void)putc(str[i++], stdout); // Dispaly what was written and increase i 
        }
    }

    return i;
}