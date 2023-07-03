ssize_t write(int fd, const void *buf, size_t count);
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}



#include <unistd.h>

int main (void)
{
    //''要加 我常常忘記 ‘加字元’“加字串”
    char b = 'A';
    write(1,&b,1);
    return 0;
}
