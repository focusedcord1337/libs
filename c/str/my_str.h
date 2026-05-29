
#ifndef MY_STR_H

#define MY_STR_H
    
typedef enum : uint32_t
{
    NON_SPECIAL = 32U,
    ALPHA_CASE_DIF = NON_SPECIAL,

    ZERO = 48U,
    NINE = ZERO + 9U,

    UPR_A = 'A',
    UPR_Z = 'Z',

    LWR_A = 'a',
    LWR_Z = 'z'

    ,MAX_UCH = 126U

} uCh_t;


/**
 * @brief Finds index of 1st '\0' character 
 * 
 * @param str 
 * @param count 
 * @return uint32_t 
 */
uint32_t my_strlen(char *str, uint32_t count);

/**
 * @brief Makes all alphabetical characters too upper case
 * 
 * @param str 
 * @param count 
 */
void mk_upper(char *str, uint32_t count);

/**
 * @brief Makes all alphabetical characters too lower case
 * 
 * @param str 
 * @param count 
 */
void mk_lwr(char *str, uint32_t count);

/**
 * @brief Reverses a strings order from index 0 too index with '\n' or '\0' character is found. 
 * 
 * @param str 
 * @param count 
 */
void reverse_str(char *str, uint32_t count);


#endif /* MY_STR_H  */
