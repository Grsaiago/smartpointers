#include "smartptr.h"

// MAIN SMARTPTR FUNCTIONS //
void free_call(void *ptr) {
    sfree(*(void **) ptr);
}

__attribute__((malloc))
void	*smalloc(size_t size, void (*dtor)(void *))
{
	t_meta	*meta;
	
	meta = malloc(size + sizeof(struct s_meta));
	if (!meta)
		return (NULL);
	*meta = (struct s_meta) {
		.dtor = dtor,
		.ptr = meta + 1
		};
	return (meta->ptr);
}

void	sfree(void *ptr)
{
	t_meta	*meta;
	if (ptr == NULL)
		return ;
	meta = ptr - sizeof(struct s_meta);
	if (meta->dtor)
		meta->dtor(ptr);
	free(meta);
}

// DESTRUCTOR FUNCTIONS //
void	destroy_matrix(void	*mat)
{
	int		i;
	char	**matrix;

	matrix = (char **)mat;
	i = 0;
	while (matrix[i])
	{
		free(matrix[i]);
		i++;
	}
}
