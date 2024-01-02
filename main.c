/* ============================ Read Me================================
    In this Project the
     Username is user(all are in small letters)
     Password is 123
*/


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>

struct customer
{
    int q[10];
    int x;
    int f;
    int z;
    int l;
    int i;
    int k;
    int d;
    int m;
    int a;
    int h;
    int e[10];
    int a5[10];
    int w[10];
    float r[10];
    float p[10];
    float cg[20];
    float s[20];
    float t;
    float b;
    float o;
    float g;
    float to[10];
    char n[10][25][30];
    char name[40][20];
    char b2[20];
};
struct buyer
{
    int q[10];
    int x;
    int d;
    int l;
    int i;
    int k;
    int m;
    int a;
    int h;
    int e[10];
    int a5[10];
    int w[10];
    float r[10];
    float p[10];
    float cg[20];
    float s[20];
    float t;
    float b;
    float o;
    float g;
    float to[10];
    char n[10][25][30];
    char name[40][20];
    char b2[20];
};

struct account
{
    char name[40][20];
    char n[25];
    int p[10];
    int id;
    int bal;
};

struct psaccount
{
    char name[40][20];
    char n[25];
    int p[20];
    int id;
    int bal;
    char nam[25];
};


int i,j,d;
struct account k;
struct customer c;
struct  psaccount h;
struct buyer l;
struct stock s;

void sales_managemnt()
{
    int hx;
    do
    {
        printf("---------------****************************--------------------------------");
        printf("\n\t\t\t SALES MANAGEMENT");
        printf("\n---------------****************************--------------------------------\n");
        printf("\n\t\t\t 1. Create a Bill");
        printf("\n\t\t\t 2. Display Bills");
        printf("\n\t\t\t 3. Search Bill Records");
        printf("\n\t\t\t 4. Append Bill record");
        printf("\n\t\t\t 5. Delete bill Records");
        printf("\n\t\t\t 6. Exit");
        printf("\n-----------------********************************-----------------------------");
        printf("\nEnter Your Choice :");
        scanf("%d", &hx);
        switch(hx)
        {
            case 1: system("cls");
                     bill_creation();
                     break;
            case 2: system("cls");
                    display_bill();
                    break;
            case 3: system("cls");
                    search_bill();
                    break;
            case 4: system("cls");
                    append_bill();
                    break;
            case 5: system("cls");
                    del_record();
                    break;
        }

    }while(hx!=6);
}
void purchase_management()
{
    int kh;
    do
    {
        printf("---------------****************************--------------------------------");
        printf("\n\t\t\t PURCHASE MANAGEMENT");
        printf("\n---------------****************************--------------------------------");
        printf("\n\t\t\t 1. Create a Purchase Bill");
        printf("\n\t\t\t 2. Display Purchase Bills");
        printf("\n\t\t\t 3. Search Purchase Bill Records");
        printf("\n\t\t\t 4. Append Purchase Bill record");
        printf("\n\t\t\t 5. Delete bill Records");
        printf("\n\t\t\t 6. Exit");
        printf("\n-----------------********************************-----------------------------");
        printf("\nEnter Your Choice :");
        scanf("%d", &kh);
        switch(kh)
        {
            case 1: system("cls");
                     pbill_creation();
                     break;
            case 2: system("cls");
                    pdisplay_bill();
                    break;
            case 3: system("cls");
                    psearch_bill();
                    break;
            case 4: system("cls");
                    pappend_bill();
                    break;
            case 5: system("cls");
                    pdel_record();
                    break;
        }

    }while(kh!=6);
}
void stock_management()
{
     int lx;
       do
    {
        printf("---------------****************************--------------------------------");
        printf("\n\t\t\t STOCK MANAGEMENT");
        printf("\n---------------****************************--------------------------------\n");
        printf("\n\t\t\t 1. Create an Item");
        printf("\n\t\t\t 2. Display Items");
        printf("\n\t\t\t 3. Search Item Records");
        printf("\n\t\t\t 4. Append Item Record");
        printf("\n\t\t\t 5. Delete Item Records");
        printf("\n\t\t\t 6. Exit");
        printf("\n-----------------********************************-----------------------------\n");
        printf("\nEnter Your Choice :");
        scanf("%d", &lx);
        switch(lx)
        {
            case 1: system("cls");
                     stock_creation();
                     break;
            case 2: system("cls");
                    display_stock();
                    break;
            case 3: system("cls");
                    search_stock();
                    break;
            case 4: system("cls");
                    append_stock();
                    break;
            case 5: system("cls");
                    del_item();
                    break;
        }

    }while(lx!=6);

}
struct stock
{
    char name[50];
    int code;
    char manu;
    float mrp;
    int qty;
    int g;



};
struct stock s;
int i;

int prod_id()
{
    FILE* fp;
    int value=0;
    fp=fopen("produ.txt","r");

    if(fp==NULL)
    {
        fp=fopen("produ.txt", "w");
        fprintf(fp,"%d",0);
        fclose(fp);
        fp=fopen("produ.txt", "r");
    }
    fscanf(fp,"%d",&value);
    fclose(fp);
    fp=fopen("produ.txt", "w");
    fprintf(fp,"%d", value+1);
    fclose(fp);
    return value+1;
}
void stock_creation()
{
   FILE *fp;
   char ch='y';

   fp=fopen("stockee.txt","ab");

       s.code= prod_id();
       printf("Enter the Product ID :%d", s.code);

       printf("\nEnter the name :");
       scanf("%s",&s.name[i]);

       printf("\nEnter the quantity :");
       scanf("%d", &s.qty);

       printf("\nEnter the MRP :");
       scanf("%f", &s.mrp);

       printf("\nEnter GST :");
       scanf("%d", &s.g);
       fwrite(&s,sizeof(s),1,fp);
       {
           printf("Record saved");
       }

   fclose(fp);
}
void display_stock()
{
   FILE *fp;
   fp=fopen("stockee.txt","rb");
   if(fp==NULL)
   {
       printf("\n Cannot open File");
       return;
   }
   printf("\n Product ID\tProduct name\tQuantity\tMRP\tGST");
   printf("\n===============================================================================");
   while( (fread(&s,sizeof(s),1,fp)))
   {
       printf("\n%5d %20s %14d %12.2f %10d\n", s.code,s.name,s.qty,s.mrp,s.g);
   }
   fclose(fp);
}

