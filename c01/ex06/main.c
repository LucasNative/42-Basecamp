
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int    main(void)
{
    char g;
    char *frase;
    int a;
    
    
    frase = "uma frase legal";
    a = ft_strlen(frase);
    ft_putchar('0'+ (a / 10));
    ft_putchar('0'+ (a % 10));
}