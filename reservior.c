#include<stdio.h>
 
char str[1000][1000];
int check(int n,int m){
    int i,j;
    int a=0,w=0,b=0,b1=0;
for(i=0;i<n;i++){
    if(str[i][0]=='W'){
        return 0;
    }
    else if(str[i][0]=='B'){
        b=1;
    }
    else{ if(b==1){
        return 0;
    }
    }
    if(str[i][m-1]=='W'){
        return 0;
    }
    else if(str[i][m-1]=='B'){
        b1=1;
    }
    else{ if(b1==1){
        return 0;
    }
    }
}
for(i=1;i<m-1;i++){
        a=0;
        w=0;
    for(j=n-1;j>=0;j--){
        if(str[j][i]=='A'){
            a=1;
        }
        else if(str[j][i]=='W'){
            w=1;
        }
        else if(a==1 || w==1){
            return 0;
        }
    }
}
for(i=0;i<n;i++){
    for(j=1;j<m;j++){
        if(str[i][j]=='W'){
            if(str[i][j-1]=='A'){
                return 0;
            }
        }
            else if(str[i][j]=='A'){
                if(str[i][j-1]=='W'){
                    return 0;
                }
            }
        }
    }
 
 
return 1;
}
int main(){
int t,i,n,m,j;
scanf("%d",&t);
for(i=0;i<t;i++){
    scanf("%d",&n);
    scanf("%d",&m);
    for(j=0;j<n;j++){
        scanf("%s",str[j]);
    }
    int a=check(n,m);
        if(a==1){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
}
return 0;}
