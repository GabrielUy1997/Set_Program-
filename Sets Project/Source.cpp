#include "my_Template.h"
#include "my_Template.cpp"


int main()
{
	myTemplate<int> goint; //list for ints
	myTemplate<int> goint2;// second list for ints
	myTemplate<char> gochar; //list for characrers
	myTemplate<char> gochar2;
	myTemplate<string> gostr; //list for strings
	myTemplate<string> gostr2;

	goint.addToList(5);
	goint.addToList(10);
	goint.addToList(22);
	goint.returnSizeOfList();
	goint.addToList(1);
	goint.doesItemExist(1);
	goint.doesItemExist(6);
	goint2.addToList(11);
	goint2.addToList(10);
	goint2.addToList(5);
	goint2.addToList(22);
	goint.findIntersection(goint, goint2);
	goint.addToList(5);
	goint.addToList(5);

	goint2.addToList(33);
	goint2.addToList(10);
	goint2.addToList(53);
	goint2.returnSizeOfList();
	goint.findUnion(goint, goint2);

	gochar.addToList('e');
	gochar2.addToList('e');
	gochar.findIntersection(gochar, gochar2);
	gostr.addToList("eheheh");
	gostr2.addToList("hello world");
	gostr2.addToList("eheheh");
	gostr2.displayContents();
	gostr.removeFromList("eheheh");

	goint.displayContents();
	goint2.displayContents();
	gochar.returnSizeOfList();
	gostr.returnSizeOfList();
	gochar.displayContents();
	gostr.displayContents();
	goint.emptySet();
	goint.displayContents();

	return 0;
}
