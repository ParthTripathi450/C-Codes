bool checkArmstrong(int n){
	int rem=0,sum=0,temp=n,counter=0;
	while(temp!=0){
		counter++;
		temp=temp/10;
	}
	temp=n;
	while (n!=0){
		rem=n%10;
		sum = sum+pow(rem,counter);
		n=n/10;
	}
	if (temp==sum){
		return true;
	}
	else{
		return false;
	}

}
