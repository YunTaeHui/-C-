#pragma once
#define MAXSIZE 10

class CQueue {
public:
	int queue[MAXSIZE];
	int front, rear;

	void init_queue(void);

	void clear_queue(void);

	int enqueue(int val);

	int dequeue(void);

	void print_queue(void);

	int load_queue(const char* filename);

	int save_queue(const char* filename);
};