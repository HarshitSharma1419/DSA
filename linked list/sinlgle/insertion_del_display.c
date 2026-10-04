#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void beginsert()
{
    struct node *ptr;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter value\n");
        scanf("%d", &item);
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\nNode inserted");
    }
}
void lastinsert()
{
    struct node *ptr, *temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter value?\n");
        scanf("%d", &item);
        ptr->data = item;
        if (head == NULL)
        {
            ptr->next = NULL;
            head = ptr;
            printf("\nNode inserted");
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("\nNode inserted");
        }
    }
}
void randominsert()
{
    int i, loc, item;
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter element value");
        scanf("%d", &item);
        ptr->data = item;
        if (head == NULL)
        {
            printf("The structure was empty and so added at the first\n");
            ptr->next = head;
            head = ptr;
            printf("\nNode inserted");
        }
        printf("\nEnter the location after which you want to insert ");
        scanf("\n%d", &loc);
        temp = head;
        for (i = 0; i < loc; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                printf("\ncan't insert\n");
                return;
            }
        }
        ptr->next = temp->next;
        temp->next = ptr;
        printf("\nNode inserted");
    }
}
void deletebegin()
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("EMPTY\n");
    }
    else
    {
        ptr = head;
        head->next = head;
        free(ptr);
    }
}
void deleteany()
{
    struct node *ptr, *temp;
    int pos;
    temp = head;
    ptr=head->next;
    if (head == NULL)
    {
        printf("EMPTY\n");
    }
    else
    {
        scanf("%d", &pos);
        for (int i = 0; i < pos - 1; i++)
        {
            temp= temp->next;
            ptr= ptr->next;
            if (ptr == NULL)
            {
                printf("\nCan't delete");
                return;
            }
        }
        temp->next = ptr->next;
        free(ptr);
    }
}
void deletelast()
{

    struct node *ptr, *temp;

    if (head == NULL)
    {
        printf("EMPTY");
    }
    else if (head->next == NULL)
    {
        ptr=head;
        head = NULL;

        free(ptr);
    }
    else
    {

        temp = head;
        ptr = head->next;

        while (ptr->next!= NULL)
        {
            temp = temp->next;
            ptr = ptr->next;
        }
        temp->next = NULL;
        free(ptr);
    }
}
void search()  
{  
    struct node *ptr;  
    int item,i=0,flag=0;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("\nEmpty List\n");  
    }  
    else  
    {   
        printf("\nEnter item which you want to search?\n");   
        scanf("%d",&item);  
        while (ptr!=NULL)  
        {  
            if(ptr->data == item)  
            {  
                printf("item found at location %d ",i+1);  
                flag=1;
		break;  
            }   
           
            i++;  
            ptr = ptr -> next;  
        }  
        if(flag==0)  
        {  
            printf("Item not found\n");  
        }  
    }     
          
}
void display()  
{  
    struct node *ptr;  
    ptr = head;
    int count=0;   
    if(ptr == NULL)  
    {  
        printf("Nothing to print");  
    }  
    else  
    {  
        printf("\nprinting values . . . . .\n");   
        while (ptr!=NULL)  
        {  
            printf("\n%d",ptr->data);  
            ptr = ptr -> next;
            count++;  
        }  
    }  
}
void main ()  
{  
    int choice =0;  
    while(choice != 9)   
    {  
        printf("\n\n*********Main Menu*********\n");  
        printf("\nChoose one option from the following list ...\n");  
        printf("\n===============================================\n");  
        printf("\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n5.Delete from last\n6.Delete node after specified location\n7.Search for an element\n8.Show\n9.Exit\n");  
        printf("\nEnter your choice?\n");         
        scanf("\n%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            beginsert();      
            break;  
            case 2:  
            lastinsert();         
            break;  
            case 3:  
            randominsert();       
            break;  
            case 4:  
            deletebegin();       
            break;  
            case 5:  
            deletelast();        
            break;  
            case 6:  
            deleteany();          
            break;  
            case 7:  
            search();         
            break;  
            case 8:  
            display();        
            break;  
            case 9:  
            exit(0);  
            break;  
            default:  
            printf("Please enter valid choice..");  
        }  
    }  
}