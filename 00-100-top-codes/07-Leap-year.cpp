// Leap Year

  if(year % 400 == 0)
      cout << year << " is a Leap Year";
      
  else if(year % 4 == 0  && year % 100 != 0)
      cout << year << " is a Leap Year";
      
  else
      cout << year << " is not a Leap Year";
