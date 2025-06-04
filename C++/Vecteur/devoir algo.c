#include<stdio.h>
int main(){
int l,p,s,k;
do{
printf("donner un nombre\n ");
scanf("%d",&l);}
while(l<0);
printf("S(%d)=",l);
if(l==1){
    printf("1");}
else{
    p=1;
for(k=1 ; k<=l ; k++){
if(k==1){
    printf("1+");
    s=0;}
else{
        p=p+k+k-1;}
    if(k<l){
      printf("%d+",p) ;}
      else{
        printf("%d=",p);}

    s=s+p;
}
printf("%d",s);
}
}
