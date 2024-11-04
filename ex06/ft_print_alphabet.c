/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:23:07 by marvin            #+#    #+#             */
/*   Updated: 2024/11/04 21:23:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuwxyz", 26);
}
/*
int main(void)
{
        ft_print_alphabet();
}
*/