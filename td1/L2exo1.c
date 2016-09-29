#include "graphics.h"
int dessiner_etoile(POINT p1)
{
	POINT p,p2;
	p.x = p1.x-5; p.y = p1.y;
	p2.x = p1.x+5; p2.y = p1.y;
	draw_line(p,p2,white);
	p.x = p1.x; p.y = p1.y+5;
	p2.x = p1.x; p2.y = p1.y-5;
	draw_line(p,p2,white);
	p.x = p1.x-5; p.y = p1.y-5;
	p2.x = p1.x+5; p2.y = p1.y+5;
	draw_line(p,p2,white);
	p.x = p1.x-5; p.y = p1.y+5;
	p2.x = p1.x+5; p2.y = p1.y-5;
	draw_line(p,p2,white);
}


int main()
{
init_graphics(900,600);
// Debut du code
POINT p1;
int i=0;
p1.x = 50; p1.y = 50;

while (i<10)
{
	dessiner_etoile(p1);
	p1.x = p1.x + 25;
	p1.y = p1.y + 50;
	i++;
}

// Fin du code

wait_escape();
exit(0);
}
