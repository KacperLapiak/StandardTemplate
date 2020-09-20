#include "header.h"

using namespace std;

class ConcreteBuilder;

class Product
{
private:
    vector<string> parts_;

public:
    void addPart(string part) {
        parts_.push_back(part);
    }

    void showProduct() {
        for (string i : parts_)
            cout << i << endl;
    }

};

class Builder
{
public:
    virtual ~Builder() {}
    virtual ConcreteBuilder* ProducePartA() = 0;
    virtual ConcreteBuilder* ProducePartB() = 0;
    virtual ConcreteBuilder* ProducePartC() = 0;
};

class ConcreteBuilder : public Builder
{
private:
    Product* product_;

public:
    ConcreteBuilder() {
        this->Reset();
    }

    ~ConcreteBuilder() {
        delete product_;
    }

    void Reset() {
        product_ = new Product();
    }

    ConcreteBuilder* ProducePartA() override {
        product_->addPart("Part A");
        return this;
    }

    ConcreteBuilder* ProducePartB() override {
        product_->addPart("Part B");
        return this;
    }

    ConcreteBuilder* ProducePartC() override {
        product_->addPart("Part C");
        return this;
    }

    Product* GetProduct() {
        Product* result = product_;
        this->Reset();
        return result;
    }

};

class Director
{
private:
    Builder* builder_;

public:
    void setBuilder(Builder* builder) {
        builder_ = builder;
    }

    void BuildSpecificProduct()
    {
        builder_->ProducePartA();
        builder_->ProducePartC();
    }
};