int bill_no()
{
    FILE* fp;
    int value=0;
    fp=fopen("bills.txt","r");

    if(fp==NULL)
    {
        fp=fopen("bills.txt", "w");
        fprintf(fp,"%d",0);
        fclose(fp);
        fp=fopen("bills.txt", "r");
    }
    fscanf(fp,"%d",&value);
    fclose(fp);
    fp=fopen("bills.txt", "w");
    fprintf(fp,"%d", value+1);
    fclose(fp);
    return value+1;
}
void search_stock()
{
   int ro,flag=0;
    FILE *fp;
    fp=fopen("stockee.txt", "ab+");
    if(fp==NULL)
    {
        printf("\n\t\t Error: Can't open a file");
        return;
    }
    printf("Enter product id which you want search :");
    scanf("%d", &ro);

    while(fread(&s,sizeof(s),1,fp)>0 && flag==0)
    {
        if(s.code==ro)
        {
            flag=1;
            printf("Record Found\n");
            printf("\n Product ID\tProduct name\tQuantity\tMRP\tGST");
            printf("\n===============================================================================");
            printf("\n%5d %15s %15d %14.2f %10d\n", s.code,s.name,s.qty,s.mrp,s.g);
            fclose(fp);
        }
        else
        {
            printf("================= Record Not Found ===================");
        }
}
}
void append_stock()
{

   int k,flag=0;
    FILE *fp;
    fp=fopen("stockee.txt", "rb+");
    if(fp==NULL)
    {
        printf("\n\t\t Error: Can't open a file");
        return;
    }
    printf("Enter stock id which you want to update :");
    scanf("%d", &k);
    printf("========== Previous Records Follow =========================");
    while(fread(&s,sizeof(s),1,fp)>0 && flag==0)
        if (s.code==k)
        printf("\n Product ID\tProduct name\tQuantity\tMRP\tGST");
        printf("\n===============================================================================");
        printf("\n%5d %18s %11d %14.2f %10d\n", s.code,s.name,s.qty,s.mrp,s.g);
       printf("===================== Update Details =========================\n");
       printf("Enter the Product ID :%d", s.code);

       printf("\nEnter the name :");
       scanf("%s",&s.name[i]);

       printf("\nEnter the quantity :");
       scanf("%d", &s.qty);

       printf("\nEnter the MRP :");
       scanf("%f", &s.mrp);

       printf("\nEnter GST :");
       scanf("%d", &s.g);
    fseek(fp,-(long)sizeof(s),1);
    fwrite(&s,sizeof(s),1,fp);
    printf("\n\t\t =================================== Record Updated Successfully ==========================\n");
    fclose(fp);


}
void del_item()
{
    int m;
    unsigned int flag=0;
    FILE *fp,*ft;
    fp=fopen("stockee.txt", "rb");
    if(fp==NULL)
    {
        printf("Cannot open a file");
        return;
    }
    printf("Enter Account Id which you want to delete :");
    scanf("%d", &m);
    ft=fopen("stockee1.txt","ab+");
    while(fread(&s,sizeof(s),1,fp)==1)
    {
        if(m !=s.code)
        {
            printf("\n\t\t Record Deleted Successfully\n");
            fwrite(&s,sizeof(s),1,ft);
        }
        else
            flag=1;
    }
    if (flag==0)
    {
        printf("Record Not Found");
    }
    fclose(fp);
    fclose(ft);
    remove("stockee.txt");
    rename("stockee1.txt","stockee.txt");
    printf("Updated Record");

}
int acc_no()
{
    FILE* fp;
    int value=0;
    fp=fopen("accs.txt","r");

    if(fp==NULL)
    {
        fp=fopen("accs.txt", "w");
        fprintf(fp,"%d",0);
        fclose(fp);
        fp=fopen("accs.txt", "r");
    }
    fscanf(fp,"%d",&value);
    fclose(fp);
    fp=fopen("accs.txt", "w");
    fprintf(fp,"%d", value+1);
    fclose(fp);
    return value+1;
}
int pacc_no()
{
    FILE* fp;
    int value=0;
    fp=fopen("paccs.txt","r");

    if(fp==NULL)
    {
        fp=fopen("paccs.txt", "w");
        fprintf(fp,"%d",0);
        fclose(fp);
        fp=fopen("paccs.txt", "r");
    }
    fscanf(fp,"%d",&value);
    fclose(fp);
    fp=fopen("paccs.txt", "w");
    fprintf(fp,"%d", value+1);
    fclose(fp);
    return value+1;
}
void account_management()
{
    int gh;
    do
    {
        printf("---------------****************************--------------------------------");
        printf("\n\t\t\t  ACCOUNT MANAGEMENT");
        printf("\n---------------****************************--------------------------------");
        printf("\n\t\t\t 1. Customer Management");
        printf("\n\t\t\t 2. Trader Management");
        printf("\n\t\t\t 3. Exit");
        printf("\n-----------------********************************-----------------------------");
        printf("\nEnter Your Choice :");
        scanf("%d", &gh);
        switch(gh)
        {
            case 1: system("cls");
                    cmanagement();
                    break;
            case 2: system("cls");
                    pmanagement();
                    break;

        }
    }
    while(gh !=3);
}

