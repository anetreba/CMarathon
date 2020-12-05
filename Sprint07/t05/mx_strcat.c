int mx_strlen(const char *s);

char *mx_strcat(char *s1, const char *s2) {
    int j = 0;
 	int i = mx_strlen(s1);
 	int size = i + mx_strlen(s2);

 	for (; i < size; i++, j++)
 		s1[i] = s2[j];
 	s1[i] = '\0';
 	return s1; 
}
