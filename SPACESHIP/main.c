#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char *Star_Trek_Draw[50] =
{
"       !",
"       !",
"       ^",
"      / \\", // WARNING! BE AWARE OF "\" - escape character !
"     /___\\",
"    |=   =|",
"    |     |",
"    |     |",
"    |     |",
"    |STAR |",
"    | TREK|",
"    |     |",
"    |     |",
"    |     |",
"    |     |",
"   /|##!##|\\",
"  / |##!##| \\",
" /  |##!##|  \\",
"|  / ^ | ^\\  |",
"| /  ( | ) \\ |",
"|/   ( | )  \\|",
"    ((   ))",
"   ((  :  ))",
"   ((  :  ))",
"    ((   ))",
"     (( ))",
"      ( )",
"       .",
"       .",
"       .",
};

char *Pegasos_Draw[50] =
{
"                           |-----------|",
"           i               |===========|",               
"           |               |,---------.|                   __--~\\__--.",
"    #---,''''''`-_   `n    |`---------'|    `n    `n     ,--~~  __-/~~--'_____.",
"       |~~~~~~~~~|---~---/=|___________|=\\---~-----~-----| .--~~  |  .__|     |",
"     -[|.--_. ===|#####|-| |@@@@|+-+@@@| |]=###|/-++++-[| ||||___+_.  | `===='-.",
"     -[|'==~'    |#####|-| |@@@@|+-+@@@| |]=###|\\-++++-[| ||||~~~+~'  | ,====.-'",
"       | PEGASOS |---u---\\=|~~~~~~~~~~~|=/---u-----u-----| '--__  |  '~~|     |",
"        \\  Nº I /=-   `    |,---------.|      `     `    `--__  ~~-\\__--.~~~~~'",
"----=:===\\     /           |`---------'|                      ~~--_/~~--'",
"      --<:\\___/--          |===========|",
"                           |-----------|",
"                           |___________|",
};

char *Space_Dog[50] =
{
"                             ________",
"                            `---.     `.",
"                                 \\      `.",
"                                  )_______`.",    
"                                .'        //`---...___",
"                               /         ||    // ||  `-._         [0]",
"                            )`-|   =//=  ||   ||  ||  / ).`.        |",
"       _............_       ).-|         ||   ||  `........'`-._   (o)",
"    .-'         `.----`.   _...'.....__  ||   ||  _____      ||-\\__.'",
"  .' | SPACE  |  ).---.)  /_______..--'  ||   ||  -----    _ ||_/",
".'_  |        |  ||   ||  `-------'      ||   ||   =\\\\=    \\_.'",
"|  | |  DOG   |  |'---'|    )`-|         ||   ||       _..-'",
"'--'_____________|_____|    ).-| =\\=     ||    \\\\  _.-' ||",
"|[]--------------/     /   __==\\          \\\\   _.-'    /o'\\",
" \\     .--.     /    _...--''   '-.__......_.-'        \\__/",
"  `-._//'o\\___.'---''             \\     .'",
" LGBT \\_O_/  -'                   /    /",
"                             ___.'    /",
"                              `-------'",
};

char *Star_Fighter_Draw[50] = 
{
"                    /\\",
"                   //\\\\",
"                  ||66||",
"                 //6666\\\\",
"                //666666\\\\",
"               //66666666\\\\",
"              //6666666666\\\\",
"             //666666666666\\\\",
"             ||666666666666||",
"             ||666666666666||",
"             |______________|",
"             | STAR FIGHTER |",
"              \\____________/",
"               |          |",
"              /|    /\\    |\\",
"             /_|    || /\\ |_\\",
"               |     USSSR|",
"               |       \\/ |",
"               |          |",
"              /|    /\\    |\\",
"             / |    ||    | \\",
"            /  |    ||    |  \\",
"           /  /\\    ||    /\\  \\",
"          |__/  \\   ||   /  \\__|",
"            /____\\      /____\\",
"            |    |      |    |",
"            |LIZA|______|LOVE|",
"            |    | /--\\ |    |",
"            |____|/----\\|____|",
"             \\||/ //##\\ \\||/",
"             /##\\//####\\\\/##\\",
"            //##\\\\/####\\//##\\\\",
"           ||/::\\||/##\\||/::\\||",
"           \\\\\\\''///:**:\\\\\\''///",
"            \\\\\\///\\::::/\\\\\\///",
"             \\\\//\\\\::///\\\\///",
"              \\/\\\\\\\\..////\\/",
"                 \\\\\\\\////",
"                  \\\\\\///",
"                   \\\\//",
"                    \\/",
};


