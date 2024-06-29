#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
void printmenu();
double division(double,double);
double modulus(int,int);

int main(){
    int choice;
    double number1,number2,result;
    while(1){
    printmenu(choice);
    printf("Choose any one option:");
    scanf("%d",&choice);
    if(choice<1||choice>7){
        printf("INVALID INPUT");
        continue;
    }
    if(choice==7){
        break;
    }
     printf("Enter the first number:");
     scanf("%lf",&number1);
     printf("Enter the second number:");
     scanf("%lf",&number2);

    
    

    
    switch(choice)
    {
    case 1:result=number1+number2;
        
         
        break;
        case 2:result=number1-number2;
         
        break;
        case 3:result=number1*number2;
         
        break;
        case 4:result=division(number1,number2);
         
        break;
        case 5:result=modulus(number1,number2);
         
        break;
        case 6:result=pow(number1,number2);
         
        break;
        case 7:exit(0);
        break;
        
    }
    if(!isnan(result)){
        printf("\nthe result is:%.2lf\n",result);
    }
    }
    
    return 0;
}

void printmenu(){
    printf("\t\t\t\tSIMPLE CALCULATOR\n");
    printf("\n1.add");
    printf("\n2.sub");
    printf("\n3.mul");
    printf("\n4.div");
    printf("\n5.modulus");
    printf("\n6.pow");
    printf("\n7.exit\n");
};

double division(double a,double b){
    if(b==0){
        printf("invalid input\n");
    return NAN;
}else
return a/b;
}
double modulus(int a,int b){
    if(b==0){
        printf("invalid input\n");
        return NAN;

    }else 
    return a%b;
}