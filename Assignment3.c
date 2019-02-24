#include<stdio.h>

int main(){
  int T;
  scanf("%d\n",&T );
  for (int i=0;i<T;i++){
    int n;
    scanf("%d\n",&n );
    int N=2<<(n-1);
    int B[N][2];
    for(int j=0;j<N;j++){
      scanf("%d",&B[j][0] );
      B[j][1]=1;
    }
    int l=1;
    B[0][1]=0;
    int C[N];
    int countC=1;
    C[0]=0;
    int final[n];
    int count=0;
    for(l=1;l<N;l++){
      if(B[k][1]==0){
        continue;
      }
      else{
        int x=B[k][0];
        int temp[countC];
        countTemp=0;
        for(int m=0;m<countC;m++){
          temp[countTemp]=B[C[m]][0]+x;
          countTemp++;
        }
        //countC=countC+countTemp;
        int Temp=0;
        for(int d=i;d<N;d++){
          if(B[d][0]==temp[Temp]&&B[d][1]==1){
            B[d][1]=0;
            final[count]=B[d][0];
            count++;
            C[countC]=d;
            countC++;
          }
        }
      }
      for(int i=0;i<n-1;i++){
        printf("%d ",final[i]);
      }
      printf("%d\n",final[n-1] );
    }
  }
}