void pmanagement()
{
  int kh;
       do
       {
        printf("---------------****************************--------------------------------");
        printf("\n\t\t\t TRADER ACCOUNT MANAGEMENT");
        printf("\n---------------****************************--------------------------------");
        printf("\n\t\t\t 1. Create an Trader Account");
        printf("\n\t\t\t 2. Display Trader Accounts");
        printf("\n\t\t\t 3. Search Trader");
        printf("\n\t\t\t 4. Append Trader company details");
        printf("\n\t\t\t 5. Delete Trader account");
        printf("\n\t\t\t 6. Exit");
        printf("\n-----------------********************************-----------------------------");
        printf("\nEnter Your Choice :");
        scanf("%d", &kh);
        switch(kh)
        {
            case 1: system("cls");
                     pac_creation();
                     break;
            case 2: system("cls");
                    pac_display();
                    break;
            case 3: system("cls");
                    pac_search();
                    break;
            case 4: system("cls");
                    pac_append();
                    break;
            case 5: system("cls");
                    pac_delrec();
                    break;
        }
       }

    while(kh!=6);

}
void pac_creation()
{
    FILE *fp;
   fp=fopen("paccount.txt","ab+");
   if(fp==NULL)
   {
       printf("\n Cannot open File");
       return;
   }
   printf("===========================************* Account Creation *************=========================================\n");
   h.id=pacc_no();
   printf("Trader ID :%d", h.id);
   printf("Enter Trader PH NO :");
   scanf("%s",h.p );
   fflush(stdin);
   printf("\nEnter Trader Name :");
   gets(h.name);
   printf("Enter Trader Address :");
   gets(h.n);
   fflush(stdin);
   printf("Enter previous balance of Trader");
   scanf("%d", &h.bal );
   printf("Enter Properiter Name :");
   scanf("%s", &h.nam);
   fwrite(&h,sizeof(h),1,fp);
    {
           printf("Record saved");
    }
    fclose(fp);

   return;

}
void pac_display()
{
 FILE *fp;
   fp=fopen("paccount.txt","rb");
   if(fp==NULL)
   {
       printf("\n Cannot open File");
       return;
   }
   printf("\n============================= *********** Trader Details **********==============================\n");
   printf("\n\t\t Customer Id\t\t Customer Name\t\t Place\t\t Phone No\t\t Account Balance \t\t Properiter Name\n");
   printf("-------------------------------------------------------------------------------------------------------\n");
   while(fread(&h,sizeof(h),1,fp)==1)
   {
       printf("\t\t%d \t\t\t %s \t\t %s \t\t %s \t\t %d \t\t %s \n", h.id,h.name,h.n,h.p,h.bal,h.nam);
   }
   fclose(fp);
   return;
}
void pac_search()
{
FILE *fp;
 int ro,flag=0;
   fp=fopen("paccount.txt","rb");
   if(fp==NULL)
   {
       printf("\n Cannot open File");
       return;
   }
   printf("Enter account Id which you want to search :");
   scanf("%d", &ro);

   while(fread(&h,sizeof(h),1,fp)>0 && flag==0)
    if(h.id==ro)
        {
            flag=1;
            printf("Record Found\n");
    system("cls");
   printf("\n============================= *********** Trader Details **********==============================\n");
   printf("\n\t\t Customer Id\t\t Customer Name\t\t Place\t Phone No\t Account Balance \t Properiter Name\n");
   printf("-------------------------------------------------------------------------------------------------------\n");
   printf("\t\t%d \t\t\t %s \t\t %s \t\t %s \t\t %d \t\t %s \n", h.id,h.name,h.n,h.p,h.bal,h.nam);

   }
   else
   {
       printf("================ Record Not Found=========================\n");
   }
   fclose(fp);
}

void pac_append()
{
   int k,flag=0;
    FILE *fp;
    fp=fopen("paccount.txt", "rb+");
    if(fp==NULL)
    {
        printf("\n\t\t Error: Can't open a file");
        return;
    }
    printf("Enter Bill No which you want to update :");
    scanf("%d", &k);
    printf("========== Previous Records Follow =========================");
    while(fread(&h,sizeof(h),1,fp)>0 && flag==0)
        if (h.id==k)
    {
    printf("\n============================= *********** Trader Details **********==============================\n");
    printf("\n\t\t Customer Id\t\t Customer Name\t\t Place\t\t Phone No\t Account Balance \t Properiter Name\n");
    printf("-------------------------------------------------------------------------------------------------------\n");
    printf("\t\t%d \t\t\t %s \t\t %s \t\t %s \t\t %d \t\t %s \n", h.id,h.name,h.n,h.p,h.bal,h.nam);
    }
    printf("========================== Update Details ==================================\n");
    printf("===========================************* Account Creation *************=========================================\n");
   printf("Trader ID :%d", h.id);
   printf("Enter Trader PH NO :");
   scanf("%s",h.p );
   fflush(stdin);
   printf("\nEnter Trader Name :");
   gets(h.name);
   printf("Enter Trader Address :");
   gets(h.n);
   fflush(stdin);
   printf("Enter previous balance of Trader");
   scanf("%d", &h.bal );
   printf("Enter Properiter Name :");
   scanf("%s", &h.nam);
   fseek(fp,-(long)sizeof(h),1);
    fwrite(&h,sizeof(h),1,fp);
    printf("\n\t\t =================================== Record Updated Successfully ==========================\n");
fclose(fp);
}
void pac_delrec()
{
     int m;
    unsigned int flag=0;
    FILE *fp,*ft;
    fp=fopen("paccount.txt", "rb");
    if(fp==NULL)
    {
        printf("Cannot open a file");
        return;
    }
    printf("Enter Account Id which you want to delete :");
    scanf("%d", &m);
    ft=fopen("paccount1.txt","ab+");
    while(fread(&h,sizeof(h),1,fp)==1)
    {
        if(m !=h.id)
        {
            printf("\n\t\t Record Deleted Successfully\n");
            fwrite(&h,sizeof(h),1,ft);
        }
        else
            flag=1;
    }
    if (flag==0)
    {
        printf("Record Not Found");
    }
    fclose(fp);
    fclose(ft);
    remove("paccount.txt");
    rename("paccount1.txt","paccount.txt");
    printf("Updated Record");
}
void cmanagement()
{
    int hg;
    do
    {
        printf("---------------****************************--------------------------------");
        printf("\n\t\t\t CUSTOMER ACCOUNT MANAGEMENT");
        printf("\n---------------****************************--------------------------------");
        printf("\n\t\t\t 1. Create an Customer Account");
        printf("\n\t\t\t 2. Display Customer Accounts");
        printf("\n\t\t\t 3. Search customer");
        printf("\n\t\t\t 4. Append Customer details");
        printf("\n\t\t\t 5. Delete customer account");
        printf("\n\t\t\t 6. Exit");
        printf("\n-----------------********************************-----------------------------");
        printf("\nEnter Your Choice :");
        scanf("%d", &hg);
        switch(hg)
        {
            case 1: system("cls");
                     ac_creation();
                     break;
            case 2: system("cls");
                    ac_display();
                    break;
            case 3: system("cls");
                    ac_search();
                    break;
            case 4: system("cls");
                    ac_append();
                    break;
            case 5: system("cls");
                    ac_delrec();
                    break;
        }

    }while(hg!=6);
}

