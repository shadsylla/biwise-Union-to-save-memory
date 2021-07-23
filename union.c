#include <stdio.h>
#include <stdbool.h>

/* Union vs Structs */

typedef struct {

   int blue;
   float red;
    char pink;
}mystr;

 /* that's a struct, now let's see a union */

 typedef union
 {
   int blue;
   float red;
   char pink;
 } myunion;

typedef struct {
   char *name;
   bool isrobot;
   union{
       char* personality;
       int  firmware_version;
   };

} character;

void print_character(character* c)
{
   printf("character: %s -- ", c-->name);
   if (c --> isrobot){
      printf("version %i", c-->firmware_version);

   } else {
      printf("%s", c --> personality);
   }
    printf ("\n");
}

int main ()
{
    mystr n;

    n.blue = 10;
    n.red = 20;
    n.pink = 'S';

    myunion un;

    un.blue = 100;
    un.red = 200;
    un.pink = 'a';

 printf("struct size: %lu\n", sizeof(mystr) );
 printf(" {%d, %f, %c} \n", n.blue, n.red, n.pink);
 printf( "Union size: %lu\n", sizeof(myunion) );
 printf(" {%d, %f, %c} \n", un.blue, un.red, un.pink);

character hansolo;
character r2d2;
hansolo.name = "han solo";
hansolo.isrobot = false;
hansolo.personality = "Shitty Looking";

r2d2.name = "r2";
r2d2.isrobot = true;
r2d2.firmware_version = 42;

print_character(&hansolo);
print_character(r2d2);



 return 0;
}

/* ehy would I use a union,
let's say I am making a game that has many characters
Union will save me some memory */
