/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 07:42:44 by ahoussei          #+#    #+#             */
/*   Updated: 2018/05/03 02:03:23 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*According to the man this function copies bytes from string src to string dst.
 * If the character c (as converted to an unsigned char) occurs in the string
 * src, the copy stops and a pointer to the byte after the copy of c in the
 * string dst is returned. Otherwise, n bytes are copied, and a NULL pointer is
 * returned. The source and destination strings should not overlap, as the 
 * behavior is undefined.*/
void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	/* We declare a size_t counter variable i that will be used to move through
	 * the index positions of our char casted strings and we will use this
	 * variable in comparison to our given size_t n. We also make two char
	 * pointer variables that we will place our casted dst and src parameters
	 * inside. We set i to 0 to start from the beginning index position and we
	 * place casted version of our parameters dst and src into their respective
	 * variables. We then move to our loop.*/
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	/*While our variable counter i is less than the given n we will continue
	 * our loop. Inside we set index position i of src2 into index position i
	 * of dst2. If the casted src2 unsigned character at index position i is
	 * equal to the given c, that is also casted to an unsigned char, then we
	 * immediately return a char casted pointer to the index position after it 
	 * in our original given dst parameter. If we never come across c before i
	 * is no longer less than n we will return NULL.*/
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return ((void *)0);
}
