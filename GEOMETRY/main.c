#include <stdio.h>

struct point 
{
 int x;// για τον άξονα x
 int y;// για τον άξονα y
};

struct circle 
{
 struct point k;// ως κέντρο κύκλου που στην ουσία είναι ένα σημείο
 float r;// ως ακτίνα κύκλου
};

struct triangle 
{
 struct point k1;
 struct point k2;
 struct point k3;
};

struct circle2
{
 struct point k1;
 struct point k2;
 struct point k3;
 struct point center;
 float r;
};

struct poly
{
 struct point k1;
 struct point k2;
 struct point k3;
 struct point k4; 
};

struct line
{
 struct point k1;
 struct point k2;
};


void new_geometry (struct circle *c,struct triangle *tr, struct circle2 *c2, struct poly *p, struct line *l)// START of func
{ 
 c->k.x = tr->k1.x;// τιμές του κύκλου
 c->k.y = tr->k1.y;
  
 p->k1.x = c2->k1.x;// τιμές του πολύγωνου
 p->k1.y = c2->k1.y;
 p->k2.x = c2->center.x;
 p->k2.y = c2->center.y;
 p->k3.x = c2->k2.x;
 p->k3.y = c2->k2.y;
 p->k4.x = (p->k4.x)/-5;
 p->k4.y = ((p->k4.y)+2);

 l->k1.x = tr->k3.x;
 l->k1.y = tr->k3.y;
 l->k2.x = c2->k3.x;
 l->k2.y = c2->k3.y;
 printf("\n\n\n <---VALUES OF THE NEW GEOMETRY ARE--->\n\n▲△◉□■________________________________________■□◉△▲\n\n");
 printf("◯ [Circle's center] ◯\n is located at x = %d and y = %d with radius = %f\n◽ [Polygon's four values are] ◽\n First point has x = %d and y = %d\n Second point has x = %d and y = %d\n Third point has x = %d and y = %d\n Fourth point has x = %d and y = %d\n\\ [Line's new points are] /\n First point has x = %d and y = %d\n Second point has x = %d and y = %d\n\n◉▵ [SECOND circle and triangle] ◉▵\n reamained the same!\nThat's all! (x_x) ", c->k.x,c->k.y,c2->r,p->k1.x,p->k1.y,p->k2.x,p->k2.y,p->k3.x,p->k3.y,p->k4.x,p->k4.y,l->k1.x,l->k1.y,l->k2.x,l->k2.y);
}// END of func


int main()// START of MAIN 
{
 struct point e;// Σημείο Ε
 struct circle c;// Κύκλος circle
 struct triangle t;// Τρίγωνο
 struct circle2 c2;// Δεύτερος κύκλος
 struct poly p;// Πολύγωνο
 struct line l;// Ευθεία γραμμή F

 e.x = 8;// τιμές του σημείου Ε
 e.y = 2;

 c.k.x = 8;// τιμές του κύκλου circle
 c.k.y = 8;
 c.r = 2.0;

 t.k1.x = 2;// τιμές του τρίγωνου
 t.k1.y = 0;
 t.k2.x = 4;
 t.k2.y = 6;
 t.k3.x = -6;
 t.k3.y = 4;

 c2.k1.x = -6;// τιμές του κύκλου
 c2.k1.y = -2;
 c2.k2.x = -4;
 c2.k2.y = -8;
 c2.k3.x = -12;
 c2.k3.y = -6;
 c2.center.x = -8;
 c2.center.y = -6;
 c2.r = 4.0;

 p.k1.x = 6;// τιμές πολύγωνου
 p.k1.y = -4;
 p.k2.x = 4;
 p.k2.y = -8;
 p.k3.x = 8;
 p.k3.y = -10;
 p.k4.x = 10;
 p.k4.y = -6;

 l.k1.x = -6;// τιμές ευθείας
 l.k1.y = 8;
 l.k2.x = -12;
 l.k2.y = 2;

// εκτύπωση των τιμών των E και circle 
 printf("\n\n <---VALUES OF THE OLD GEOMETRY ARE--->\n\n▲△◉□■________________________________________■□◉△▲\n");
 printf( "\n . [Point E] .\nis located at x = %d and y = %d \n", e.x, e.y);
 printf( "\n ◯ [Circle's center] ◯\nis located at x = %d and y = %d with radius = %.2f ", c.k.x, c.k.y, c.r);

 printf("\n\n ▵ [Triangle's values are] ▵\nFirst point has x = %d and y = %d\nSecond point has x = %d and y = %d\nThird point has x = %d and y = %d", t.k1.x,t.k1.y,t.k2.x,t.k2.y,t.k3.x,t.k3.y);

 printf("\n\n\n ◉ [SECOND Circle] ◉\nIts center is located at x = %d and y = %d\n\nThe values of three points are:\n\nFirst point has x = %d and y = %d\nSecond point has x = %d and y = %d\nThird point has x = %d and y = %d\nIts radius is %.2f",c2.center.x,c2.center.y,c2.k1.x,c2.k1.y,c2.k2.x,c2.k2.y,c2.k3.x,c2.k3.y,c2.r);

 printf("\n\n ◽ [The values of four polygon's points are] ◽\nFirst point has x = %d and y = %d\nSecond point has x = %d and y = %d\nThird point has x = %d and y = %d\nFourth point has x = %d and y = %d",p.k1.x,p.k1.y,p.k2.x,p.k2.y,p.k3.x,p.k3.y,p.k4.x,p.k4.y);

 printf("\n\n \\ [The points of line F are] / \nFirst point has x = %d and y = %d\nSecond point has x = %d and y = %d", l.k1.x,l.k1.y,l.k2.x,l.k2.y);

 new_geometry(&c,&t, &c2, &p, &l);

return 0;
}// END of MAIN
