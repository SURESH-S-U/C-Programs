

#include <stdio.h>
#include <string.h>

int min(int a,int b,int c){
    if(a<b && a<c){
        return a;
    }else if(b<a && b<c){
        return b;
    }else{
        return c;
    }
}

int minSteps(char *a,char *b,int x,int y){
    
    int memo[x+1][y+1];                                    //using memoization.
    for(int i=0;i<=x;i++){
        for(int j=0;j<=y;j++){
            if(i == 0){
                memo[i][j] = j;
            }else if(j == 0){
                memo[i][j] = i;
            }else if(a[i-1] == b[j-1]){
                memo[i][j] = memo[i-1][j-1];
            }else{
                memo[i][j] = 1 + min(memo[i-1][j],memo[i][j-1],memo[i-1][j-1]);
            }
        }
    }

    return memo[x][y];
}

int main() {
    char a[100],b[100];
    scanf("%s",a);
    scanf("%s",b);
    int x = strlen(a);
    int y = strlen(b);

    printf("%d",minSteps(a,b,x,y));
}