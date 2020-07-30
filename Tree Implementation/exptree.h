
typedef struct node
{
	char val;
	struct node *lptr, *rptr;
}node;

typedef struct Tstack
{
	node *s[20];
	int top; 
}Tstack;


Tstack *Tinitialize()
{
	Tstack *S=(Tstack *)malloc(sizeof(Tstack));
	S->top=-1;
}


node *create(char x)
{
	node *n=malloc(sizeof(node));
	n->val=x;
	n->lptr=NULL;
	n->rptr=NULL;
	return n;
}
void pushS(Tstack *S,node *n)
{
	if(S->top==50)
		printf("Tstack full");
	else
	{
		S->top++;
		S->s[S->top]=n;
	}
}


node *popS(Tstack *S)
{
	if(S->top==-1)
		printf("Tstack empty");
	else
	{
		S->top--;
		return S->s[S->top+1];
	}
}



node *treeExp(char post[])
{
	Tstack *S=Tinitialize();
	
	for(int i=0;i<strlen(post);i++)
	{
		node *n=create(post[i]);

		if(isdigit(post[i]))
		{
			pushS(S,n);
		}
		else
		{
			n->rptr=popS(S);
			n->lptr=popS(S);
			pushS(S,n);
		}
	}
		
	return S->s[0];
}


int evalPost(node *N)
{
	if(N->lptr==NULL && N->rptr==NULL)
		return (N->val-48);
	else
	{
		char o=N->val;
		int a=evalPost(N->lptr);
		int b=evalPost(N->rptr);
		
		switch(o)
		{
			case '+':return a+b;
			case '-':return a-b;
			case '*':return a*b;
			case '/':return a/b;
		}
	}
}
