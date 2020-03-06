#ifndef carfunction   /* Include guard */
#define carfunction
#define s N_items-1

struct Car {
        char Model_name[50];
        char Color[50];
        char Year[5];
        char Engine_size[6];
        char Price[10];
};

void Print();

void Create ();

void Search();

void List();

void ADD ();

void Delete ();

void countlines();

#endif
