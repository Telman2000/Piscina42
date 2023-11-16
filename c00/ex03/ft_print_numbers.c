#include <unistd.h>

void ft_print_numbers(void)
{
	float numero;
	numero = 0;
	
	while(numero <= 9)
	{
		write(1, &numero,  1);
		numero++;
	}
}

int main (void)
{
	ft_print_numbers();
}
