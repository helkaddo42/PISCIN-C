/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkaddo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 11:20:10 by helkaddo          #+#    #+#             */
/*   Updated: 2018/07/08 14:30:35 by helkaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int i;
	int a;
	int c;

	i = 0;
	a = 0;
	while (str[i])
	{
		i++;
	}
	i = i - 1;
	while (a < i)
	{
		c = str[a];
		str[a] = str[i];
		str[i] = c;
		a++;
		i--;
	}
	return (str);
}