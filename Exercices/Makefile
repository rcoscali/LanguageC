DIRS = \
	Niveau-1 \
	Niveau-2 \
	Niveau-3 \
	Niveau-4 \


all:
	for d in $(DIRS); do \
	  make -C $$d all; \
	done

clean:
	for d in $(DIRS); do \
	  make -C $$d clean; \
	done
	rm -f *~
