constexpr int mod=1e9+7;

long long fast_exp(long long base, long long exp)
{
    long long ans=1LL;
    base%=mod;
    if(base<0) base+=mod;
    while(exp>0)
    {
        if(exp&1) ans=(ans*base)%mod;
        base=(base*base)%mod;
        exp>>=1;
    }
    return ans;
}
