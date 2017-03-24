#include <string.h>

int strindex(const char *s1, char c)
{
    int nPos=-1;
    char *res=strchr(s1, c);
    if(res) nPos=res-s1;
    return nPos;
}