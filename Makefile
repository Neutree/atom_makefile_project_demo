
all:
	@echo start compile
	-rm -rf build
	mkdir build
	gcc -I ./include -o build/test.out src/main.c
	@echo compile success
clean:
	rm -rf build

test:
	@echo 'test string'

run:
	./build/test.out

# $(info makelevel:$(MAKELEVEL))
