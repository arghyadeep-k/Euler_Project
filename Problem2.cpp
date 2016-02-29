include <iostream>

using namespace std;

long long int fibonacci(long long int n);

int main() {
    
    long long int T,N;
    
    cin >> T;
    for (long int i=0; i<T;i++) {
        cin >> N;
        long long int sum=fibonacci(N);
        cout << sum << endl;
    }
}

long long int fibonacci(long long int n) {
    long long int x,y,z,c;
    x=0;
    y=1;
    z=0;
    c=0;
    for(;;) {
        z=x+y;
        x=y;
        y=z;
        
        if(z>n)
            break;
        
        if(z%2==0)
            c+=z;
    }
    return c;
}
