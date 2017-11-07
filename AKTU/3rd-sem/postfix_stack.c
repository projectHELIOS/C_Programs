#include <stdio.h>
#include <stdlib.h>

struct stack
{
	char data;
	struct stack *link;
}*top=NULL;

void push(char element)
{
	struct stack *temp;
	temp = (struct stack *)malloc(sizeof(struct stack));
	temp->data = element;
	temp->link = NULL;
	if (top == NULL)
	{
		top = temp;
	}
	else{
		temp->link = top;
		top = temp;
	}
}
char pop()
{
	if(top == NULL)
	{
		return '\0';
	}
	else
	{
		struct stack *temp = top;
		top = temp->link;
		temp->link = NULL;
		char data = temp->data; 
		free(temp);
		return  data;
	}
}
char getFirstEle()
{
	if(top == NULL)
	{
		return '\0';
	}
	else
	{
		struct stack *temp = top;
		char data = temp->data; 
		return  data;
	}
}
int getPri(char ch)
{
	if (ch == '(')
	{
		return 2;
	}
	else if(ch == ')')
	{
		return 3;
	}
	else if(ch == '^')
	{
		return 6;
	}
	else if(ch == '*' || ch == '/')
	{
		return 5;
	}
	else if (ch == '+' || ch == '-')
	{
		return 4;
	}
	else if(ch == '\0')
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int getPostFix(char exp[])
{
	char exp_post[100];
	int i = 0,j =0;
	for(i = 0;exp[i] != '\0';i++)
	{
		char exp_c = exp[i];
		char exp_p = '\0';
		int pre_c = getPri(exp_c);
	    int pre_p = 0;
	    char pop_d;
		if (i>0)
		{
			exp_p = getFirstEle();
			pre_p = getPri(exp_p);
		}
	    char ch1;
	    switch(pre_c)
	    {
	    	case 1:
	    	        exp_post[j] = exp[i];
	    	        j++;
	    	        exp_post[j] = '\0';
	    	        break;
	    	case 2:
	    	        push(exp[i]);
	    	        break;
	    	case 3:
	    	        ch1 = pop();
	    	        while(ch1 != '(')
	    	        {
	    	        	exp_post[j] = ch1;
	    	            j++;
	    	            exp_post[j] = '\0';
	    	            ch1 = pop();
	    	        }
	    	        break;
	    	case 6:
	    	        if (pre_c == pre_p)
	    	        {
	    	        	exp_post[j] = exp[i];
		    	        j++;
		    	        exp_post[j] = '\0';
	    	        }
	    	        else
	    	        {
	    	        	push(exp[i]);
	    	        }
	    	        break;
	    	case 5:
	    	        if (pre_p > pre_c || pre_p == pre_c)
	    	        {
	    	        	char ch = pop();
	    	        	push(exp[i]);
	    	        	exp_post[j] = exp[i];
		    	        j++;
		    	        exp_post[j] = '\0';
	    	        }
	    	        else
	    	        {
	    	        	push(exp[i]);
	    	        }
	    	        break;
	    	case 4:
	    	        if (pre_p > pre_c || pre_p == pre_c)
	    	        {
	    	        	char ch = pop();
	    	        	push(exp[i]);
	    	        	exp_post[j] = ch;
		    	        j++;
		    	        exp_post[j] = '\0';
	    	        }
	    	        else
	    	        {
	    	        	push(exp[i]);

	    	        }
	    	        break;
	    }
	}
	char pop_d = pop();
	while(pop_d != '\0')
	{
		exp_post[j] = pop_d;
		j++;
		exp_post[j] = '\0';
		pop_d = pop();
	}
	printf("Postifx Notaion is %s",exp_post);
}
int main()
{
	char exp[100];
	system("clear");
	printf("\n\nEnter the expression  :");
	scanf("%s",exp);
	getPostFix(exp);
	printf("\n\n\n");
	return  0;
}
