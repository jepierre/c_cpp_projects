#include <stdio.h>

void header();
void print_array(int array[], const int array_len);
void add_1_to_array();
void swap_by_reference(int *a, int *b);

int main(int argc, char **argv)
{
  header();

  int *p1; // this creates a pointer p1
  int x = 2; // this is a variable x
  p1 = &x; // pointer p1 now points to the address of x
  printf("pointer p1 address: %d\npointer p1 value: %d\nx value: %d\n", p1, *p1, x);

  // now we change the value of x by changing the value of p1
  *p1 = 1000;
  printf("pointer p1 address: %d\npointer p1 value: %d\nx value: %d\n", p1, *p1, x);


  // we can also point to objects
  char *welcome_message = "this is a wellcome message\n";
  char *p_string;
  p_string = (char *)welcome_message;  // p_string now points to a string

  // now we print the string using the pointer
  while (*p_string != '\0')
  {
    printf("%c", *p_string);
    p_string++;
  }


  add_1_to_array();

  int a = 20;
  int b = 40;

  printf("original values: \na = %d\nb = %d\n", a, b);
  swap_by_reference(&a, &b);
  printf("swapped: \na = %d\nb = %d\n", a, b);

  return 0;

}


void header()
{
  printf("This code shows the basics of pointers in c. \n");
}

void add_1_to_array()
{
  const int AI_LEN = 20;


  int a1[AI_LEN];

  // find length of an array only if the array is declared in the same function
  // int array_len = (int)(sizeof(array)/sizeof(array[0]));

  int *p_a1; 

  
  int index = 0;
  for(index=0; index < AI_LEN; index++)
  {
    a1[index] = index;
  }
  print_array(a1, AI_LEN);

  p_a1 = a1;  // p_a1 now points to a1[0], can also be p_a1 = &a1[0]

  // now increment a1 using the pointer
  for(index=0; index < AI_LEN; index++)
  {
    *p_a1 += 1;
    p_a1++;
  }

  print_array(a1, AI_LEN);

}

void print_array(int array[], const int array_len)
{

  for (int x=0; x<array_len; x++)
  {
    printf("array[%d]: %d\n", x, array[x]);
  }
}

void swap_by_reference(int *a, int *b)
{
  int temp = 0; 
  temp = *a;
  *a = *b;
  *b = temp;
}
