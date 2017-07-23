# You can put your build options here
-include config.mk

all: libjsmn.a simple jsondump 

libjsmn.a: jsmn.o
	$(AR) rc $@ $^

%.o: %.c jsmn.h
	$(CC) -c $(CFLAGS) $< -o $@

simple: example/simple.o libjsmn.a
	$(CC) $(LDFLAGS) $^ -o example/$@

jsondump: example/jsondump.o libjsmn.a
	$(CC) $(LDFLAGS) $^ -o example/$@

test: test_default test_strict test_links test_strict_links
test_default: test/tests.c
	$(CC) $(CFLAGS) $(LDFLAGS) $< -o test/$@
	./test/$@
test_strict: test/tests.c
	$(CC) -DJSMN_STRICT=1 $(CFLAGS) $(LDFLAGS) $< -o test/$@
	./test/$@
test_links: test/tests.c
	$(CC) -DJSMN_PARENT_LINKS=1 $(CFLAGS) $(LDFLAGS) $< -o test/$@
	./test/$@
test_strict_links: test/tests.c
	$(CC) -DJSMN_STRICT=1 -DJSMN_PARENT_LINKS=1 $(CFLAGS) $(LDFLAGS) $< -o test/$@
	./test/$@

clean:
	rm -f *.o *.a *.so
	rm -f example/*.o example/simple example/jsondump
	rm -f test/test_default test/test_strict test/test_links test/test_strict_links

.PHONY: all clean test

