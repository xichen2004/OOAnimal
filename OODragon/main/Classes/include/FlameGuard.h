/*
 * FlameGuard.h
 *
 *  Created on: 2014-11-26
 *      Author: brendan
 */

#ifndef FLAMEGUARD_H_
#define FLAMEGUARD_H_

#include "FireBreath.h"
#include "Whelp.h"

Class(FlameGuard) extends(Whelp) uses(FireBreath)
	Data
		int magicPower;
	Methods
End;

#endif /* FLAMEGUARD_H_ */