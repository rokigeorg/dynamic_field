#pragma once
class CDynamischesFeld {
protected:
	int size;
	double *first;
public:
	CDynamischesFeld(void);
	~CDynamischesFeld(void);
	CDynamischesFeld(int _size);
	void setLength(int _newSize);
	void incrementLength(void);
	CDynamischesFeld & operator=(const CDynamischesFeld & _feld);
	void fill(int start = 0);
	void ausgeben(void) const;
};

