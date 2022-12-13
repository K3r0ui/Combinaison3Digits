#include <unistd.h>
#include <stdio.h>

void    putchar(char c)
{
    write(1, &c, 1);
}
 
void    count(void)
{
    int a;
    int b;
    int c;
    a = '0';
    b = '0';
    c = '0';
    while (a <= '9')
    {
        while (b <= '9')
        {
            while (c <= '9')
            {
                putchar(a);
                putchar(b);
                putchar(c);
                putchar('\n');
                c++;
            }
            b++;
            c = '0';
        }
        a++;
        b = '0';
    }
}
 
int     main(void)
{
    count();
    return (0);
}