void ac_creation()
{
    char f,y,Y;
    FILE *fp;
   fp=fopen("account.txt","ab+");
   if(fp==NULL)
   {
       printf("\n Cannot open File");
       return;
   }
   printf("===========================************* Account Creation *************=========================================\n");
   k.id=acc_no();
   printf("Customer ID :%d", k.id);
   printf("Enter Customer PH NO :");
   scanf("%s",k.p );
   fflush(stdin);
   printf("\nEnter customer Name :");
   gets(k.name);
   printf("Enter Customer Address :");
   gets(k.n);
   fflush(stdin);
   printf("Enter previous balance of customer");
   scanf("%d", &k.bal );
   fflush(stdin);
   fwrite(&k,sizeof(k),1,fp);
    {
           printf("Record saved");
    }

   fclose(fp);

}
void ac_display()
{
    FILE *fp;
   fp=fopen("account.txt","rb");
   if(fp==NULL)
   {
       printf("\n Cannot open File");
       return;
   }
   printf("\n================= *********** Customer Details **********==============================\n");
   printf("\n\t\t Customer Id\t\t Customer Name\t\t Place\t\t Phone No\t Account Balance\n");
   while(fread(&k,sizeof(k),1,fp)==1)
   {
       printf("\t\t%8d \t\t %s \t\t %s \t %s \t%d\n", k.id,k.name,k.n,k.p,k.bal);
   }
   fclose(fp);

}

void ac_search()
{
 FILE *fp;
 int ro,flag=0;
   fp=fopen("account.txt","rb");
   if(fp==NULL)
   {
       printf("\n Cannot open File");
       return;
   }
   printf("Enter account Id which you want to search :");
   scanf("%d", &ro);

   while(fread(&k,sizeof(k),1,fp)>0 && flag==0)
    if(k.id==ro)
        {
            flag=1;
            printf("Record Found\n");
    system("cls");
   printf("\n================= *********** Customer Details **********==============================\n");
   printf("\n\t\t Customer Id\t\t Customer Name\t\t Place\t\t Phone No\t\t Account Balance\n");

   printf("\t\t%d \t\t\t %s \t\t %s \t\t %d \t\t %d\n", k.id,k.name,k.n,k.p,k.bal);
        }


}

void ac_append()
{

    int n,flag=0;
    FILE *fp;
    fp=fopen("account.txt", "rb+");
    if(fp==NULL)
    {
        printf("\n\t\t Error: Can't open a file");
        return;
    }
    printf("Enter Account id which you want to update :");
    scanf("%d", &n);
    printf("========== Previous Records Follow =========================");
    while(fread(&k,sizeof(k),1,fp)>0 && flag==0)
        if (k.id==n)
    {
    printf("\n================= *********** Customer Details **********==============================\n");
   printf("\n\t\t Customer Id\t\t Customer Name\t\t Place\t\t Phone No\t\t Account Balance\n");
   printf("\t\t%d \t\t\t %s \t\t %s \t\t %s \t\t %d\n", k.id,k.name,k.n,k.p,k.bal);
   }
   printf("========================== Update Details ==================================\n");
   printf("===========================************* Account Creation *************=========================================\n");
   printf("Customer ID :%d", k.id);
   printf("\nEnter Customer PH NO :");
   scanf("%s",k.p );
   fflush(stdin);
   printf("\nEnter customer Name :");
   gets(k.name);
   printf("Enter Customer Address :");
   gets(k.n);
   fflush(stdin);
   printf("Enter previous balance of customer");
   scanf("%d", &k.bal );
   fflush(stdin);
   fseek(fp,-(long)sizeof(k),1);
    fwrite(&k,sizeof(k),1,fp);
    printf("\n\t\t =================================== Record Updated Successfully ==========================\n");
fclose(fp);
}

void ac_delrec()
{
   int m;
    unsigned int flag=0;
    FILE *fp,*ft;
    fp=fopen("account.txt", "rb");
    if(fp==NULL)
    {
        printf("Cannot open a file");
        return;
    }
    printf("Enter Account Id which you want to delete :");
    scanf("%d", &m);
    ft=fopen("account1.txt","ab+");
    while(fread(&k,sizeof(k),1,fp)==1)
    {
        if(m !=k.id)
        {
            printf("\n\t\t Record Deleted Successfully\n");
            fwrite(&k,sizeof(k),1,ft);
        }
        else
            flag=1;
    }
    if (flag==0)
    {
        printf("Record Not Found");
    }
    fclose(fp);
    fclose(ft);
    remove("account.txt");
    rename("account1.txt","account.txt");
    printf("Updated Record");
}

void findaccount()
{
    FILE *fp;
 int ro,flag=0;
   fp=fopen("account.txt","rb");
   if(fp==NULL)
   {
       printf("\n Cannot open File");
       return;
   }
   printf("Enter account Id which you want to search :");
   scanf("%d", &ro);

   while(fread(&k,sizeof(k),1,fp)>0 && flag==0)
    if(k.id==ro)
        {
            flag=1;
            printf("Record Found\n");
    system("cls");
   printf("\n================= *********** Customer Details **********==============================\n");
   printf("\n\t\t Customer Id\t\t Customer Name\t\t Place\t\t Phone No\t\t Account Balance\n");

   printf("\t\t%d \t\t\t %s \t\t %s \t\t %d \t\t %d\n", k.id,k.name,k.n,k.p,k.bal);
         strcpy(c.name, k.name);
         strcpy(c.b2, k.n);
         strcpy(c.w, k.p);
        }

}



