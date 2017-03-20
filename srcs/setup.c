/*42 header goes here*/

#include "21sh.h"

void	disp_prompt(void)
{
	char	*home_path;
	size_t	home_len;
	char	*current;

	current = NULL;
	home_path = getenv("HOME");
	home_len = ft_strlen(home_path);
	current = getcwd(NULL, 0);
	if (ft_strncmp(home_path, current, home_len) == 0)
	{
		ft_putchar('~');
		ft_putstr(current + home_len);
	}
	else
		ft_putstr(current);
	ft_putstr(" $ ");
	current = NULL;
	free(current);
}

void	setup(t_shell *shell)
{
	shell->cmd = NULL;
	disp_prompt();
	shell->path = ft_strsplit(getenv("PATH"), ':');
}