/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finalization.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyeole <jihyeole@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 23:03:24 by jihyeole          #+#    #+#             */
/*   Updated: 2023/05/17 23:04:21 by jihyeole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	unlink_heredocs(t_info *comm_info)
{
	int	i;

	i = 0;
	while (comm_info->heredocs[i])
	{
		unlink(comm_info->heredocs[i]);
		++i;
	}
	return (0);
}

void	wait_all_child(int process_cnt, t_process *process)
{
	int	i;
	int	status;

	i = 0;
	while (i < process_cnt)
	{
		waitpid(process[i].pid, &status, 0);
		++i;
	}
}
