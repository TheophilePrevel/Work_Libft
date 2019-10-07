int	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t out;

	i = 0;
	out = 0;
	while (src[out] != '\0')
	{
		out++;
	}
	while (src[i] != '\0' && i < dstsize - 1 && dstsize > 0)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < dstsize)
	{
		dst[i] = '\0';
		i++;
	}
	if (dstsize != 0)
		dst[dstsize - 1] = '\0';
	return (out);
}
