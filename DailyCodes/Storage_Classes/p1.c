/*	Program 1 : 
 *
 *	Topic : Storage Classes.
 *
 *		Storage Classes sangto ki variable la jaga kuthe milel.
 *
 *		4 Important Points :-
 *
 *			1] Memory kuthe milel : RAM ki CPU
 *			2] Default Value (auto, register) = Garbage value
 *					 (static, extern) = 
 *			3] Lifetime (variable kiti time zivant rahu shakto)
 *				(function - scope)
 *				(static - file)
 *				(extern - Full scope)
 *
 *
 *		It has 4 types :-
 *
 *		1] auto
 *		2] register
 *		3] static
 *		4] extern
*/

//	1 - auto

#include<stdio.h>

void main(){

	int x = 10;

	printf("%d\n", x);
}
