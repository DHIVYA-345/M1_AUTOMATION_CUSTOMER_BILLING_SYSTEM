#include<projectfloat.h>
int main()
{
    dummy(float a);
    return(0);
}

do
{
flushall();
printf("Enter Product Name  :");
gets(b[i].item);
printf("Enter Qty and Price : ");
scanf("%f%f",&b[i].qty, &b[i].price);
flushall();
printf("Add More Items [y/n]");
scanf("%c",&ch);
if(ch=='y')
{i++;c++;};
}
while(ch=='y');
printf("============================================================");
textcolor(RED);
textbackground(WHITE);
printf("\t\t\t\t\t\t\b\b\b");
cprintf("S U P E R  M A R K E T\n");
puts("\n============================================================");
printf("%-10s%15s%17s%17s\n", "Item", "Qty", "Price", "Amount");
puts("------------------------------------------------------------");
for(i=0;i<c;i++)
{
amt=b[i].qty*b[i].price;
total=total+amt;
printf("%-9s %16.2f\t%10.2f\t%11.2f\n",b[i].item, b[i].qty,b[i].price, amt);
}
puts("------------------------------------------------------------");

