#include <stdio.h>

int main() {
    int i;
     printf("Enter 1 for noodles:\n");
     printf("Enter 2 for fride rice:\n");
     printf("Enter 3 for chicken tandori:\n");
     printf("Enter 4  thai chilli rice :\n");
     printf("Enter 5 for chilli oil gravy:\n");
     
     printf("Enter your number:\n");
     scanf("%d", &i);
      
      switch(i)
      {
      case 1:
      printf("You selected Noodles enjoy you meal:");
      break;
      case 2:
      printf("You selected Fride rice enjoy you meal:");
      break;
      case 3:
      printf("You selected chicken tandori enjoy you meal:");
      break;
      case 4:
      printf("You selected chilli rice enjoy you meal:");
      break;
      case 5:
      printf("You selected Chilli oil gravy enjoy you meal:");
      break;
      default:
      printf("This dish is not available enjoy you meal:");
      
      return 0;
      }
}
