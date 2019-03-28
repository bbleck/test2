//
//  main.c
//  test2
//
//  Created by Brian on 3/28/19.
//  Copyright © 2019 Brian Bleck. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
  
  
  
  
  
  
  
  
  
  return 0;
}



















/////////////////////////////////////////////////////////


//int main()
//{
//  char string[30];
//  int age;
//
//  scanf( "%s %d", string, &age );
//
//  printf( "%s\n", string );
//
//  printf( "You are %d years old\n", age );
//
//  return 0;
//}


///////////////////////////////////////////////////////////



//int main()
//{
//  int x = 8;
//  int a = 12;
//
//  int *y = &x;
//  int *b = &a;
//
//  *y = 5;
//  y = b;
//
//
//
//  //  & - Address of
//  //  * - Value of
//
//  printf( "%d\n", x );
//  printf( "%p\n", &x );
//  printf( "%p\n", y );
//  printf( "%d\n", *y );
//
//  return 0;
//}


/////////////////////////////////////////////////////


//struct num {
//  int value;
//  struct num *next;
//};
//
//void twice( struct num *root ) {
//  struct num *el = root;
//
//  while( el->next != NULL )
//  {
//    el->value *= 2;
//    el = el->next;
//  }
//}
//
//void print_nums( struct num *root ) {
//
//  struct num *el = root;
//
//  while( el->next != NULL )
//  {
//    printf( "%d -> ", el->value );
//    el = el->next;
//  }
//
//  printf( "END\n" );
//}
//
//void push( struct num *root, int val ) {
//
//  struct num *el = (struct num *) malloc( sizeof( struct num ) );
//
//  el->value = val;
//  el->next = NULL;
//
//  while( root->next != NULL )
//  {
//    root = root->next;
//  }
//
//  root->next = el;
//}
//
//int main() {
//  struct num root_node = {0, NULL};
//  struct num *root = &root_node;
//  int i = 0;
//
//  for( i = 0; i < 20; i++ )
//  {
//    push( root, i * i );
//  }
//
//  twice( root );
//  print_nums( root );
//}


////////////////////////////////////////////////////


//
//int rand( int min, int max, int seed )
//{
//  int val;
//  time_t now = time( NULL );
//
//  printf( "Time is %ld\n", now );
//
//  val = now % max * seed;
//
//  printf( "Processing %d\n", val );
//
//  val *= val;
//
//  printf( "Processing %d\n", val );
//
//  val = val % ( max - min ) + min;
//
//  printf( "Processing %d\n", val );
//
//  return val;
//}
//
//int main()
//{
//  int random = rand( 1, 100, 7 );
//  printf( "%d\n", random );
//  return 0;
//}

/////////////////////////////////////////////////////////////


//void func( char *str )
//{
//  printf( "Welcome, %s\n", str );
//}
//
//int main()
//{
//  char string[10];
//  char *name = string;
//  scanf( "%s", name );
//  func( name );
//  return 0;
//}


/////////////////////////////////////////////////////////////



//int func( int num )
//{
//  int a;
//  int b;
//
//  //  printf( "1, %d", num );
//
//  for( a = 2; a <= sqrt( (double) num ); a++ )
//  {
//    b = num / a;
//
//    if ( a * b == num )
//      return 0;
//    //      printf( ", %d, %d", a, b );
//  }
//
//  return 1;
//
//  printf( "\n" );
//}
//
//int main()
//{
//  int num;
//  int prime;
//  scanf( "%d", &num );
//  prime = func( num );
//
//  if ( prime )
//    printf( "Yay, prime!\n" );
//  return 0;
//}

//////////////////////////////////////////////////////////


//int func( char *a )
//{
//  int index = 0;
//  char *b = "somestring";
//
//  while( 1 )
//  {
//    if ( b[index] == '\0' && a[index] != '\0' )
//      return 0;
//
//    if ( b[index] != a[index] )
//      return 0;
//
//    if ( a[index] == '\0' )
//      break;
//
//    index++;
//  }
//
//  return 1;
//}
//
//int main()
//{
//  int result;
//  result = func( "somestring" );
//
//  if ( result == 0 )
//  {
//    printf( "Invalid\n" );
//    return -1;
//  }
//  else
//    printf( "Valid\n" );
//
//  //Do other things
//
//  return 0;
//}


//////////////////////////////////////////////////////////////

//void func( int nums[10] )
//{
//  FILE *fp;
//  int i;
//
//  fp = fopen( "nums.txt", "w" );
//
//  for( i = 0; i < 10; i++ )
//  {
//    fprintf( fp, "%d\n", nums[i] );
//  }
//
//  fclose( fp );
//}
//
//int main()
//{
//  int nums[10] = { 1, 17, 25, 87, 3, 49, 366, 910, 82165, 0 };
//
//  func( nums );
//  return 0;
//}
