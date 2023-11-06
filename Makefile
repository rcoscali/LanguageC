SRCS = 	break.c \
		comaop.c \
		comatest.c \
		continue.c \
		dowhile.c \
		dynalloc.c \
		enum-2.c \
		enum.c \
		fact.c \
		for.c \
		iochar2.c \
		iochar.c \
		ioprintf.c \
		ioscanf.c \
		multitab.c \
		ptr1.c \
		ptrarithm.c \
		ptrarithmdbl.c \
		ptrarithmtab.c \
		relationalop.c \
	    sommeproduit.c \
		struct.c \
		tab2.c \
		tab3.c \
		tab4.c \
		tab.c \
		testcast.c \
		typecast.c \
		union.c \
		while.c \

EXES = 	break \
		comaop \
		comatest \
		continue \
		dowhile \
		dynalloc \
		enum-2 \
		enum \
		fact \
		for \
		iochar2 \
		iochar \
		ioprintf \
		ioscanf \
		multitab \
		ptr1 \
		ptrarithm \
		ptrarithmdbl \
		ptrarithmtab \
		relationalop \
	    sommeproduit \
		struct \
		tab2 \
		tab3 \
		tab4 \
		tab \
		testcast \
		typecast \
		union \
		while \

DIRS = \
	produit \
	Exercices \

.PHONY: all clean produit

all: debug $(DIRS) $(EXES) $(EXES:%=debug/%)

produit Exercices:
	make -C $@

clean:
	for d in $(DIRS); do \
	  make -C $$d $@; \
	done
	rm -rf debug $(EXES)

debug:
	mkdir $@

%: %.c
	clang $< -o $@

debug/%: %.c
	clang -g $< -o $@

break debug/break: break.c
comaop debug/comaop: comaop.c
comatest debug/comatest: comatest.c
continue debug/continue: continue.c
dowhile debug/dowhile: dowhile.c
dynalloc debug/dynalloc: dynalloc.c
enum-2 debug/enum-2: enum-2.c
enum debug/enum: enum.c
fact debug/fact: fact.c
for debug/for: for.c
iochar2 debug/iochar2: iochar2.c
iochar debug/iochar: iochar.c
ioprintf debug/ioprintf: ioprintf.c
ioscanf debug/ioscanf: ioscanf.c
multitab debug/multitab: multitab.c
ptr1 debug/ptr1: ptr1.c
ptrarithm debug/ptrarithm: ptrarithm.c
ptrarithmdbl debug/ptrarithmdbl: ptrarithmdbl.c
ptrarithmtab debug/ptrarithmtab: ptrarithmtab.c
relationalop debug/relationalop: relationalop.c
sommeproduit debug/sommeproduit: sommeproduit.c
tab2 debug/tab2: tab2.c
tab3 debug/tab3: tab3.c
tab4 debug/tab4: tab4.c
tab debug/tab: tab.c
testcast debug/testcast: testcast.c
typecast debug/typecast: typecast.c
union debug/union: union.c
while debug/while: while.c

struct: struct.c
	clang $< -o $@ -lm

debug/struct: struct.c
	clang -g $< -o $@ -lm
