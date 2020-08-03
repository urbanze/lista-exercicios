#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    
    int n = 0;
    printf("Digite N: ");
    scanf("%d", &n);
    
    char str[16] = {0};
    int size = snprintf(str, sizeof(str), "%d", n);
    //int size = strlen(str);
    
    
    char sp1[8] = {0};
    char sp2[8] = {0};
    
    for (int i = 0; i < size/2; i++)
    {
        sp1[i] = str[i];
        sp2[i] = str[i+(size/2)];
    }
    
    printf("%s %s\n", sp1, sp2);
    
    int p1 = atoi(sp1);
    int p2 = atoi(sp2);
    int res = (p1 + p2) * (p1 + p2);
    
    if (res == n) {printf("1");}
    else {printf("0");}
    
    
    //int a = atoi()
    

    return 0;
}
