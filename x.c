#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <X11/Xos.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cmath>
Display *dis;
int screen;
Window win;
GC gc;
unsigned long white, black;
Drawable d;




void cloze();
void init();
void draw();

int main(){
init();
XEvent event;
KeySym key;
char *text[255];
//XDrawLine(dis, win, gc, 300, 300, 0, 0);
//XDrawLine(dis, win, gc, x1, y1, x2, y2);

while(1){

	XNextEvent(dis, &event);
	//if(event.type==Expose && event.xexpose.count==0)draw();
	draw();
	//if(event.type==KeyPress && XLookupString(&event.xkey, text, 255, &key, 0)==1){
		//if(text[0]=='q')close(0);
		//printf("You presed %c key\n", text[0]);}
	//if(event.type==ButtonPress){
		XSetForeground(dis, gc, white);
		XDrawLine(dis, win, gc, 150, 300, 150, 0);
                XDrawLine(dis, win, gc, 0, 150, 300, 150);
		//XDrawPoint(dis, win ,gc, event.xbutton.x, event.xbutton.y);
                std::cout<<"elipptic curve sqr(x(x+1)(2x+1))"<<std::endl;
		for(double x =-5;x<10;x+=0.02){
	        //std::cout<<"elipptic curve x^3-x"<<std::endl;
       		//double j=
	        //XDrawPoint(dis, win ,gc, (i*20+150), (sqrt(pow(i,3)-i))*20+150);
                //XDrawPoint(dis, win ,gc, (i*20)+150, 150-(sqrt(pow(i,3)-i))*20);
//XDrawPoint(dis, win ,gc, (i+150), fmod((sqrt(pow(i,3)-7*i+10)),61)+150);
//XDrawPoint(dis, win ,gc, (i)+150, 150-fmod((sqrt(pow(i,3)-7*i+10)),61));
XDrawPoint(dis, win ,gc, (x*100+150), ((sqrt(x*(x+1)*(2*x+1)/6)*100))+150);
XDrawPoint(dis, win ,gc, (x*100+150), 150-((sqrt(x*(x+1)*(2*x+1)/6)*100)));
//XDrawPoint(dis, win ,gc, (i*7)+150, 150-((sqrt(pow(i,3)-7*i+10)*7)));
//if(i==-3)XDrawPoint(dis, win ,gc, (i*7+149), 150-((sqrt(pow(i,3)-7*i+10)*7)));
//if(i==-1)XDrawPoint(dis, win ,gc, (i*7+149), 150-((sqrt(pow(i,3)-7*i+10)*7)));
//int j=-3;
//int k=-1;
//XDrawLine(dis, win, gc, j*7+150, 150-((sqrt(pow(j,3)-7*j+10)*7)), k*7+150, 150-((sqrt(pow(k,3)-7*k+10)*7)));
//std::cout<<((sqrt(pow(k,3)-7*k+10)))<<std::endl;
//std::cout<<(-1-3)/(((sqrt(pow(k,3)-7*k+10))))-(((sqrt(pow(j,3)-7*j+10))))<<std::endl;
XDrawPoint(dis, win ,gc, (x*100+150), 150-(((pow(x,3)-(pow(x,2)*(3/2))+(x*1/2))*100)));
XDrawPoint(dis, win ,gc, (x*100+150), (((pow(x,3)-(pow(x,2)*(3/2))+(x*1/2))*100))+150);

//XDrawPoint(dis, win ,gc, (i*7)+150, (122-3*(i-(-1))));
//std::cout<<k<<150-((sqrt(pow(k,3)-7*k+10)*7))<<std::endl;



		//std::cout<<j<<std::endl;
		}
	       // draw();
	
	}


return 0;
}
void init(){
dis=XOpenDisplay(NULL);
screen=DefaultScreen(dis);
black=BlackPixel(dis,screen);
white=WhitePixel(dis,screen);
win=XCreateSimpleWindow(dis, DefaultRootWindow(dis),0,0,300,300,5,white,black);
XSetStandardProperties(dis, win, "Hi", "hi", None, NULL, 0, NULL);
XSelectInput(dis, win, ExposureMask | ButtonPressMask | KeyPressMask);
gc=XCreateGC(dis, win, 0, 0);
XSetBackground(dis, gc, white);
XSetForeground(dis, gc, black);
XClearWindow(dis, win);
XMapRaised(dis, win);


}
void draw(){
XClearWindow(dis, win);
}

void cloze(){
XFreeGC(dis, gc);
XDestroyWindow(dis, win);
XCloseDisplay(dis);
exit(0);
}