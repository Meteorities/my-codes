void swap (int *x,int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	//since this function's return value's type is "void",you shouldn't use a "return" sentence,else the complier will give you this:warning: ¡®return¡¯ with a value, in function returning void.
}
