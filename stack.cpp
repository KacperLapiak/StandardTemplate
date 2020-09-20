class Stack
{
private:
	struct element
	{
		int value;
		element* nextElement;
	};

	element* root = new element;

public:
	void addElement(int value)
	{
		element* newEl = new element;
		newEl->value = value;
		newEl->nextElement = root;
		root = newEl;	// root staje siê nowym elementem, a nowy
						// element posiada adres "starego" roota
	}

	void remElement()
	{
		element* temp = root;
		root = root->nextElement;
		delete temp;
	}

	int top()
	{
		return root->value;
	}
};