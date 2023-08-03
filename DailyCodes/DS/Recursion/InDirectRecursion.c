/*	Program :
 *
 *	Indirect Recursion : Ekada function madhe dusrya function la call karne
 *			     ani dusrya madhun pahila function la parat yene
 *			     mhnje ithe loop tyayar zala yala mhntat Indirect Recursion			 */

//	Pseudo Code

void fun1(){
	
	fun2();
}

void fun2(){

	fun1();
}
