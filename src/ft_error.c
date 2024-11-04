/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 20:10:18 by gabriel           #+#    #+#             */
/*   Updated: 2024/11/04 20:16:32 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include "libft.h"

void	ft_error_error(const char *msg)
{
	ft_putstr_fd("Error: ", STDERR_FILENO);
	ft_putendl_fd((char *)msg, STDERR_FILENO);
}

void	ft_error_warning(const char *msg)
{
	ft_putstr_fd("Warning: ", STDOUT_FILENO);
	ft_putendl_fd((char *)msg, STDOUT_FILENO);
	
}

void	ft_error_erno(void)
{
	perror("Error: ");
}
