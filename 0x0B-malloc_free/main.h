char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char **strtow(char *str);
char *argstostr(int ac, char **av);
void free_grid(int **grid, int height);
int **alloc_grid(int width, int height);