#include <stdio.h>
char* count_char(char *);

int main() {
    
    char str[15];
    
    printf("Please enter a string: ");
    fgets(str,15,stdin);
    
    count_char(str);

    return 0;
}

char* count_char(char *string)
{   int v = 0, c = 0, i = 0;
    while(string[i] != '\0')
    {  
        if(string[i]==' '){}
        else{
            switch(string[i])
            {   
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
            v++; 
            break;
            
            default: 
            c++;
            break;
            }
        }
        i++;
    }
    
   printf("Vowels: %d",v);
   printf("\nConstants: %d",c);
}