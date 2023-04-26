// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>


int main() {
    // Write C code here
    int i1, i2, index_r, carry, d1, d2, sum;
    char n1[] = "1245";
    char n2[] = "467";
    int size_r = 10;
    char r[10];
    
    
    int y = 0;
    while (y < 10)
    {
        if (r[y] == '\0')
            printf("r[%d] has a null character\n", y);
        else
            printf("r[%d] is qual to %c\n", y, r[y]);
        y++;
    }
    carry = 0;
    i1 = strlen(n1) - 1;
    i2 = strlen(n2) - 1;
    index_r = size_r - 2; // Fix 1: Initialize index_r to size_r - 1
    printf("r = %p\n", &r[0]);
    printf("i1 = %d, i2 = %d, index_r = %d, size_r = %d\n", i1, i2, index_r, size_r);
    printf("n1 = %s\n", n1);
    printf("n2 = %s\n\n\n", n2);

    while (i1 >= 0 || i2 >= 0)
    {
        d1 = 0;
        d2 = 0;

        if (i1 >= 0)
        {
            d1 = n1[i1] - '0';
            printf("n1[%d] = %c\n", i1, n1[i1]);
            printf("d1 = %d\n", d1);
            i1--;
        }
        if (i2 >= 0)
        {
            d2 = n2[i2] - '0';
            printf("n2[%d] = %c\n", i2, n2[i2]);
            printf("d2 = %d\n", d2);
            i2--;
        }
        sum = d1 + d2 + carry;
        printf("%d + %d + %d = %d\n", d1, d2, carry, sum);
        if (sum >= 10)
        {
            carry = 1;
            sum %= 10;
        }
        else
            carry = 0;
        printf("sum = %d\n", sum);
        printf("carry = %d\n", carry);

        if (index_r < 0)
            printf("%s\n", "Error");
       r[index_r] = sum + '0';
                printf("r[%d] = %c\n", index_r, r[index_r]);
                printf("r = %s\n", r);
                index_r--;
        }
    if (carry > 0)
    {
                if (index_r < 0)
                        printf("%s\n", "Error");
                r[index_r] = carry + '0';
                index_r--;
        }
        if (index_r < 0)
               printf("%s\n", "Error");

        int x = 0;
 
        r[size_r - 1] = '\0';

        
        //int y = 0;
        int z = 0;
    while (z < 10)
    {
        if (r[z] == '\0')
            printf("r[%d] has a null character\n", z);
        else
            printf("r[%d] is qual to %c\n", z, r[z]);
        z++;
    }
    
    int t = 0;
    while (r[t] < '1' || r[t] > '9')
    {
        r[t] = '0';
        t++;
    }
    printf("t = %d\n", t);

           
    //printf("First non null character is r[%d] whicha has a value of %c\n", y, r[y]);
        printf("r = %p\n", r);
        printf("%s + %s = %s\n", n1, n2, r);
        return (0);
}

