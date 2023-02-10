# 1 "main.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 366 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "main.c" 2
int
sum(int *a, int n)
{
	int i, s = 0;
	for (i = 0; i < n; i++) {
		s += a[i];
	}
	return s;
}
