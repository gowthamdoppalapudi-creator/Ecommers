#include <stdio.h>
#include <string.h>

struct Product
{
    int id;
    char name[30];
    float price;
};

int getOrderNumber()
{
    FILE *fp;
    int num=1,last;

    fp=fopen("ordercount.txt","r");

    if(fp!=NULL)
    {
        if(fscanf(fp,"%d",&last)==1)
            num=last+1;

        fclose(fp);
    }

    fp=fopen("ordercount.txt","w");

    if(fp!=NULL)
    {
        fprintf(fp,"%d",num);
        fclose(fp);
    }

    return num;
}

int main()
{
    struct Product p[4]={
        {1,"Laptop",50000},
        {2,"Phone",20000},
        {3,"Headphones",2000},
        {4,"Keyboard",1500}
    };

    char customerName[50];
    char phone[20];

    int choice,id,qty,cartQty[4]={0},i;
    float total=0,discount=0,final;

    int orderNo=getOrderNumber();

    FILE *fp;

    printf("Enter Customer Name: ");
    scanf(" %[^\n]",customerName);

    printf("Enter Phone Number: ");
    scanf("%s",phone);

    while(1)
    {
        printf("\n1.View Products");
        printf("\n2.Add To Cart");
        printf("\n3.View Cart");
        printf("\n4.Checkout");
        printf("\n5.Exit");

        printf("\nEnter Choice: ");
        scanf("%d",&choice);

        if(choice==1)
        {
            printf("\nID\tProduct\t\tPrice\n");

            for(i=0;i<4;i++)
                printf("%d\t%s\t\t%.2f\n",
                p[i].id,p[i].name,p[i].price);
        }

        else if(choice==2)
        {
            printf("Enter Product ID: ");
            scanf("%d",&id);

            printf("Enter Quantity: ");
            scanf("%d",&qty);

            if(id>=1 && id<=4)
            {
                cartQty[id-1]+=qty;
                printf("Item Added Successfully\n");
            }
        }

        else if(choice==3)
        {
            total=0;

            for(i=0;i<4;i++)
            {
                if(cartQty[i]>0)
                {
                    printf("%s Qty:%d Amount:%.2f\n",
                    p[i].name,
                    cartQty[i],
                    p[i].price*cartQty[i]);

                    total += p[i].price*cartQty[i];
                }
            }

            printf("Cart Total = %.2f\n",total);
        }

        else if(choice==4)
        {
            total=0;

            for(i=0;i<4;i++)
                total += p[i].price*cartQty[i];

            if(total>50000)
                discount=total*0.10;
            else if(total>20000)
                discount=total*0.05;
            else
                discount=0;

            final=total-discount;

            printf("\nOrder-%d\n",orderNo);
            printf("Customer Name: %s\n",customerName);
            printf("Phone Number: %s\n",phone);

            fp=fopen("orders.txt","a");

            if(fp!=NULL)
            {
                fprintf(fp,"\n------ Order-%d ------\n",orderNo);
                fprintf(fp,"Customer Name: %s\n",customerName);
                fprintf(fp,"Phone Number: %s\n",phone);

                for(i=0;i<4;i++)
                {
                    if(cartQty[i]>0)
                    {
                        fprintf(fp,"%s Qty:%d Amount:%.2f\n",
                        p[i].name,
                        cartQty[i],
                        p[i].price*cartQty[i]);
                    }
                }

                fprintf(fp,"Total: %.2f\n",total);
                fprintf(fp,"Discount: %.2f\n",discount);
                fprintf(fp,"Final Bill: %.2f\n",final);

                fclose(fp);
            }

            printf("Final Bill = %.2f\n",final);
            break;
        }

        else if(choice==5)
        {
            break;
        }
    }

    return 0;
}