DIRS = \


all:
	for d in $(DIRS); do \
	  make -C $$d $@; \
	done

clean:
	for d in $(DIRS); do \
	  make -C $$d clean; \
	done
	rm -f *~
