class stack
{
private:
	struct element
	{
		int value;
		element* prevElement;
	};

	element* root = new element;

public:

	void addElement(int value)
	{
		element* newEl = new element;
		newEl->value = value;
		newEl->prevElement = root;
		root = newEl;	// root staje siê nowym elementem, a nowy
						// element posiada adres "starego" roota
	}

	void remElement()
	{
		element* temp = root;
		root = root->prevElement;
		delete temp;
	}

	int top()
	{
		return root->value;
	}
};