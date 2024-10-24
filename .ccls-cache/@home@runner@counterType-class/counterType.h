#ifndef COUNTER_TYPE_H
#define COUNTER_TYPE_H
class counterType {
private:
	int counter;
public:
	counterType();
	counterType(int init_value);
	void set_counter(int value);
	int getCounter();
	void increment_counter();
	void decrement_counter();
	void print();
};
#endif // COUNTER_TYPE_H