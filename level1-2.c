#include <stdio.h>
void buy_products(int total){
    int sum=0;
    while(sum<total){
        int pay=0;
        scanf("%d",&pay);
        if(pay!=1&&pay!=2&&pay!=5){
            printf("The coin function can only be entered into 1 yuan, 2 yuan and 5 yuan, please re-enter\n");
        }
        else{
            sum+=pay;
        }
        //sum+=pay;
    }
    if(sum>total){
        printf("change: %d\nThe purchase is successful, welcome to visit us next time!",sum-total); 
    }
    else{
        printf("The purchase is successful, welcome to visit us next time!\n");
    }

}
      
int main(){
    int total_price=0;
    scanf("%d",&total_price);
    buy_products(total_price);
    return 0;
}