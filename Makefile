compiler = g++
source_files = main.cpp calculations.cpp general.cpp goal_setting.cpp projects.cpp schedule.cpp skills.cpp
executable = main.exe

build: $(source_files)
	$(compiler) $(source_files) -o $(executable)
	./a.exe