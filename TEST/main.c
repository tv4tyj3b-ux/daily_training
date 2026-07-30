#include "acllib.h"
#include <stdio.h>

int Setup() {
	initConsole();
	int width;
	printf(" ‰»ÎøÌ∂»£∫");
	scanf("%d",&width);
	initWindow("test",100,100,width,width);
	beginPaint();
	line(20,20,width-20,width-20);
	endPaint(); 
	return 0;
}
