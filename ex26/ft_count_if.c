/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:50:06 by marvin            #+#    #+#             */
/*   Updated: 2024/11/11 14:50:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_count_if(char **tab, int (*f)(char *))
{
	int	count = 0;
	int	i = 0;

	while (tab[i] != 0)
	{
		if ((*f)(&tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}
