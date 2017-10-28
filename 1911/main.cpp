#include<cstdio>
#define maxn1 100
#define maxn2 10000
using namespace std;

int n,a[maxn1+10];
bool flag[maxn2+10];

int main()
{
    int i,j,ans=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)scanf("%d",&a[i]);
    for(i=1;i<=n;i++)flag[a[i]]=1;
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
            if(a[i]+a[j]<=maxn2 && flag[a[i]+a[j]])
                flag[a[i]+a[j]]=0,ans++,printf("%dand%dis%d\n",a[i],a[j],a[i]+a[j]);
    printf("%d\n",ans);
    return 0;
}