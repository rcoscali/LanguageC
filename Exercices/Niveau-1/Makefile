DIRS = \
	Ex-1 \
	Ex-2 \
	Ex-3 \
	Ex-4 \
	Ex-5 \
	Ex-6 \
	Ex-7 \
	Ex-8 \
	Ex-9 \
	Ex-10 \


all:
	for d in $(DIRS); do \
	  make -C $$d $@; \
	done

clean:
	for d in $(DIRS); do \
	  make -C $$d clean; \
	done
	rm -f *~
