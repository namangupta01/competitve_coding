#include<stdio.h>
int calculate(int);
int main(){
int n;
scanf("%d",&n);
calculate(n);
return 0 ;
}
int calculate(int m){
int a[500000];
int counter=0,temp,rem,x,y;
a[0]=2;
for(x=2;x<=m;x++){
    y=0;
    temp=0;
    while(y<=counter){
        if((a[y]*2+temp)/10!=0){
            if(y==counter){
            a[y+1]=0;
            counter++;
            }
            }
        rem=(a[y]*2+temp)%10;
        temp=(a[y]*2+temp)/10;
        a[y]=rem;
        y++;
        }

    }
    for(y=counter;y>=0;y--){
        printf("%d",a[y]);
        }
        printf("\n%d",counter+1);
        return 0;
}



