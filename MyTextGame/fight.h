#pragma once
#include "character.h"
#include "monstr.h"
#include <string>
string yourDialog();
string enemyDialog();
void fight( Character&, const Monstr& );
