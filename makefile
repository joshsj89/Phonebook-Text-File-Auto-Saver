phonebook-text-autosaver: main.c list.c files.c threads.c
	gcc -lpthread -o phonebook-text-autosaver main.c list.c files.c threads.c
	./phonebook-text-autosaver phonebook_data.txt binary_data.bin