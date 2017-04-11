/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchirol <dchirol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 23:46:10 by niragne           #+#    #+#             */
/*   Updated: 2017/04/11 15:05:19 by dchirol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ls.h"

void	printerr(char *arg, int err)
{
	if (err == 2)
	{
		ft_putstr("ls: ");
		ft_putstr(arg);
		ft_putstr(": No such file or directory\n");
	}
}
