#include<stdio.h>
#include<malloc.h>
void main()
{
	int a;

	struct node
	{
		int data;
		struct node *link;
	}*header,*nw,*ptr,*ptr1 ;
	header=NULL;
	ptr=header;
	while(1)
	{
		printf("\n *******MENU*******");
	    printf("\n 1.insertion");
	    printf("\n 2.deletion");
	    printf("\n 3.display");
	    printf("\n 4.exit");
	    printf("\n enter your choice: ");
	    scanf("%d",&a);
		if(a==1)
		{ 
		    int opt,pos,item;
			printf("\n enter the item to be inserted: ");
			scanf("%d",&item);
			nw=malloc(sizeof(struct node));
			nw->data=item;
			if(header==NULL)
			{
				nw->link=NULL;
				header=nw;
			}
			else
			{
				printf("\n choose where to insert ");
			    printf("\n 1.start\n 2.middle\n 3.end\n ");
		    	scanf("%d",&opt);
		    	if(opt==1)
		    	{
				  nw ->link=header->link;
				  header->link=nw ;
		    	}
		    	if(opt==2)
		    	{
			    	int i;
				    printf("\n enter position: ");
			        scanf("%d",&pos);
			        for(i=1;i<pos-1;i++)
			        {
				       ptr=ptr->link;
			        }
		    	    nw->link=ptr->link;
		    	    ptr->link=nw;	
			    }
		    	if(opt==3)
			    { 
			       ptr=header;
				   while(ptr->link!=NULL)
				   {
				 	 ptr=ptr->link;
				   }
				   ptr->link=nw;
				   nw->link=NULL;	
			    }
			}
			
			
		}
		if(a==2)
		{
			int opt,pos;
			if(header==NULL)
			{
				printf("\n list is empty");
			}
			else
			{
				printf("\n enter where to delete");
	            printf("\n 1.start\n 2.middle\n 3.end\n ");
	        	scanf("%d",&opt);
			    if(opt==1) 
				{
					ptr=header;
					header=header->link;
					free(ptr);
				}
				if(opt==2)
			    {
				    int i;
				    printf("\n enter position: ");
			        scanf("%d",&pos);
			        ptr=header;
			        for(i=1;i<pos-1;i++)
			        {
				        ptr=ptr->link;
			        }
			        ptr1=ptr->link;
			        ptr->link=ptr1->link;
			        free(ptr1);
		    		
			   } 
			   if(opt==3)
			   {
			   	    ptr=header;
			   	    while(ptr->link!=NULL)
			   	    {
			   	        ptr1=ptr;
						ptr=ptr->link;  	
					}
					ptr1->link=NULL;
					free(ptr);
			   }  
			}
		}
		if(a==3)
		{
			ptr=header;
			while(ptr!=NULL)
			{
			    printf(" %d  ",ptr->data);
				ptr=ptr->link;
			}
		}
		if(a==4)
		{
			break;
		}
	}
	
}
