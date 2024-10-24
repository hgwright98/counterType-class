#ifndef COUNTER_TYPE_H
#define COUNTER_TYPE_H

class counterType {
private:
    int counter; 
public:
    counterType();
    counterType(int intitalValue); 
    void reset(); 
    void setCounter(int value); 
    void incrementCounter(); 
    void decrementCounter(); 
    int getCounter(); 
    void print(); 
};

#endif // COUNTER_TYPE_H