/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brbong <brbong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:11:40 by brbong            #+#    #+#             */
/*   Updated: 2022/02/13 17:39:01 by alyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_puterror(void);

void	ft_print_pattern(int column, int row);

void	ft_put_row_pattern(int column, char first_c, char mid_c, char end_c);

void	rush(int x, int y)
{	
	if (x >= 0 && y >= 0)
	{	
		ft_print_pattern(x, y);
	}
	else
	{
		ft_puterror();
	}
}

void	ft_put_row_pattern(int column, char first_c, char mid_c, char end_c)
{
	int	column_counter;

	column_counter = 1;
	while (column >= column_counter)
	{
		if (column_counter == 1)
		{
			ft_putchar(first_c);
		}
		else if (column > column_counter)
		{
			ft_putchar(mid_c);
		}
		else if (column == column_counter)
		{
			ft_putchar(end_c);
		}
		column_counter++;
	}
	ft_putchar('\n');
}

void	ft_print_pattern(int column, int row)
{
	int	row_counter;

	row_counter = 1;
	while (row >= row_counter)
	{
		if (row_counter == 1)
		{
			ft_put_row_pattern(column, 'A', 'B', 'A');
		}
		else if (row > row_counter)
		{
			ft_put_row_pattern(column, 'B', ' ', 'B');
		}
		else if (row == row_counter)
		{
			ft_put_row_pattern(column, 'C', 'B', 'C');
		}
		row_counter++;
	}
}

void	ft_puterror(void)
{
	ft_putchar('E');
	ft_putchar('R');
	ft_putchar('R');
	ft_putchar('O');
	ft_putchar('R');
}
