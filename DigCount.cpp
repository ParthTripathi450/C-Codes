int countDigits(int n){
	int counter=0;
	int rem=0;
	int x=n;
	while (x!=0){
		rem=x%10;
		if (rem!=0 && n%rem==0){
			counter++;
		}
		x=x/10;
	}
	return counter;
}