class Solution:
public:
		long long int PowMod(long long int x,long long int n,long long int M)
		{
		    // Code here
		    long long int r=(1);
		    while(n){
		        if(n&1){
		            n=n-1;
		            r=(((r%M)*(x%M))%M);
		        }
		        else{
		            n=n/2;
		            x=(x%M*x%M)%M;
		        }
		    }
		    return r;
		}
};