/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyap <alyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:48:49 by alyap             #+#    #+#             */
/*   Updated: 2022/02/10 21:20:17 by alyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n < 0)
	{	
		ft_putchar('N');
	}	
	else
	{
		ft_putchar('P');
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
