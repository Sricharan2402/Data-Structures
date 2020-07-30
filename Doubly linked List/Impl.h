


long int PIN(long int A[80],int *c)
{
	long int t,flag;
	do{
	flag=0;
	t=10000 + rand()%90000;
	for(int i=0;i<*c;i++)
		if(A[i]==t)
		{
			flag=1;
			break;
		}
	}while(flag);	
	
	(*c)++;
	A[*c]=t;
	return t;	
}

PerADT *initialize()
{
	PerADT *P=(PerADT *)malloc(sizeof(PerADT));
	P->lptr=NULL;
	P->rptr=NULL;
	return P;
}


void insertFront(PerADT *List, Person P)
{
	PerADT *temp=malloc(sizeof(PerADT));
	temp->P=P;
	if(List->rptr==NULL)
	{
		List->rptr=temp;
		temp->rptr=NULL;
		temp->lptr=List;
	}
	else
	{
		(List->rptr)->lptr=temp;
		temp->rptr=List->rptr;
		List->rptr=temp;		
		temp->lptr=List;
	}		
	
}


void insertBack(PerADT *L, Person P)
{
	PerADT *temp=malloc(sizeof(PerADT));
	temp->P=P;
			
	while(L->rptr)
	{
		L=L->rptr;		
	}
	L->rptr=temp;
	temp->rptr=NULL;
	temp->lptr=L;
	
}

void insertPIN(PerADT *L, Person P, long int PIN)
{
	PerADT *temp=malloc(sizeof(PerADT));
	temp->P=P;
	
	while(L->rptr)
	{
		L=L->rptr;
		if(L->P.PIN==PIN)
		{
			temp->rptr=L->rptr;
			(L->rptr)->lptr=temp;
			L->rptr=temp;
			temp->lptr=L;
			break;
		}
	}
}
void dispList(PerADT *L)
{
	
	printf("\n\nDetails of the employees: ");
	while(L->rptr)
	{
		L=L->rptr;
		printf("\n\nName: %s\nGender: %s\nAge: %d\nAddress: %s\nPIN: %ld\nPhno: %s",L->P.Name,L->P.Sex,L->P.Age,L->P.Add,L->P.PIN,L->P.Phno);
	}

	printf("\n\n\nReverse Order: ");
	while(L->lptr)
	{
		printf("\n\nName: %s\nGender: %s\nAge: %d\nAddress: %s\nPIN: %ld\nPhno: %s",L->P.Name,L->P.Sex,L->P.Age,L->P.Add,L->P.PIN,L->P.Phno);
		L=L->lptr;
		
	}
	
			
	
}

genRatio Ratio(PerADT *L)
{
	genRatio G;
	G.MC=0;
	G.FC=0;
	while(L->rptr)
	{
		L=L->rptr;
		if(strcmp(L->P.Sex,"Male")==0)
			G.MC+=1;
		else
			G.FC+=1;
		
	}
	return G;
}

PerADT *senList(PerADT *L)
{
	PerADT *temp=initialize();
	
	while(L->rptr)
	{
		L=L->rptr;
		if(L->P.Age>60)
			insertBack(temp,L->P);
	}
	if(temp->rptr==NULL)
		return NULL;
	else
		return temp;
}

PerADT *locatePer(PerADT *L, char loc[80])
{
	PerADT *temp=initialize();
	while(L->rptr)
	{
		L=L->rptr;
		if(strcmp(L->P.City,loc)==0)
			insertBack(temp,L->P);
	}
	if(temp->rptr==NULL)
		return NULL;
	else
		return temp;
}



PerADT *sortList(PerADT *L)
{
	PerADT *temp=L,*t,*pos;
	Person P;
	char name[80];
	while(temp->rptr)
	{	
		temp=temp->rptr;
		P=temp->P;
		pos=temp;		
		t=temp;
		while(t->rptr)
		{
			t=t->rptr;
			if(P.Age<t->P.Age)
			{
				P=t->P;
				pos=t;
			}
		}
		
		pos->P=temp->P;
		temp->P=P;
	
	}	
	dispList(L);
	
}




