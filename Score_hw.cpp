#include<iostream>
#include<string>
using namespace std ;
int main()
{
	float fq,sq,tq,mt,fin,q_av,total ;

	cout << "==========QUIZZES==========" << endl ;
	cout << "Enter first quizz  (10) : "   ;
	cin  >> fq  ;
	cout << "Enter second quizz (10) : "   ;
	cin  >> sq  ;
	cout << "Enter third quizz  (10) : "   ;
	cin  >> tq  ;
	cout << "==========MID-TERM==========" << endl ;
	cout << "Enter mid term (40) : "       ;
	cin  >> mt  ;
	cout << "========== FINAL ==========" << endl  ;
	cout << "Enter final (50) : "          ;
	cin  >> fin ;

	q_av = (fq+sq+tq)/3  ;
	total = q_av+mt+fin  ;

	cout << "Quizz total : " << q_av << endl ;
	cout << "Mid term : " << mt << endl      ;
	cout << "Total : " << total << endl      ;
	cout << "You score is " << ((total>=50)? "PASS" : "FAIL") << endl ;

	system("pause") ;
	return(0)       ;
				
}