struct Spaceship 
{
  char *name;
  int age;
  int warp_speed;
  int crew;
};

struct Spaceship *Spaceship_create (char *name, int age, int warp_speed, int crew)
{
  struct Spaceship *who = malloc (sizeof(struct Spaceship));
  assert(who != NULL);

  who->name = strdup(name);
  who->age = age;
  who->warp_speed = warp_speed;
  who->crew = crew;

 return who;
}

void Spaceship_destroy (struct Spaceship *who)
{
  assert(who != NULL);

  free(who->name);
  free(who);
}

void Spaceship_print (struct Spaceship *who)
{
  printf ("Name: %s\n", who->name);
  printf ("\tAge: %d\n", who->age);
  printf ("\tWarp Speed: %d\n", who->warp_speed);
  printf ("\tCrew: %d\n", who->crew);
}

// START OF A NEW FUNCTION-------------------------------------------------------------------------------------

void Function_Sorting_Crew (struct Spaceship *star_trek_parameter, struct Spaceship *pegasos_parameter,struct Spaceship *space_dog_parameter, struct Spaceship *star_fighter_parameter)
{ 
// Let's create a function which sorts crew's number in an ascending order

  static struct Spaceship *Spaceships[4]; // let's create a list/an array of structs for sorting
  Spaceships[0] = star_trek_parameter;
  Spaceships[1] = pegasos_parameter;
  Spaceships[2] = space_dog_parameter;
  Spaceships[3] = star_fighter_parameter;

  struct Spaceship *temp; // temporary var for bubble sorting method in for loop

// first time sorting to find out the smallest and the biggest value of crews (required by the task)
  for(int i = 0; i < 4; i++)
  {
    for(int j = i + 1; j < 4; j++)
    { 
     if (Spaceships[i]->crew > Spaceships[j]->crew)
     {
         temp = Spaceships[i];
         Spaceships[i] = Spaceships[j];
         Spaceships[j] = temp;
      }
    }
   } // end of first sorting

  int number = ((Spaceships[3]->crew)/(2)); // we will need that var to realize the required mathematical operation (half number of the biggest crew add to the smallest)
  Spaceships[0]->crew += number; // the required mathematical operation is done
// now let's sort the list of the structs again to print them in a new ascending order of new crew's number
  for (int i = 0; i < 4; i++)
  {
    for (int j = i + 1; j < 4; j++)
    { 
        if (Spaceships[i]->crew > Spaceships[j]->crew)
        {
            temp =Spaceships[i];
            Spaceships[i] = Spaceships[j];
            Spaceships[j] = temp;
        }
    } 
Spaceship_print (Spaceships[i]); // called the function which prints all structs
  }
}
// END OF THE FUNCTION--------------------------------------------------------------------------------------------

// START OF A NEW FUNCTION-------------------------------------------------------------------------------------

void Srand_Warp_Speed (struct Spaceship *spaceship)
{
// let's create a random warp speed for all spaceships
  int Srand_Number = rand()%8+1;
  spaceship->warp_speed = Srand_Number;
}
// END OF THE FUNCTION--------------------------------------------------------------------------------------------

// START OF A NEW FUNCTION-------------------------------------------------------------------------------------

void Function_Sorting_Random_Value_Of_Warp_Speeds (struct Spaceship *star_trek_parameter, struct Spaceship *pegasos_parameter, struct Spaceship *space_dog_parameter, struct Spaceship *star_fighter_parameter)
{ 
// let's create a function which will sort the structs by their new random warp speed
  struct Spaceship *Spaceships[4];
  Spaceships[0] = star_trek_parameter;
  Spaceships[1] = pegasos_parameter;
  Spaceships[2] = space_dog_parameter;
  Spaceships[3] = star_fighter_parameter;

struct Spaceship *temp; // temp var for bubble sorting method
  printf ("\n\n\n\n........Sorted by RANDOM changes in their warp speed........\n\n");

  for (int i = 0; i < 4; i++)
  {
    for (int j = i + 1; j < 4; j++)
    {
        if (Spaceships[i]->warp_speed > Spaceships[j]->warp_speed)
        {
           temp = Spaceships[i];
           Spaceships[i] = Spaceships[j];
           Spaceships[j] = temp;
        }
    }
 Spaceship_print (Spaceships[i]); // called the function which prints all structs
 }
} 
// END OF THE FUNCTION-------------------------------------------------------------------------------------------

