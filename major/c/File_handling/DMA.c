/*
memory Allocation:
**To allocate memory in Heap
i>malloc(),ii>calloc()

Memory Re-allocation:
**To change the amount of the memory allocated
realloc()

Memory Deallocation:
**To deallocation the trapped memory
free()
*/
/*Malloc
//To allocate a memory for 100 integer:
int *ptr=(int*)malloc(100*sizeof(int));

//To allocate a memory for 1000 characters:
char *ptr=(char*)malloc(1000*sizeof(char));

//calloc

/*To allocate a memory for 100 floating number:
float *ptr=(float*)calloc(25,sizeof(float));
*/


/*To allocate a memory for 1000 characters:
char *ptr=(char*)calloc(25,sizeof(char));
*/


/*Memory Deallocation
free(pointer-to-heap-address)
pointer-to-heap-address is the pointer
to heap memory allocated dynamically using
malloc()and calloc()functions
//int *ptr=(int*)malloc(8*sizeof(int));
//ferr(ptr);

//memory deallocated but ptr refers to a memory which now 
does not belong to us,hence ptr(dangling pointer)
should be said to NULL
ptr=NULL; */


/*Memory Re-allocation
realloc(pointer,new-size
//int *ptr=(int*)malloc(5*sizeof(int));//20 bytes allocated
//ptr = realloc(ptr,10*sizeof(int));//total 40 bytes allocated

*/
