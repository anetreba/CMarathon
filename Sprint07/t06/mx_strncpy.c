static int mx_strlen(const char *s) {
    int i = 0;

    while(s[i])
        i++;
    return i;
}

char *mx_strncpy(char *dst, const char *src, int len) {
    int s_len = mx_strlen(src);
    
	if (s_len < len) 
		len = s_len;
    for (int i = 0; i < len; i++) 
 	 	dst[i] = src[i];
 	return dst;
}
