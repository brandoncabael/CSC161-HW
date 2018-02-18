Review the General Programming Assignment instructions.
Do not change anything in the supplied Ch12_Ex9.cpp except to add documentation and your name.
Please use the file names listed below since your file will have the following components:
Ch12_Ex9.cpp given file
<!-- //Data:  18 42 78 22 42 5 42 57 -->
<!--  -->
<!-- #include <iostream> -->
<!-- #include "unorderedArrayListType.h" -->
<!--  -->
<!-- using namespace std; -->
<!--  -->
<!-- int main()  -->
<!-- { -->
<!-- unorderedArrayListType intList(25); -->
<!--  -->
    <!-- int number; -->
<!--  -->
    <!-- cout << "Enter 8 integers: "; -->
<!--  -->
    <!-- for (int count = 0; count < 8; count++)  -->
<!-- { -->
<!-- cin >> number; -->
<!-- intList.insertEnd(number); -->
<!-- } -->
<!--  -->
    <!-- cout << endl;  -->
<!-- cout << "intList: ";  -->
<!-- intList.print();  -->
<!-- cout << endl; -->
<!--  -->
    <!-- cout << "The smallest number in intList: "  -->
<!-- << intList.min() << endl;  -->
<!-- system("pause"); -->
<!-- return 0;  -->
<!-- } -->
<!--  -->
<!-- arrayListType.h  -->
<!-- arrayListType.Imp.cpp  -->
<!-- unorderedArrayListType.h  -->
<!-- unorderedArrayListTypeImp.cpp -->

Add the function min as an abstract function to the class arrayListType to return the smallest element of the list.
Also, write the definition of the function min in the class unorderedArrayListType and write a program to test this function.