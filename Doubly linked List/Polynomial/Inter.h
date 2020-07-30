

typedef struct Person
{
	char Name[80],Add[80],City[80],Phno[80],Sex[80];
	int Age;
	long int PIN;

}Person;

typedef struct PerADT
{
	Person P;
	struct PerADT *lptr, *rptr;
}PerADT;

typedef struct genRatio
{
	int MC,FC;
}genRatio;

long int PIN(long int A[80],int *c);
PerADT *initialize();
void insertFront(PerADT *List, Person P);
void insertBack(PerADT *List, Person P);
void insertPIN(PerADT *L, Person P, long int PIN);
void dispList(PerADT *L);
PerADT *sortList(PerADT *L);
PerADT *locatePer(PerADT *L, char loc[80]);
PerADT *senList(PerADT *L);
genRatio Ratio(PerADT *L);