/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 02:13:22 by ahoussei          #+#    #+#             */
/*   Updated: 2018/05/03 02:16:46 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*This function is exactly the same as our ft_putnbr function except that we
 * will be using our ft_putchar_fd function instead of ft_putchar beacuse we 
 * will be accepting a parameter for this function that is our file descriptor.
 * I recommend learning how the ft_putnbr and ft_putchar_fd functions work in
 * order to understand how this function works. The explanation of the inner
 * workings of this function are the same as I gave for ft_putnbr.*/
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = n * -1;
		}
		if (n > 9)
			ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd((n % 10) + '0', fd);
	}
}
