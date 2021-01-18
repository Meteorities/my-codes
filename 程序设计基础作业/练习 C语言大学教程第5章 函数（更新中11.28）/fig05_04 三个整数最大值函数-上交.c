int maximum (int x,int y,int z)
{
	int max = 0;
	if (x > y) {
		max = x;
	} 
	if (x < y) {
		max = y;
	} 
	if (max > z) {
		max = max;
	}
	if (max < z) {
		max = z;
	}
	return max;
}
