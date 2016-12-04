


#include<stdio.h>
#include<stdlib.h>
#include<math.h>


float mainprice,topping_price,cprice,sprice,vprice,small,medium,large,price2,finalprice,money,balance;
float bread();
float filling();
float size();
float topping();
 int BT,ST,FT,TT,Payment;
main (){

bread();

int amount,bill;
printf("%f",mainprice=topping_price+finalprice);
printf("\nBread quantity :\n");
scanf("%i",&amount);

mainprice*=amount;
printf("payment method:\n1.cash\t2.Visa\n");
scanf("%i",&Payment);
if(mainprice>=1000.00 && Payment==2){

    mainprice=mainprice*9/10;

    printf("total price is %f\n",mainprice);

}else{

printf("total price is %f\n",mainprice);

}
printf("Enter your amount:\n");
scanf("%f",&money);


backtobill:
printf("press no '1' to print the bill:\n\n\n");
scanf("%i",&bill);
 if(bill==1){



    switch(BT){
                case 1:
                      printf("\nBread Type:Baguette\n");
                        break;
                case 2:
 printf("\nBread Type:Foccacia");
                        break;
                case 3:
 printf("\nBread Type:Ciabatta");
                        break;
                default :
                  goto  backtobill;

                }

                switch(FT){
                case 1:
                      printf("\n Filling Type:Chicken\n");
                        break;
                case 2:
 printf("\n Filling Type:Seafood");
                        break;
                case 3:
 printf("\n Filling Type:Vegi");
                        break;
                default :
                  goto  backtobill;

                }

 switch(ST){
                case 1:
                      printf("\n Size Type:Small\n");
                        break;
                case 2:
 printf("\n Size Type:Medium");
                        break;
                case 3:
 printf("\n Size Type:Large");
                        break;
                default :
                  goto  backtobill;

                }



switch(TT){
                case 1:
                      printf("\n Topping Type:cheese\n");
                        break;
                case 2:
 printf("\n Topping Type:Mayonnaise");
                        break;
                case 3:
 printf("\n Topping Type:S.Sauce");
  break;

            case 4:
 printf("\n Topping Type:Cheese and Mayonnaise");
                        break;

                                   case 5:
 printf("\n Topping Type:Mayonnaise and S.Sauce ");
    break;

     case 6:
 printf("\n Topping Type:Cheese and S.Sauce ");
    break;

     case 7:
 printf("\n Topping Type:Cheese ,Mayonnaise and s.sauce \n");
    break;
                default :
                  goto  backtobill;

                }


printf("\ntotal price is %f\n",mainprice);
   balance=money-mainprice;
   printf("Balance is:\t%f",balance);


}else{
goto backtobill;

}

}


float bread(){

backtobread:
 printf("\nSelect bread type:\n1.Baguette\t2.Foccacia\t3.Ciabatta\n");
 scanf("%i",&BT);
                switch(BT){
                case 1:
                            cprice=200.00,sprice=300.00,vprice=100.00;
                       finalprice= filling();

                        break;
                case 2:
                     cprice=250.00,sprice=350.00,vprice=150.00;
                   finalprice= filling();

                        break;
                case 3:
                     cprice=225.00,sprice=325.00,vprice=125.00;
                 finalprice=   filling();

                        break;
                default :
                   goto backtobread;
                }


}

float filling(){

backtofill:
    printf("\nSelect your Filling\n1.Chicken\t2.Sea food\t3.Vegetarian\n");
    scanf("%i",&FT);

                switch(FT){

            case 1:
        small=cprice,medium=cprice*11/10,large=cprice*12/10;

                size();
                        switch(ST){
                    case 1:
                        price2=small;
                        return price2;
                        break;
                    case 2:
                        price2=medium;
                        return price2;
                        break;
                    case 3:
                        price2=large;
                        return price2;
                        break;


                }

                return price2;

                break;

            case 2:
                 small=sprice,medium=sprice*11/10,large=sprice*12/10;

                 size();
                  switch(ST){
                    case 1:
                        price2=small;
                        return price2;
                        break;
                    case 2:
                        price2=medium;
                        return price2;
                        break;
                    case 3:
                        price2=large;
                        return price2;
                break;}
            case 3:
                 small=vprice,medium=vprice*11/10,large=vprice*12/10;

                 size();
                  switch(ST){
                    case 1:
                        price2=small;
                        return price2;
                        break;
                    case 2:
                        price2=medium;
                        return price2;
                        break;
                    case 3:
                        price2=large;
                        return price2;
                break;}

                    default :
                      goto  backtofill;

                }

}
float size(){

backtosize:
      printf("Select Size type:\n1.small\t2.medium\t3.large\n");
      scanf("%i",&ST);
      switch(ST){
   case 1:



       topping_price= topping();



        break;
  case 2:


 topping_price= topping();



        break;
  case 3:
     topping_price= topping();



        break;

  default :
    goto backtosize;
      }




}

float topping(){

   float c=50.00,m=25.00,ss=100.00,tprice;

   backtotopping:

   printf("Select Topping\n1.Cheese\t2.Mayonnasi\t3.Special Sauce\t4.Cheese & Mayonnasi\t5.Cheese & Special Sauce\t6.Mayonnasi & Spesial Sauce\t7.All\t8.None\n");
   scanf("%i",&TT);
   switch(TT){
 case 1:
      tprice = c;
       return tprice;
       break;
 case 2:
    tprice = m;
       return tprice;
       break;
 case 3:
    tprice = ss;
       return tprice;
       break;

 case 4:
     tprice = c+m;
       return tprice;
       break;
 case 5:
    tprice = c+ss;
       return tprice;
       break;
 case 6:
    tprice = m+ss;
       return tprice;
       break;
 case 7:
     tprice = c+m+ss;
       return tprice;
       break;
 case 8:
    tprice = 0.00;
       return tprice;
       break;
 default :
   goto backtotopping;

   }

}

