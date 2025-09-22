long long fast_exp(long long base, long long exp, long long mod) {
    long long ans=1LL;
    base%=mod;
    if(base<0) base+=mod;
    while(exp) {
        if(exp&1) ans=(ans*base)%mod;
        base=(base*base)%mod;
        exp>>=1;
    }
    return ans;
}
