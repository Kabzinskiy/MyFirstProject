#include "releaseOfCharacterMemory.h"

void releaseOfCharacterMemory(Character* memoryForFree)

{
	delete memoryForFree;
	memoryForFree = nullptr;
}