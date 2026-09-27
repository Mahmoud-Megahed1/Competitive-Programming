#include<iostream>
#include<fstream>
using namespace std;
 
int main() {
	ofstream fout("my_output.txt");
 
	if(fout.fail())	{
		cout<<"Can't open the output file\n";
		return 0;
	}
 
	fout << 7;
	fout.close();
	return 0;
}


