# main file name
OBJECT = main.cpp
# compiller flags
CFLAGS = -w
WCFLAGS = -g
# linker flags
LFLAGS = 
WLFLAGS = -static-libgcc -static-libstdc++ 
# executable name
APP_NAME = stronghold_triangulator
APP_NAME_W = stronghold_triangulator.exe
# scripts
# build app
build : $(OBJECT)
	g++ $(OBJECT) $(CFLAGS) $(LFLAGS) -o $(APP_NAME)
# run app
run : $(OBJECT)
	$(CURDIR)/$(APP_NAME)
# build and run app
build_run : $(OBJECT)
	g++ $(OBJECT) $(CFLAGS) $(LFLAGS) -o $(APP_NAME)
	$(CURDIR)/$(APP_NAME)
clear : $(OBJECT)
	rm $(CURDIR)/$(APP_NAME)
build_win : $(OBJECT)
	x86_64-w64-mingw32-g++ $(WCFLAGS) $(WLFLAGS) -o $(APP_NAME) $(OBJECT)
build_run_win : $(OBJECT)
	x86_64-w64-mingw32-g++ $(WCFLAGS) $(WLFLAGS) -o $(APP_NAME) $(OBJECT)
	wine64 $(CURDIR)/$(APP_NAME_W)

