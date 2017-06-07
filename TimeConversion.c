#include <stdio.h>
#include <string.h>
int main() 
{
    int h, m, s ;
    char ampm[3];
    
    scanf("%d:%d:%d%s", &h, &m, &s, ampm) ;
    
    
    if (strcmp(ampm,"AM") == 0 && h == 12) 
    {
    	h = 0 ;
    }
       
    if (strcmp(ampm,"PM")==0 && h != 12) 
    {
    	h += 12 ;
    }    
    printf("%02d:%02d:%02d", h, m, s) ;
    return 0;
}
