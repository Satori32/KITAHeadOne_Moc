#include <stdio.h>
#include <stdint.h>

#include "Vector.h"
struct Type {
	//type Type = NULL;
	typedef intmax_t Type;
	//type T = Type;
};

struct TypeAndValue {
	Type T;
	T.Type Value;
};

struct Variant {
	Vector<Type> Types;
};
Variant ConstructVariant(size_t N) {
	Variant V;
	V.Types = ConstructVector<Type>(N);

	return V;
 }

bool Add(Variant& In, Type& T) {
	Push(In.Types, T);

	return true;
}

struct Object {
	//type O = NULL;
	typedef intmax_t O;
	//type T = O;
	T Value = {0,};
};

struct KITAHeadOne {
	Variant V;
	Object O;
};