// START OF A NEW FUNCTION-------------------------------------------------------------------------------------

void New_Name_for_Space_Dog (struct Spaceship *space_dog_parameter)
{
  char new_name[50];

  printf ("\n\nGive me a name for %s: ",space_dog_parameter->name);
  scanf ("%s",new_name);
 space_dog_parameter->name = strdup(new_name);

}
// END OF THE FUNCTION-------------------------------------------------------------------------------------------


// START OF A NEW FUNCTION-------------------------------------------------------------------------------------

void Print_The_Youngest_Spaceship_and_Delete_the_Oldest (struct Spaceship *space_dog_parameter, struct Spaceship *star_fighter_parameter)
{
  if (space_dog_parameter->age > star_fighter_parameter->age)
   {
    Spaceship_print (star_fighter_parameter);
    printf ("...and the Space Dog is destroyed from memory... RIP.");
   }

  else 
   {
    Spaceship_print (space_dog_parameter);
    printf ("...and the Star Fighter is destroyed from memory... RIP.");
   }

}
// END OF THE FUNCTION-------------------------------------------------------------------------------------------


// MAIN FUNCTION-----------------------------------------------------------------------------------------------------

int main()
{ 
// φτιάξε 2 διαστημόπλοια
  struct Spaceship *star_trek = Spaceship_create("Star Trek", 32, 64, 140);
  struct Spaceship *pegasos = Spaceship_create("Pegasos I", 20, 72, 180);
  struct Spaceship *space_dog = Spaceship_create("Space Dog", 28, 22, 200);
  struct Spaceship *star_fighter = Spaceship_create("Star Fighter", 10, 90, 35);

// τύπωσε τα χαρακτηριστικά τους και που.. βρίσκονται στην μνήμη του υπολογιστή!
 printf ("\n\n ---Old values are:---\n");
 printf ("_______________________________________________\n\n");
 printf ("[STAR TREK] is at memory location: %p\n", star_trek);
 Spaceship_print (star_trek);
 printf("\n");
for (int i = 0; i < 29; i++)
 {
printf ("%s\n",Star_Trek_Draw[i]);
 }
printf ("\n\n");

 printf("\n[PEGASOS I] is at memory location: %p\n", pegasos);
 Spaceship_print (pegasos);
 printf ("\n");
for (int i = 0; i < 12; i ++)
 {
   printf ("%s\n",Pegasos_Draw[i]);
 }
  printf ("\n\n");

  printf ("\n[SPACE DOG] is at memory location: %p\n", space_dog);
  Spaceship_print (space_dog);
for (int i = 0; i < 19; i ++)
 {
  printf ("%s\n",Space_Dog[i]);
 }
  printf ("\n");

  printf ("\n[STAR FIGHTER] is at memory location: %p\n", star_fighter);
  Spaceship_print (star_fighter);
  printf ("\n\n");
for (int i = 0; i < 40; i ++)
 {
  printf ("%s\n",Star_Fighter_Draw[i]);
 }
 printf ("_______________________________________________");

// άλλαξε τις τιμές των χαρακτηριστικών τους και τύπωσε πάλι.
  star_trek->age += 20;
  star_trek->warp_speed -= 2;
  star_trek->crew += 40;
  printf ("\n\n\n\n\n\n ---NEW VALUES OF TWO SPACESHIPS ARE---\n");
  printf ("_______________________________________________\n\n");


Spaceship_print (star_trek);

  pegasos->age += 20;
  pegasos->crew += 20;
 printf ("\n\n");
Spaceship_print (pegasos);

  printf ("\nPlease enter new age for Star Trek (from 1 up to 90 !!!) : ");
  scanf ("%d",&star_trek->age);
if (star_trek->age < 1 || star_trek->age > 99)
{ 
  printf ("Be aware, the age must be from 1 up to 90. Please, try again: ");
  scanf ("%d",&star_trek->age);
}

  printf ("\nEnter new age for Pegasos I (from 1 up to 90 !!!): ");
  scanf ("%d",&pegasos->age);
if (pegasos->age < 1 || pegasos->age > 99)
{ 
  printf("Be aware, the age must be from 1 up to 90. Please, try again: ");
  scanf("%d",&pegasos->age);
}

  printf ("\nNew age of Space Dog (from 1 up to 90 !!!): ");
  scanf ("%d", &space_dog->age);
if (space_dog->age < 1 || space_dog->age > 99)
{ 
  printf ("Be aware, the age must be from 1 up to 90. Please, try again: ");
  scanf ("%d",&space_dog->age);
}

  printf ("\nNew age of Star Fighter (from 1 up to 90 !!!): ");
  scanf ("%d",&star_fighter->age);
if (star_fighter->age < 1 || star_fighter->age > 99)
{ 
  printf ("Be aware, the age must be from 1 up to 90. Please, try again: ");
  scanf ("%d",&star_fighter->age);
}

//START OF 1st TASK---------------------------------------------------------------------------------------------------
// Let's create a list/array of structures
 struct Spaceship *Spaceship_Array[4];
 Spaceship_Array[0]=star_trek;
 Spaceship_Array[1]=pegasos;
 Spaceship_Array[2]=space_dog;
 Spaceship_Array[3]=star_fighter;

// OK, now let's sort the list in an ascending way, using bubble sorting------------------------------
 printf ("\n\n\n\n........Sorted by their NEW age........\n\n");
for(int i = 0; i < 4; i++)
{
  for(int j = i + 1; j < 4; j++)
  {
    struct Spaceship *temp;

  if (Spaceship_Array[i]->age > Spaceship_Array[j]->age)
  {
     temp = Spaceship_Array[i];
     Spaceship_Array[i]=Spaceship_Array[j];
     Spaceship_Array[j]=temp;
   }
} 
 Spaceship_print (Spaceship_Array[i]);
}
// END OF 1st TASK-----------------------------------------------------------------------------------------------------

//START OF 2nd TASK--------------------------------------------------------------------------------------------------
// The Function "Function_Sorting_Crew" has sorted structs by their crew value, ALSO made required mathematical operation and called to print sorted list of structs by their new crew value-----------------------------------------------------------------------------------------------------------------
  printf ("\n\n\n\n........Sorted by changes in their crew........\n\n");
  Function_Sorting_Crew (star_trek,pegasos,space_dog,star_fighter);
// END OF 2nd TASK----------------------------------------------------------------------------------------------------

//START OF 3rd TASK--------------------------------------------------------------------------------------------------
// Changes in warp_speed (adding random number of speed) 
  Srand_Warp_Speed (star_trek);
  Srand_Warp_Speed (pegasos);
  Srand_Warp_Speed (space_dog);
  Srand_Warp_Speed (star_fighter);
// END OF 3rd TASK----------------------------------------------------------------------------------------------------

//START OF 4rth TASK-------------------------------------------------------------------------------------------------
// lets' call the function to sort and print the structs by their new random warp speeds
  Function_Sorting_Random_Value_Of_Warp_Speeds (star_trek,     pegasos,space_dog,star_fighter);
// END OF 4rth TASK---------------------------------------------------------------------------------------------------

//START OF 5th TASK--------------------------------------------------------------------------------------------------
// let's call the functions which ask a user to give a new name to the Space Dog and print it here
  New_Name_for_Space_Dog (space_dog);
  Spaceship_print (space_dog);
// END OF 5th TASK----------------------------------------------------------------------------------------------------

//START OF 6th TASK--------------------------------------------------------------------------------------------------
// κατέστρεψε τα από την μνήμη και τα δύο
  Spaceship_destroy (star_trek);
  Spaceship_destroy (pegasos);
// let's print the remained and the youngest spaceship + delete all others from memory 
 printf ("The remained and the youngest spaceship which managed to survive is:\n\n");
 Print_The_Youngest_Spaceship_and_Delete_the_Oldest (space_dog,star_fighter);
// END OF 6th TASK----------------------------------------------------------------------------------------------------

return 0;
}
