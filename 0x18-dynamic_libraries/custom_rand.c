int my_nums[] = {8, 8, 7, 9, 23, 74};
int *sum = my_nums;

int rand()
{
	int itr = *sum++;

	return (itr);
}
