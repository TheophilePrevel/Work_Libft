int	strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	while (s1[i] - s2[i] == 0 & i < n)
		i++;
	return (s1[i] - s2[i]); 
}
