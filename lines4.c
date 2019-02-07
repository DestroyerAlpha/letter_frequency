#include<stdio.h>

int main()
{
	FILE *fpr;
	char ch,test;
	int count = 0;
	char file_name[20];
	int freq[52];
	int counter = 0;
	scanf("%s",file_name);
	for(int i = 65; i<91;i++)
	{
		test = i;
		fpr = fopen(file_name,"r");
		ch = getc(fpr);
		counter = 0;
		while(ch!=EOF)
		{
			if(test==ch)
			{
				counter++;
			}
			ch = getc(fpr);
		}
		freq[i-65] = counter;
		fclose(fpr);
	}
	for(int j = 97; j<123;j++)
	{
		test = j;
		fpr = fopen(file_name,"r");
		ch = getc(fpr);
		counter = 0;
		while(ch!=EOF)
		{
			if(test==ch)
			{
				counter++;
			}
			ch = getc(fpr);
		}
		freq[j-71] = counter;
		fclose(fpr);
	}
	int max = 0;
	char letter;
	for(int k = 0;k<52;k++)
	{
		//printf("%d ",freq[k]);
		if(freq[k]>count)
		{
			count = freq[k];
			max = k;
		}
	}
	if(max<26)
		letter = max + 65;
	else
		letter = max + 71;
	
	printf("The most frequent letter is: %c coming %d times.\n",letter,count);
	return 0;
}
