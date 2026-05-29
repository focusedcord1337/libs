
#ifndef MY_IO_H

#define MY_IO_H

/**
 * @brief Clears input buffer
 * 
 */
void my_cl_stdin(void);

/**
 * @brief Reads a string from output buffer and stores it in str untill count chars -1 for '\0' 
 * 
 * @param str 
 * @param count 
 */
int read_str(char *str, uint32_t count);

   
#endif /* MY_IO_H  */
