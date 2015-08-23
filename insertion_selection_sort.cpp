void insertionSort(unsigned char numbers[], int array_size)
{
 int i,p; 
unsigned char tmp;
//numbers[0]=-1;
for(int k=1;k<array_size;k++)
{
tmp=numbers[k];
p=k-1;
while(p>=0 && tmp<numbers[p])
{
numbers[p+1]=numbers[p];
p=p-1;

}
numbers[p+1]=tmp;

}

}





unsigned char  min(unsigned char numbers[],int k,int array_size,int loc)
{
unsigned char min;
min=numbers[k];loc=k;
int j;
for(j=k+1;j<array_size;j++)
{
if(min>numbers[j])
{
min=numbers[j];
loc=j;
}
}

return loc;

}




void selectionSort(unsigned char numbers[], int array_size)
{

  
unsigned char t;
int k,loc=0;
for(k=0;k<array_size-1;k++)
{
loc=min(numbers,k,array_size,0);
t=numbers[k];
numbers[k]=numbers[loc];
numbers[loc]=t;
}

}











	
	
	
	
	
	
	
	
	
	
	












