#include <iostream>

int main()
{

    int age1 = 57;
    int age2 = 56;
    int older_age1;

  // 1. Beispiel mit if/else Abfrage
  //  if ( age1 > age2) {

   //     older_age1 = age1;
   //     std:: cout << "Oldest Age: " << older_age1;

  //  }

  //  else {

    //    older_age1 = age2;
    //    std:: cout << "Oldest Age: " << older_age1;

    //    }
    // 2. Beispiel Ternary Operator
    //              BOOL ESPR   ?   TRUE : FALSE
    int older_age2 = age1 > age2 ? age1 : age2;

    std:: cout << "Oldest Age: " << older_age2;


    return 0;
}