void bill_creation()
{
    int v;
    FILE *fp;
    fp=fopen("custom.txt", "ab+");
    if(fp==NULL)
    {
        printf("\n\t\t Error: Can't open a file");
        return;
    }

    c.h=bill_no();
    printf("\n ----------- Welcome to Mall----------");
    ac_display();
    printf("\n\t Do you see customer account\nPress\n1.A/C exist");
    scanf("%d", &v);
    fflush(stdin);
    if (v==1)
    {
        findaccount();
    }
    else
   {
    printf("\nEnter customer name :");
    fflush(stdin);
    gets(c.name);
    fflush(stdin);
    printf("Enter Customer Phone Number :");
    scanf("%s",&c.w);
    fflush(stdin);
    printf("Enter address of the customer :");
    scanf("%s", &c.b2);
    fflush(stdin);
   }
    printf("\nEnter \n1 for cash mode \n 2 for credit \n 3 for online");
    scanf("%d", &c.m);
    fflush(stdin);
    time_t t;
    time(&t);
    printf("\n Date and Time is : %s", ctime(&t));
    fflush(stdin);
    printf("\nEnter the no.of items :");
    scanf("%d",&d);
    display_stock();
    for(i=1;i<=d;i++)
    {   gets(c.n[i]);
        printf("\n Enter the Product name :");
        gets(c.n[i]);
        printf("Enter Item code :");
        scanf("%d", &c.e[i]);
        printf("\n Enter the quantity of the items :");
        scanf("%d", &c.q[i]);
        printf("\n Enter Rate");
        scanf("%f", &c.r[i]);
        printf("Enter percentage of gst :");
        scanf("%d", &c.a5[i]);
        c.p[i]=c.r[i]*c.q[i];
        c.b=c.b+c.p[i];
        c.cg[i]=c.p[i]*c.a5[i]/200;
        c.o=c.o+c.cg[i];
        c.s[i]=c.p[i]*c.a5[i]/200;
        c.g=c.g+c.s[i];
        c.to[i]=c.p[i]+c.s[i]+c.cg[i];
        j=i;
        c.t=c.t+c.p[i]+c.s[i]+c.cg[i];
    }

    system("cls");
    printf("GST NO:38ABDGF4P1Z5");
    printf("\n \t \t \t \t SRI SUPER MARKET");
    printf("\n \t \t \t\tGandhi Nagar 1st Lane");
    printf("\n \t \t \t \t  Guntur-522001");
    printf("\n=========================================================================================================================");
    printf("\n Date and Time is : %s", ctime(&t));
    printf("\nBill No : %d", c.h);
    printf("\nTo :");
    puts(c.name);
    printf("\nPhone No : %s",c.w);
    printf("\nAddress of the customer : %s", c.b2);
    if(c.m==1)
    {
        printf("\nMode of Payment : Cash");
    }
    else if(c.m==2)
    {
        printf("\nMode of Payment : Credit");
    }
    else if(c.m==3)
    {
        printf("\nMode of Payment : Online");
    }

    printf("\n------------------------------------------------------------------------------------------------");
    printf("\n \t S.no \t Item code  \tProduct  Qty  \t Rate  \t Price \t CGST \t SGST \t GST % \t Total ");
    printf("\n------------------------------------------------------------------------------------------------");
    for(i=1;i<=d;i++)
    {
        printf("\n\t %d  \t %d   \t%s  \t%d \t  %.2f  %.2f  %.2f  %.2f  %d  %.2f", i,c.e[i],c.n[i],c.q[i],c.r[i],c.p[i],c.cg[i],c.s[i],c.a5[i],c.to[i]);

    }
    printf("\v\nNet Amount :%.2f", c.b);
    printf("\nTotal CGST :%.2f", c.o);
    printf("\nTotal SGST :%.2f", c.g);
    printf("\v\n Total:- Rs %.2f", c.t);
    printf("\nEnter the given amt :Rs");
    scanf("%d", &c.f);
    fflush(stdin);
    c.z=c.f-c.t;
    printf("\nAmount to be returned back : Rs %d", c.z);
    printf("\n===========================================================================================================================");
    printf("\n *Thankyou Visit Again*");
    fwrite(&c,sizeof(c),1,fp);
    {
        printf("\n\t\t\t\t Record Saved Successfully\n");
    }
    fclose(fp);
}
void display_bill()
{
    FILE *fp;
    int i;
    fp=fopen("custom.txt", "rb");
     if(fp==NULL)
    {
        printf("\n\t\t Error: Can't open a file");
        return;
    }
    printf("\n\t ===================================Summary Of Bills-================================================================================\n");
    printf("----------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n \t\t\t\t S.no \t Item code  \tProduct  Qty  \t Rate  \t Price \t CGST \t SGST \t GST % \t Total\n");
    printf("---------------------------------------------------------------------------------------------------------------------------------------\n");
    while(fread(&c,sizeof(c),1,fp))
    {   printf("customer name :   %s\n", c.name);
        printf("Customer Address :%s\n", c.b2);
        printf("Customer Phone :%s\n",c.w);
        printf("Bill No :%d\n", c.h);
        for(i=1;i<=3;i++)
        {
            printf("\n\t\t\t\t %d  \t %d   \t%s \t%d \t%.2f  %.2f  %.2f  %.2f  %d  %.2f\n", i,c.e[i],c.n[i],c.q[i],c.r[i],c.p[i],c.cg[i],c.s[i],c.a5[i],c.to[i]);
        }
    printf("\nNet Amount :%.2f", c.b);
    printf("\nTotal CGST :%.2f", c.o);
    printf("\nTotal SGST :%.2f", c.g);
    printf("\nTotal:- Rs %.2f\n\v", c.t);
    printf("======================================= End Of One======================================================================================\n\v");

}

    fclose(fp);
}
void search_bill()
{
    int ro,flag=0;
    FILE *fp;
    fp=fopen("custom.txt", "ab+");
    if(fp==NULL)
    {
        printf("\n\t\t Error: Can't open a file");
        return;
    }
    printf("Enter bill no which you want search :");
    scanf("%d", &ro);

    while(fread(&c,sizeof(c),1,fp)>0 && flag==0)
    {
        if(c.h==ro)
        {
            flag=1;
            printf("Record Found\n");
    system("cls");
            printf("GST NO:38ABDGF4P1Z5");
    printf("\n \t \t \t \t SRI SUPER MARKET");
    printf("\n \t \t \t\tGandhi Nagar 1st Lane");
    printf("\n \t \t \t \t  Guntur-522001");
    printf("\n=========================================================================================================================");
    printf("\nDate (dd/mm/yyyy) :%d%d%d", c.l,c.k,c.a);
    printf("\nBill No : %d", c.h);
    printf("\nTo :");
    puts(c.name);
    printf("\nPhone No : %s",c.w);
    printf("\nAddress of the customer : %s", c.b2);
    if(c.m==1)
    {
        printf("\nMode of Payment : Cash");
    }
    else if(c.m==2)
    {
        printf("\nMode of Payment : Credit");
    }
    else if(c.m==3)
    {
        printf("\nMode of Payment : Online");
    }

    printf("\n------------------------------------------------------------------------------------------------");
    printf("\n \t S.no \t Item code  \tProduct  Qty  \t Rate  \t Price \t CGST \t SGST \t GST % \t Total ");
    printf("\n------------------------------------------------------------------------------------------------");
    for(i=1;i<=2;i++)
    {
        printf("\n\t %d  \t %d   \t%s  \t%d   %.2f  %.2f  %.2f  %.2f  %d  %.2f", i,c.e[i],c.n[i],c.q[i],c.r[i],c.p[i],c.cg[i],c.s[i],c.a5[i],c.to[i]);

    }
    printf("\v\nNet Amount :%.2f", c.b);
    printf("\nTotal CGST :%.2f", c.o);
    printf("\nTotal SGST :%.2f", c.g);
    printf("\v\n Total:- Rs %.2f", c.t);
    printf("\nGiven amt :Rs%d", c.f);
    fflush(stdin);
    printf("\nAmount to be returned back : Rs %d", c.z);
    printf("\n===========================================================================================================================");
    printf("\n *Thankyou Visit Again*");

        }
    }


}
void del_record()
{
    int h;
    unsigned int flag=0;
    FILE *fp,*ft;
    fp=fopen("custom.txt", "rb");
    if(fp==NULL)
    {
        printf("Cannot open a file");
        return;
    }
    printf("Enter bill no which you want to delete :");
    scanf("%d", &h);
    ft=fopen("custom1.txt","ab+");
    while(fread(&c,sizeof(c),1,fp)==1)
    {
        if(h !=c.h)
        {
            printf("\n\t\t Record Deleted Successfully\n");
            fwrite(&c,sizeof(c),1,ft);
        }
        else
            flag=1;
    }
    if (flag==0)
    {
        printf("Record Not Found");
    }
    fclose(fp);
    fclose(ft);
    remove("custom.txt");
    rename("custom1.txt","custom.txt");
    printf("Updated Record");



}
void append_bill()
{
    int k,flag=0;
    FILE *fp;
    fp=fopen("custom.txt", "rb+");
    if(fp==NULL)
    {
        printf("\n\t\t Error: Can't open a file");
        return;
    }
    printf("Enter Bill No which you want to update :");
    scanf("%d", &k);
    printf("========== Previous Records Follow =========================");
    while(fread(&c,sizeof(c),1,fp)>0 && flag==0)
    {
        if(c.h==k)
        {
        printf("customer name :   %s\n", c.name);
        printf("Customer Address :%s\n", c.b2);
        printf("Customer Phone :%s\n",c.w);
        printf("Bill No :%d\n", c.h);
        for(i=1;i<=3;i++)
        {
            printf("\n\t\t\t\t %d  \t %d   \t%s \t%d \t%.2f  %.2f  %.2f  %.2f  %d  %.2f\n", i,c.e[i],c.n[i],c.q[i],c.r[i],c.p[i],c.cg[i],c.s[i],c.a5[i],c.to[i]);
        }
    printf("\nNet Amount :%.2f", c.b);
    printf("\nTotal CGST :%.2f", c.o);
    printf("\nTotal SGST :%.2f", c.g);
    printf("\nTotal:- Rs %.2f\n\v", c.t);

    printf("===============******************* UPDATE DETAILS **********************========================");
    printf("\n ----------- Welcome to Mall----------");
    printf("\nEnter Updated customer name :");
    fflush(stdin);
    gets(c.name);
    fflush(stdin);
    printf("\nEnter \n1 for cash mode \n 2 for credit \n 3 for online");
    scanf("%d", &c.m);
    fflush(stdin);
    printf("\nEnter Updated date :");
    scanf("%d%d%d", &c.l,&c.k,&c.a);
    fflush(stdin);
    printf("Enter bill No : %d", c.h);
    printf("\nEnter Updated the no.of items :");
    scanf("%d",&d);
    fflush(stdin);
    printf("Enter Updated Customer Phone Number :");
    scanf("%s",&c.w);
    fflush(stdin);
    printf("Enter Updated address of the customer :");
    scanf("%s", &c.b2);
    fflush(stdin);



    for(i=1;i<=d;i++)
    {   gets(c.n[i]);
        printf("\n Enter the Updated Product name :");
        gets(c.n[i]);
        printf("Enter Updated Item code :");
        scanf("%d", &c.e[i]);
        printf("\n Enter the Updated quantity of the items :");
        scanf("%d", &c.q[i]);
        printf("\n Enter Updated Rate");
        scanf("%f", &c.r[i]);
        printf("Enter Updated percentage of gst :");
        scanf("%d", &c.a5[i]);
        c.p[i]=c.r[i]*c.q[i];
        c.b=c.b+c.p[i];
        c.cg[i]=c.p[i]*c.a5[i]/200;
        c.o=c.o+c.cg[i];
        c.s[i]=c.p[i]*c.a5[i]/200;
        c.g=c.g+c.s[i];
        c.to[i]=c.p[i]+c.s[i]+c.cg[i];
        j=i;
        c.t=c.t+c.p[i]+c.s[i]+c.cg[i];
    }
    system("cls");
    printf("GST NO:38ABDGF4P1Z5");
    printf("\n \t \t \t \t SRI SUPER MARKET");
    printf("\n \t \t \t\tGandhi Nagar 1st Lane");
    printf("\n \t \t \t \t  Guntur-522001");
    printf("\n=========================================================================================================================");
    printf("\nDate (dd/mm/yyyy) :%d%d%d", c.l,c.k,c.a);
    printf("\nBill No : %d", c.h);
    printf("\nTo :");
    puts(c.name);
    printf("\nPhone No : %s",c.w);
    printf("\nAddress of the customer : %s", c.b2);
    if(c.m==1)
    {
        printf("\nMode of Payment : Cash");
    }
    else if(c.m==2)
    {
        printf("\nMode of Payment : Credit");
    }
    else if(c.m==3)
    {
        printf("\nMode of Payment : Online");
    }

    printf("\n------------------------------------------------------------------------------------------------");
    printf("\n \t S.no \t Item code  \tProduct  Qty  \t Rate  \t Price \t CGST \t SGST \t GST % \t Total ");
    printf("\n------------------------------------------------------------------------------------------------");
    for(i=1;i<=d;i++)
    {
        printf("\n\t %d  \t %d   \t%s  \t%d \t  %.2f  %.2f  %.2f  %.2f  %d  %.2f", i,c.e[i],c.n[i],c.q[i],c.r[i],c.p[i],c.cg[i],c.s[i],c.a5[i],c.to[i]);

    }
    printf("\v\nNet Amount :%.2f", c.b);
    printf("\nTotal CGST :%.2f", c.o);
    printf("\nTotal SGST :%.2f", c.g);
    printf("\v\n Total:- Rs %.2f", c.t);
    printf("\nEnter the given amt :Rs");
    scanf("%d", &c.f);
    fflush(stdin);
    c.z=c.f-c.t;
    printf("\nAmount to be returned back : Rs %d", c.z);
    printf("\n===========================================================================================================================");
    printf("\n *Thankyou Visit Again*");
    fseek(fp,-(long)sizeof(c),1);
    fwrite(&c,sizeof(c),1,fp);
    printf("\n\t\t =================================== Record Updated Successfully ==========================\n");

}

     }


}
void pbill_creation()
{
    FILE *fpb;
    fpb=fopen("buyers.txt", "ab+");
    if(fpb==NULL)
    {
        printf("\n\t\t Error: Can't open a file");
        return;
    }
    printf("\n ----------- Welcome Purchase Creation ----------");
    printf("\nEnter Trader name :");
    fflush(stdin);
    gets(l.name);
    fflush(stdin);
    printf("\nEnter date :");
    scanf("%d%d%d", &l.l,&l.k,&l.a);
    fflush(stdin);
    printf("Enter Purchase bill No:");
    scanf("%d", &l.h);
    fflush(stdin);
    printf("Enter the no.of Purchased items :");
    scanf("%d",&l.d);
    fflush(stdin);
    printf("Enter Trader Phone Number :");
    scanf("%s",&l.w);
    fflush(stdin);
    printf("Enter address of the Trader :");
    scanf("%s", &l.b2);
    for(i=1;i<=l.d;i++)
    {   gets(l.n[i]);
        printf("\n Enter the Product name :");
        gets(l.n[i]);
        printf("Enter Item code :");
        scanf("%d", &l.e[i]);
        printf("\n Enter the quantity of the items :");
        scanf("%d", &l.q[i]);
        printf("\n Enter Rate");
        scanf("%f", &l.r[i]);
        printf("Enter percentage of gst :");
        scanf("%d", &l.a5[i]);
        l.p[i]=l.r[i]*l.q[i];
        l.b=l.b+l.p[i];
        l.cg[i]=l.p[i]*l.a5[i]/200;
        l.o=l.o+l.cg[i];
        l.s[i]=l.p[i]*l.a5[i]/200;
        l.g=l.g+l.s[i];
        l.to[i]=l.p[i]+l.s[i]+l.cg[i];
        j=i;
        l.t=l.t+l.p[i]+l.s[i]+l.cg[i];
    }
    printf("\n------------------------------------------------------------------------------------------------");
    printf("\n \t S.no \t Item code  \tProduct  Qty  \t Rate  \t Price \t CGST \t SGST \t GST % \t Total ");
    printf("\n------------------------------------------------------------------------------------------------");
    for(i=1;i<=l.d;i++)
    {
        printf("\n\t %d  \t %d   \t%s  \t%d \t  %.2f  %.2f  %.2f  %.2f  %d  %.2f", i,l.e[i],l.n[i],l.q[i],l.r[i],l.p[i],l.cg[i],l.s[i],l.a5[i],l.to[i]);

    }
    printf("\v\nNet Amount :%.2f", l.b);
    printf("\nTotal CGST :%.2f", l.o);
    printf("\nTotal SGST :%.2f", l.g);
    printf("\v\n Total:- Rs %.2f", l.t);
    fwrite(&l,sizeof(l),1,fpb);
    {
        printf("\n\t\t\t\t Record Saved Successfully\n");
    }
    fclose(fpb);
}
void pdisplay_bill()
{
    FILE *fpb;
    int i;
    fpb=fopen("buyers.txt", "rb");
     if(fpb==NULL)
    {
        printf("\n\t\t Error: Can't open a file");
        return;
    }
    printf("\n\t ===================================Summary Of Bills-================================================================================\n");
    printf("----------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n \t\t\t\t S.no \t Item code  \tProduct  Qty  \t Rate  \t Price \t CGST \t SGST \t GST % \t Total\n");
    printf("---------------------------------------------------------------------------------------------------------------------------------------\n");
    while(fread(&l,sizeof(l),1,fpb))
    {   printf("Trader name :   %s\n", l.name);
        printf("Trader Address :%s\n", l.b2);
        printf("Trader Phone :%s\n",l.w);
        printf("Enter Purchase Bill No :%d\n", l.h);
        for(i=1;i<=l.d;i++)
        {
            printf("\n\t\t\t\t %d  \t %d   \t%s \t%d \t%.2f  %.2f  %.2f  %.2f  %d  %.2f\n", i,l.e[i],l.n[i],l.q[i],l.r[i],l.p[i],l.cg[i],l.s[i],l.a5[i],l.to[i]);
        }
    printf("\nNet Amount :%.2f", l.b);
    printf("\nTotal CGST :%.2f", l.o);
    printf("\nTotal SGST :%.2f", l.g);
    printf("\nTotal:- Rs %.2f\n\v", l.t);
    printf("======================================= End of one ===================================================================================\n\v");
  }
  fclose(fpb);
}
void psearch_bill()
{
    int y,flag=0;
    FILE *fpb;
    fpb=fopen("buyers.txt", "rb");
    if(fpb==NULL)
    {
        printf("\n\t\t Error: Can't open a file");
        return;
    }
    printf("Enter the Purchase Bill no :");
    scanf("%d", &y);

    while(fread(&l,sizeof(l),1,fpb)>0 && flag==0)
    {
        if(l.h==y)
        {
            flag=1;
            printf("Record Found\n");
    system("cls");
    printf("============================= Purchase Records =======================================");
    printf("Trader name :   %s\n", l.name);
        printf("Trader Address :%s\n", l.b2);
        printf("Trader Phone :%s\n",l.w);
        printf("Enter Purchase Bill No :%d\n", l.h);
    printf("\n------------------------------------------------------------------------------------------------");
    printf("\n \t S.no \t Item code  \tProduct  Qty  \t Rate  \t Price \t CGST \t SGST \t GST % \t Total ");
    printf("\n------------------------------------------------------------------------------------------------");
    for(i=1;i<=l.d;i++)
    {
        printf("\n\t %d  \t %d   \t%s  \t%d \t  %.2f  %.2f  %.2f  %.2f  %d  %.2f", i,l.e[i],l.n[i],l.q[i],l.r[i],l.p[i],l.cg[i],l.s[i],l.a5[i],l.to[i]);

    }
    printf("\v\nNet Amount :%.2f", l.b);
    printf("\nTotal CGST :%.2f", l.o);
    printf("\nTotal SGST :%.2f", l.g);
    printf("\n Total:- Rs %.2f\n", l.t);

    }


}


}
void pappend_bill()
{
  int k,flag=0;
    FILE *fpb;
    fpb=fopen("buyers.txt", "rb+");
    if(fpb==NULL)
    {
        printf("\n\t\t Error: Can't open a file");
        return;
    }
    printf("Enter Bill No which you want to update :");
    scanf("%d", &k);
    printf("========== Previous Records Follow =========================");
    while(fread(&l,sizeof(l),1,fpb)>0 && flag==0)
        if (l.h==k)
    {
        printf("Trader name :   %s\n", l.name);
        printf("Trader Address :%s\n", l.b2);
        printf("Trader Phone :%s\n",l.w);
        printf("Enter Purchase Bill No :%d\n", l.h);
        for(i=1;i<=l.d;i++)
        {
            printf("\n\t\t\t\t %d  \t %d   \t%s \t%d \t%.2f  %.2f  %.2f  %.2f  %d  %.2f\n", i,l.e[i],l.n[i],l.q[i],l.r[i],l.p[i],l.cg[i],l.s[i],l.a5[i],l.to[i]);
        }
    printf("\nNet Amount :%.2f", l.b);
    printf("\nTotal CGST :%.2f", l.o);
    printf("\nTotal SGST :%.2f", l.g);
    printf("\nTotal:- Rs %.2f\n\v", l.t);
    printf("================ Update Details ================================");
    printf("\nEnter Trader name :");
    fflush(stdin);
    gets(l.name);
    fflush(stdin);
    printf("\nEnter date :");
    scanf("%d%d%d", &l.l,&l.k,&l.a);
    fflush(stdin);
    printf("Enter Purchase bill No:");
    scanf("%d", &l.h);
    fflush(stdin);
    printf("Enter the no.of Purchased items :");
    scanf("%d",&l.d);
    fflush(stdin);
    printf("Enter Trader Phone Number :");
    scanf("%s",&l.w);
    fflush(stdin);
    printf("Enter address of the Trader :");
    scanf("%s", &l.b2);
    fflush(stdin);
    for(i=1;i<=l.d;i++)
    {   gets(l.n[i]);
        printf("\n Enter the Product name :");
        gets(l.n[i]);
        printf("Enter Item code :");
        scanf("%d", &l.e[i]);
        printf("\n Enter the quantity of the items :");
        scanf("%d", &l.q[i]);
        printf("\n Enter Rate");
        scanf("%f", &l.r[i]);
        printf("Enter percentage of gst :");
        scanf("%d", &l.a5[i]);
        l.p[i]=l.r[i]*l.q[i];
        l.b=l.b+l.p[i];
        l.cg[i]=l.p[i]*l.a5[i]/200;
        l.o=l.o+l.cg[i];
        l.s[i]=l.p[i]*l.a5[i]/200;
        l.g=l.g+l.s[i];
        l.to[i]=l.p[i]+l.s[i]+l.cg[i];
        j=i;
        l.t=l.t+l.p[i]+l.s[i]+l.cg[i];
    }
    printf("\n------------------------------------------------------------------------------------------------");
    printf("\n \t S.no \t Item code  \tProduct  Qty  \t Rate  \t Price \t CGST \t SGST \t GST % \t Total ");
    printf("\n------------------------------------------------------------------------------------------------");
    for(i=1;i<=l.d;i++)
    {
        printf("\n\t %d  \t %d   \t%s  \t%d \t  %.2f  %.2f  %.2f  %.2f  %d  %.2f", i,l.e[i],l.n[i],l.q[i],l.r[i],l.p[i],l.cg[i],l.s[i],l.a5[i],l.to[i]);

    }
    printf("\v\nNet Amount :%.2f", l.b);
    printf("\nTotal CGST :%.2f", l.o);
    printf("\nTotal SGST :%.2f", l.g);
    printf("\v\n Total:- Rs %.2f", l.t);
    }
    fseek(fpb,-(long)sizeof(l),1);
    fwrite(&l,sizeof(l),1,fpb);
    printf("\n\t\t =================================== Record Updated Successfully ==========================\n");


}
void pdel_record()
{
     int h;
    unsigned int flag=0;
    FILE *fpb,*ftn;
    fpb=fopen("buyers.txt", "rb");
    if(fpb==NULL)
    {
        printf("Cannot open a file");
        return;
    }
    printf("Enter bill no which you want to delete :");
    scanf("%d", &h);
    ftn=fopen("buyers1.txt","ab+");
    while(fread(&l,sizeof(l),1,fpb)==1)
    {
        if(h !=l.h)
        {
            printf("\n\t\t Record Deleted Successfully\n");
            fwrite(&l,sizeof(l),1,ftn);
        }
        else
            flag=1;
    }
    if (flag==0)
    {
        printf("Record Not Found");
    }
    fclose(fpb);
    fclose(ftn);
    remove("buyers.txt");
    rename("buyers1.txt","buyers.txt");
    printf("Updated Record");
}
void main()
{
    char username[15];
    char password[12];
    int jk;
    printf("-----------***************************----------------");
    printf("\n\t\t USER LOGIN PAGE");
    printf("\n------------**************************----------------");
    printf("\nEnter your username:\n");
    scanf("%s",&username);
    printf("Enter your password:\n");
    scanf("%s",&password);

    if(strcmp(username,"user")==0){
        if(strcmp(password,"123")==0){
        printf("\nWelcome.Login Success!");
    system("cls");
    do
    {

    printf("\n-----------------************MAIN MENU **********-----------------------------");
    printf("\n\t\t\t 1.Sales Management");
    printf("\n\t\t\t 2. Purchase Management");
    printf("\n\t\t\t 3. Stock Management");
    printf("\n\t\t\t 4. Account Management");
    printf("\n\t\t\t 5. Exit");
    printf("\n-----------------********************************-----------------------------");
    printf("\nEnter Your Choice :");
    scanf("\n%d", &jk);
    system("cls");
    switch(jk)
    {
        case 1: system("cls");
                sales_managemnt();
                break;
        case 2: system("cls");
                purchase_management();
                break;
        case 3: system("cls");
                stock_management();
                break;
        case 4: system("cls");
                account_management();
                break;
}
}while(jk!=5);
}
}
return 0;
}

