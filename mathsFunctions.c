#include <stdhi.o>

int main(){
	// I am branch testing
	int x = 5, y = 6;
	printf ("%i + %i = %i\n", x, y, x+y);

	printf ("%i + %i = %i\n", x, y, x-y);

	printf ("%i + %i = %i\n", x, y, x*y);

	printf ("%i + %i = %i\n", x, y, x/y);

	printf ("%i MOD %i = %i\n", x, y, x%y);

	int max, min;
	int nums[];
	for(int i = 0; i < 5; i++){
		if(nums[i] < min){
			min = nums[i];
		} else if(nums[i] > max){
			max = nums[i];
		}
	}
	return 0;
}
