#include "header.h"

using namespace std;

class State
{
public:
    virtual void write() const = 0;
};

class StateOne : public State
{
public:
    virtual void write() const override
    {
        cout << "State one." << endl;
    }
};

class StateTwo : public State
{
public:
    virtual void write() const override
    {
        cout << "State two." << endl;
    }
};

class Context
{
private:
    int state;
    State* ptr;

    void drawObject()
    {
        ptr->write();
    }

public:
    Context() : state(0), ptr(NULL) {}

    int setState(int state_)
    {
        state = state_;

        if (ptr)
        {
            delete ptr;
            ptr = NULL;
        }

        switch (state)
        {
        case 1: ptr = new StateOne; break;
        case 2: ptr = new StateTwo; break;
        default: return 0;
        }

        drawObject();
    }
};