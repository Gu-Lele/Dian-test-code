#include <stdio.h>
char name='a';
int td;
int price;
int num;
int wait_for_users(void){
    int ch;
    printf("Lay products:input:1;Buy products:input:2;END the use of vending machines:input 3\n");
    scanf("%d",&ch);
    return ch;
}
int buy_products(void){
    char name_buy='a';
    int td_buy;
    int num_buy; 
    int sum=0;
    printf("PLEASE input name,channel,and number\n");
    name_buy=getchar();
    scanf("%c %d %d",&name_buy,&td_buy,&num_buy);
    //printf("%c\n%d\n%d\n",name_buy,td_buy,num_buy);
    if(name_buy!=name||td_buy!=td||num_buy>num){
        return -1;;
    }
    else{
        int total=num_buy*price;
        while(sum<total){
            int pay=0;
            printf("Start coin-insertion\n");
            scanf("%d",&pay);
            if(pay!=1&&pay!=2&&pay!=5){
                printf("The coin function can only be entered into 1 yuan, 2 yuan and 5 yuan, please re-enter\n");
            }
            else{
                sum+=pay;
            }
        //sum+=pay;
        }
        num-=num_buy;
        return sum-total;
        //printf("change: %d\nThe purchase is successful, welcome to visit us next time!",sum-total); 
        }
    

}

int main(){
    int step =1;
    int flag=1;
    while(flag==1){
        switch(step){
            case 1:{//选择买还是存放
                int choice=wait_for_users();
                if(choice==1){step=2;}//lay
                else if(choice==2){
                    step=3;
                }
                else if(choice==3){
                    step=4;//end
                }
                else{
                    step=18;//报错
                }  
            }break;
            case 2:{//Lay
                //参数写为全局变量
                printf("PLEASE input name,channel,price,and number\n");
                scanf("%c %d %d %d",&name,&td,&price,&num);
                step=1;
            }break;
            case 3:{
                int re=buy_products();
                //printf("%d\n",re);
                if(re==-1){
                    step=18;
                }
                else{
                    printf("change: %d\nThe purchase is successful, welcome to visit us next time!",re);
                    step=1;
                }
            }break;
            case 4:{//END
                printf("END\n");
                flag=0;
            }break;
            case 18:{//输入错误
                printf("There is an INCORRECT input!STOCK:name %c;channel %d;price %d;number %d",name,td,price,num);
                step=1;
            }break;
            default:
                break;
        }
    }
    return 0;
}