/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmalwan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 12:38:27 by shmalwan          #+#    #+#             */
/*   Updated: 2020/07/15 13:00:37 by shmalwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c) {
	write(1, &c, 1);
}
void ft_ft(int *nbr) {
	*nbr = 42;
}
int main(void) {
	int nbr;
	ft_ft;
	ft_putchar((nbr / 10) + '0'); // 4
	ft_putchar((nbr % 10) + '0'); // 2
	ft_putchar('\n');
	return(0);
}
