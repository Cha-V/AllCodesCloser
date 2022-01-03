int sumEvenNumbersFromOneToN(int N)
{
  	int i=2, sum=0;
    while(i<=N){
        sum+=i;
        i+=2;
    }
    return sum;
}