#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
    char a[10000],b[10000],c[10000];
    printf("ENTER THE WORD :");
    scanf("%[^\n]s",&a);
    int n=strlen(a),j=0,flag=0,d=0;
    for(int i=0;i<n;i++){
        
        if (a[i]==' '){
             continue;
        }
        c[d]=tolower(a[i]);
        d=d+1;
        
    }
    for(int i=d-1;i>=0;i--){
        b[j]=c[i];
        j++;
    }
    printf("%s\n",b);
    printf("%s\n",c);
    for(int k=0;k < d+1;k++){
        if(c[k]!=b[k]){
            flag =1;
            break;
        }
    }
    if(flag==1){
        printf("NON-VULNERABLE");
    }
    else{
        printf("VULNERABLE");
    }
    return 0;
}
