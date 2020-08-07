#include <stdio.h>
#include <string.h>

char table[26][4] = {
    {'A', 'A', 'A'}, {'A', 'A', 'C'}, {'A', 'A', 'G'}, {'A', 'A', 'T'}, //ABCD
    {'A', 'C', 'A'}, {'A', 'C', 'C'}, {'A', 'C', 'G'}, {'A', 'C', 'T'}, //EFGH
    {'A', 'G', 'A'}, {'A', 'G', 'C'}, {'A', 'G', 'G'}, {'A', 'G', 'T'}, //IJKL
    {'A', 'T', 'A'}, {'A', 'T', 'C'}, {'A', 'T', 'G'}, {'A', 'T', 'T'}, //MNOP
    {'C', 'A', 'A'}, {'C', 'A', 'C'}, {'C', 'A', 'G'}, {'C', 'A', 'T'}, //QRST
    {'C', 'C', 'A'}, {'C', 'C', 'C'}, {'C', 'C', 'G'}, {'C', 'C', 'T'}, //UVWX
    {'C', 'G', 'A'}, {'C', 'G', 'C'} //YZ
};

void decode(char *str)
{
    int size = strlen(str);
    if (size % 3)
    {
        printf("Error 1\n");
        return;
    }
    
    size /= 3;
    for (int j = 0; j < size; j++)
    {
        char comb[3] = {str[0+(j*3)], str[1+(j*3)], str[2+(j*3)]};
        
        for (int i = 0; i < 26; i++)
        {
            if (strstr(comb, &table[i][0]) != NULL)
            {
                printf("%c", 'A'+i);
            }
        }
    }
    
    printf("\n\n");
}

void encode(char *str)
{
    int size = strlen(str);
    
    for (int i = 0; i < size; i++)
    {
        int l = str[i] - 'A';
        printf("%s", &table[l][0]);
    }
    
    printf("\n\n");
}

int main()
{

    while (1)
    {
        char str[200] = {0};
        printf("Digite uma base: ");
        scanf("%s", str);
        
        encode(str);
    }
    
    
    

    return 0;
}
