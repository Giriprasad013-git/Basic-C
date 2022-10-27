#include<stdio.h>
#include<string.h>
void strev(char *str)
{
    while( str != NULL ) {
        int len=strlen(str);
        for(int i=1;i<len/2;i++)
        {        
            int temp=str[i];
            str[i]=str[len-i-1];
            str[len-i-1]=temp;
        }
        printf("%s ",str);
        str = strtok(NULL, " ");

    }
}
int main()
{
    char string[50] = "geeks for geeks";
    // Extract the first token
    char * token = strtok(string, " ");
    strev(token);
    return 0;
}

