run: secs_days

	./secs_days

secs_days: secs_days.c
	gcc -Wall -std=c11 secs_days.c -o secs_days

build: secs_days