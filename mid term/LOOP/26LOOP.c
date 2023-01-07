//TO CHECK WHETHER A NUMBER IS PRIME NUMBER OR NOT.
  #include <stdio.h>


int is_prime(int n)
 {
  if (n <= 1)
   {
    return false;
  }

  for (int i = 2; i < n; i++)
   {
    if (n % i == 0) 
	{
      return false;
    }
  }

  return true;
}

int main()
 {
  int n;

  printf("Enter a number: ");
  scanf("%d", &n);

  if (is_prime(n))
   {
    printf("%d is a prime number.\n", n);
  } else
   {
    printf("%d is not a prime number.\n", n);
  }

  return 0;
}


