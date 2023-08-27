// Leap Year

// 1. 

  if(year % 400 == 0)
      cout << year << " is a Leap Year";
      
  else if(year % 4 == 0  && year % 100 != 0)
      cout << year << " is a Leap Year";
      
  else
      cout << year << " is not a Leap Year";

// 2. 

int flag = (year%400 == 0) || (year%4==0 && year%100!=0 ) ? 1 : 0;
    if (flag ==1)
    {
        printf("%d is a Leap Year",year);
    }
    else
    {
        printf("%d is not a Leap Year",year);
    }

// 3. using macro

#define ISLP(y) ((y % 400 == 0) || (y % 100 != 0) && (y % 4 == 0))
		
// Driver Code
int main()
{
	int year = 2020;
	cout << ISLP(year) << "\n";
	return 0;
}
