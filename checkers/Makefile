CC              := gcc
CFLAGS          := -Wall -ggdb -Wno-int-to-pointer-cast -Wno-pointer-to-int-cast
#CPPFLAGS        := -I./ -I/usr/X11R6/include/Xm -I/usr/X11R6/include -I/usr/include/openmotif
CPPFLAGS        := -I./ -I/home/students/dtanner/bigdata/ai/checkers/usr/include
#LDFLAGS         := -L/usr/lib/X11R6 -lXm -lXaw -lXmu -lXt -lX11
#LDFLAGS         := -L/usr/X11R6/lib -L/usr/X11R6/LessTif/Motif1.2/lib -lXm -lXaw -lXmu -lXt -lX11 -lICE -lSM -pthread -L/usr/lib64/openmotif/
LDFLAGS         := -lX11 -lXm -lXaw -lXmu -lXt -lICE -lSM -pthread -L/home/students/dtanner/bigdata/ai/checkers/usr/lib64

# Uncomment this next line if you'd like to compile the graphical version of the checkers server.
#CFLAGS          += -DGRAPHICS

#Uncomment this next line if you'd like to debug against yourself
#CFLAGS 		+= -DDEBUG

all: checkers computer makeboard
checkers: graphics.o checkers.o
	${CC} ${CPPFLAGS} ${CFLAGS} -o $@ $^ ${LDFLAGS}
computer: myprog.o
	${CC} ${CPPFLAGS} ${CFLAGS} -o $@ $^ ${LDFLAGS}

.PHONY: clean
clean:
	@-rm checkers computer *.o
