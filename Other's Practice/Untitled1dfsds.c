#include<stdio.h>
int main()
{
  int t,n,m,i,ara1[40],ara2[20],j,k,l,sort;
  scanf("%d",&t);
  while(t--){
    scanf("%d %d", &m, &n);
    for(i=0;i<m;i++){
      //cin>>ara1[i];
      scanf("%d",ara1[i]);
    }
    for(j=0;j<n;j++){
      //cin>>ara2[j];
      scanf("%d",ara2[j]);
    }
    for(k=0,l=m;k<n;k++){
      ara1[l]=ara2[k];
      l++;
    }

    sort(ara1,ara1+5);
    for(int x=0;x<(m+n);x++){
      //cout<<ara1[x]<<endl;
      printf("%d",ara1[x]);
    }
  }
  return 0;
}
