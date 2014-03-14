#include <sys/mman.h>
#include <stdio.h>
#define VMEM_REGION_SIZE 0x200000
#define PAGESHIFT 12
#define PAGE_TABLE_LEN (VMEM_REGION_SIZE >> PAGESHIFT)
#define	PAGE_TABLE_SIZE		(PAGE_TABLE_LEN * sizeof(struct pte))
#define PROT_ALL (PROT_READ|PROT_WRITE|PROT_EXEC)
//add another commetn
// add a comment
struct pte {
    unsigned int pfn	: 20;	/* page frame number */
    unsigned int unused	: 5;	/* (unused by the hardware) */
    unsigned int uprot	: 3;	/* user mode protection bits */
    unsigned int kprot	: 3;	/* kernel mode protection bits */
    unsigned int valid	: 1;	/* page table entry is valid */
};

void main()
{
/*	int x = 0x1000;
	int xx = x-1;
	int y = 0x1905;
	printf("%x\n",x);
	printf("%x\n",xx);
	printf("%x\n",(y & xx));
*/
	//int x=0xff;
	//printf("%d\n",x);
	//*b = 55;
 	/*printf("%d\n",*(int *)0x0012ff2c);
	printf("%x\n",a);
	printf("%x\n",&a);

	
	printf("%x\n",b);*/
	struct pte reg[20];
	printf("%d\n", reg);
	printf("%d\n", reg[0].valid);
	printf("%d\n", sizeof(struct pte));	
	printf("%d\n", PAGE_TABLE_LEN);
	printf("%d\n", PAGE_TABLE_SIZE);	
	printf("%d\n", (PROT_READ|0|PROT_EXEC));
}
