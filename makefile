CPP=g++

%.o: %.cpp
	$(CPP) -c $< -I .

aaa: *.o
	$(CPP) -o $@ $<

install:
	./aaa

clean:
	del *.o *.exe *.s
