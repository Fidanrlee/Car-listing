#ifndef carfunction   /* Include guard */
#define carfunction
#define s N_items-1



struct Car {
        char Model_name[50];
        char Colour[50];
        int Year;
        int Engine_size;
        int Price;
};



void Create ();

void Edit ();

struct Car Search();

void Sort ();

void Delete ();

int countlines();

#endif
