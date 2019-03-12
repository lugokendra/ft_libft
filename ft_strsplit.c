
 
 #include <string.h>
 #include "libft.h"
 
 static long h_strlen(const char *s, char del)
 {
   long len;
   len = 0;
  
   while(s[len] != del && s[len] != '\0')
     len++;
   
   return (len);
}

static long h_count_str(const char *s, char del)
{
    const char *current;
	  long count;
    long strings;

    current = s;
    count = 0;
    strings = 0;
  
    while(*current != '\0')
    {
      count = h_strlen(current, c);
      
      if (count != 0)
      {
        strings = strings + 1;
        current = current + count + 1;
      }
      else
      {
        current = current + 1;
      }
    }
    return (strings);
}

char **ft_strsplit(char const *s, char c)
{
	  char **result;
    char *curr;
    long strings;
    long length;
    long str;
  
    strings = h_count_str(s, c);
    curr = s;
    str = 0;
  
    if(strings == 0)
    {
      return (NULL);
    }
    result = (char**)ft_memalloc(sizeof(char*) * strings);
    
    if(result == NULL)
    {
      return (NULL);
    }
  
    while(curr != '\0')
    {
       length = h_strlen(curr, c);
      
       if(length != 0)
       {
         result[str] = (char*)ft_memalloc(sizeof(char) * (length + 1));
         
         if(result[str] == (NULL)
         {
           ft_memdel(result);
           return (NULL);
         }
         ft_strncpy(result[str], curr, length);
         
}


           
Allocates (with malloc(3)) and returns an array of “fresh” strings 
(all ending with ’\0’, including the array itself) ob- tained by spliting s using the character c as a delimiter. 
  If the allocation fails the function returns NULL. Example : ft_strsplit("*hello*fellow***students*", ’*’) 
    re- turns the array ["hello", "fellow", "students"].
    
Param. #1
The string to split.
Param. #2
The delimiter character.
Return value
The array of “fresh” strings result of the split.
    
Libc functions
malloc(3), free(3)