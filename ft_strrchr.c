char	*strchr(const char *s, int c)
{
	int	i;
	char	*out;

	i = 0;
	out = s;
	while s[i]
	{
		if s[i] == c
			out = s + i;
		i++;
	}
	if c = "\0"
		return (s + i);
	return (out);
}
