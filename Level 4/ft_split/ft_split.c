#include <stdlib.h>

char    **ft_split(char *str)
{
        int i = 0, j = 0, k;
        char **ptr = (char **)malloc(sizeof(char *) * 1000);
        
        while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
                i++;
        while(str[i])
        {
                if(str[i] > 32)
                {
                        ptr[j] = (char *)malloc(sizeof(char) * 1000);
                        k = 0;
                        while(str[i] > 32)
                                ptr[j][k++] = str[i++];
                        ptr[j][k] = '\0';
                        j++;
                }
                else
                        i++;
        }
        return ptr;
}

#include <stdio.h>
int main() 
{
    char str[] = "Derya Acar";
    char **result = ft_split(str);

    if(!result)
            return 0;
    else if(result)
    {
        for(int i = 0; result[i] != NULL; i++)
        {
            printf("%s\n", result[i]);
            free(result[i]);
        }
        free(result);
    }
}

