class DynArray  {
public:
	DynArray( /* in */  int arrSize );
       // Constructor.
		// PRE:  arrSize is assigned
		// POST:  IF arrSize >= 1 && enough memory THEN
		// 	   Array of size arrSize is created with 	//        all elements == 0  ELSE error message.

	DynArray( const DynArray& otherArr );
		// Copy constructor.
		// POST: this DynArray is a deep copy of otherArr
		// Is implicitly called for initialization.

	~DynArray( );
		// Destructor.
		// POST: Memory for dynamic array deallocated.

	int  ValueAt ( /* in */ int i )  const;
		// PRE:  i is assigned.
		// POST: IF 0 <= i < size of this array THEN
		// 	   FCTVAL == value of array element at index i
		// 	   ELSE error message.

	void  Store ( /* in */ int val,  /* in */ int i ) ;
		// PRE:  val and i are assigned
		// POST: IF 0 <= i < size of this array THEN
		// 	   val is stored in array element i
		// 	   ELSE error message.

	void  CopyFrom ( /* in */ DynArray otherArr);
		// POST:  IF enough memory THEN
       //            new array created (as deep copy)
       //            with size and contents
       //            same as otherArr
		//        ELSE error message.

private:
	int*  arr ;
	int   size ;
};

