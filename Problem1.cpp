#include <iostream>

using namespace std;

int main() {
    
    long int T=0;
    cin >> T;
    int arr[T];
    long int N=0,M=0,Q=0;
    
    for (long int i=0;i<T;i++) {
            cin >> N;  
            M=--N; 
            Q=M;
            
            do { 
                if(M%3==0)
                    break;
            }
            while((M--)>0);
            
           do { 
                if(N%5==0)
                    break;
            }
            while((N--)>0);
            
            if(Q>=15) {
                do { 
                if(Q%15==0)
                    break;
            }
            while((Q--)>0);
            }
            
            M/=3; 
            N/=5; 
            Q/=15;
            
            long int sum1=(long int)((M*(2*3+(M-1)*3)));
            long int sum2=(long int)((N*(2*5+(N-1)*5)));
            long int sum3=(long int)((Q*(2*15+(Q-1)*15)));
            
            sum1 >>= 1;
            sum2 >>= 1;
            sum3 >>= 1;
            
            cout <<  (sum1+sum2-sum3) << endl;
    }
    
    return 0;
}
