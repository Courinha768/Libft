/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 13:35:11 by aappleto          #+#    #+#             */
/*   Updated: 2021/10/22 22:20:09 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *Applies the function ’f’ on each character of
 *the string passed as argument, passing its index
 *as first argument. Each character is passed by
 *address to ’f’ to be modified if necessary.
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!(s && f))
		return ;
	i = -1;
	while (s[++i])
		f(i, &s[i]);
}
