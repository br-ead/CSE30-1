// Returns the nth term in the fibonacci sequence.
// The sequence should be 0-indexed, i.e. F(0) = 0, F(1) = 1, F(2) = 1, ...
//
// `n`: index of term to return
int get_nth_fib(int n) {
	(void) n;
	int numbers[46];
	numbers[0]=0;
	numbers[1]=1;
	for(int i=2; i<46; i++) {
		numbers[i]=numbers[i-1]+numbers[i-2];
	}
	return numbers[n];
}
