#include <iostream>
using namespace std;

namespace TypeDefNamespace
{

	//Frozen, these typedefs are creating a alias of a string, bool, int, float, char, and double. U can create a new instance of one of those using one of the typedefs, Look in base!
	typedef bool Boolean_T;
	typedef string String_T;
	typedef int Int_T;
	typedef float Float_T;
	typedef char Char_T;
	typedef double Double_T;
}

int main()
{
	//We are going to use: using namespace TypeDefNamespace, Inside of this name space, its the exact same as: using static "namespace"
	using namespace TypeDefNamespace;
	//How we are going to create a new instance.
	Boolean_T booleantrue = true;
	Boolean_T booleanfalse = false;
	String_T text = "";
	Int_T integer = 0;
	Float_T floating = 0;
	Char_T character = 'a';
	Double_T doubles = 0.0;
	return 0; //returning the value 0
}
