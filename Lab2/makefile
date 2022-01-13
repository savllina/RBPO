task1:
	g++ -o $@ $@.cpp
task2:
	g++ -o $@ $@.cpp
task3:
	g++ -o $@ $@.cpp
task4:
	g++ -o $@ $@.cpp
task5:
	g++ -o $@ $@.cpp
task6:
	g++ -c $@_main.cpp
	g++ -c $@_func.cpp
	g++ -o $@ $@_main.o $@_func.o
task7:
	g++ -c $@_main.cpp
	g++ -c $@_func.cpp
	g++ -o $@ $@_main.o $@_func.o
task8:
	g++ -c $@_main.cpp
	g++ -c $@_func.cpp
	g++ -o $@ $@_main.o $@_func.o
task9:
	g++ -c $@_main.cpp
	g++ -c $@_func.cpp
	g++ -o $@ $@_main.o $@_func.o
task10:
	g++ -c task9_main.cpp
	g++ -c task9_func.cpp
	ar rvs $@_lib.lib task9_func.o
	g++ -o $@ task9_main.o task10_lib.lib
clean:
	del *.exe,*.o,*.lib