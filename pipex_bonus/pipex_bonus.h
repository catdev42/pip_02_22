/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myakoven <myakoven@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 02:43:55 by myakoven          #+#    #+#             */
/*   Updated: 2024/02/22 00:25:02 by myakoven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_BONUS_H
# define PIPEX_BONUS_H

# include "../libft/libft.h"
# include <errno.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/wait.h>
# include <unistd.h>

typedef struct s_info
{
	int		fd_in;
	int		fd_out;
	int		argc;
	char	**argv;
	char	**env;
}			t_info;

int			pip_error(int err);
char		*ft_findpath(char *cmd, char **env, char *cmdpath);
char		*ft_jointhree(char *cmdpath, char const *s1, char const *s2,
				char const *s3);
char		*ft_findpathenv(char *name, char **env);
// void		child(t_info *basics, int round, int pfd[][2], char *cmdpath);
void		execute(char *cmd, char **env, char *cmdpath);

// void		exec_pipe(int *p_fd, char *cmd, char **env, char *cmdpath);
void		exec_pipe(char *cmd, char **env, char *cmdpath);

// void		do_pipe(char *cmd, char **env, char *cmdpath);
void		ft_init_basics(int argc, char **argv, char **env, t_info *basics);

void		error_handler_exit(char *str);
char		*first_word(char *cmd, char c);
int			is_spaces_only(char *str);
#endif