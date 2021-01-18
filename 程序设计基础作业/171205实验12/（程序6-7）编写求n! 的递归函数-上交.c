int factorial (int n)
{
	int out;
	if (n == 0) {
		out = 1; //0µÄ½×³ËÊÇ1 
	} 
	else {
		out = factorial (n - 1) * n;
	}
	return out;
}
