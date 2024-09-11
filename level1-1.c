#include <stdio.h>
void lay_products(char name,int td,int price,int num){
    printf("%d: ",td);
    int i=0;
    for(int i=0;i<num;i++){
        printf("%c",name);

    }    
    printf(" %d",price);
}
      
int main(){
    char name='a';
    int td;
    int price;
    int num;
    scanf("%c %d %d %d",&name,&td,&price,&num);
    lay_products(name,td,price,num);
    return 0;
}