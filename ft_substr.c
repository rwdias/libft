#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr_str;
	size_t	new_len;

	if (s == NULL)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	new_len = ft_strlen(s + start);
	if (new_len < len)
		len = new_len;
	ptr_str = (char *) malloc(sizeof(char) * (len + 1));
	if (!ptr_str)
		return (NULL);
	ft_strlcpy(ptr_str, s + start, len + 1);
	return (ptr_str);
}
