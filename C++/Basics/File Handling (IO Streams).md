```cpp
#include <iostream>

#include <string>

#include <fstream>

  

int main()

{

  

    std::string var = "This a string";   // Making a variable named "var" and putting a string in it

  

    std::ofstream ThisOneIsForOutput("Sample.txt");      // Opening a file named "Sample.txt with a name "ThisOneIsForOutput"

  

    ThisOneIsForOutput << var;     // Writing the string to the txt file

  

    ThisOneIsForOutput.close();       // NEVER FORGET to close the file after you're done.

  
  

 //----------------For reading from a file-----------------------------------------

  
  

    std::string var2;

  

    std::ifstream ThisOneIsForInput("Sample.txt");

  

    // ThisOneIsForInput >> var2;      // Will only read one word

  

    std::getline(ThisOneIsForInput, var2);     // This will read the full line

  

    std::cout<<var2;

  

    return 0;

  
  

}
```


## Sequential vs Random Access:

### Sequential File:

	Data stored and read sequentially
	
	To read a specific record, it is required to 
	read all records sequentially before it
	
	Requires more time to read

### Random Access File:

	Data read randomly
	
	To read a record directly, it can be read
	
	Less read time

 Functions:

`seekg()` - Seek Get

This function moves the **"get"** or **read** pointer. After you use `seekg()`, the next read operation will happen at the new location you've specified.

`seekp()` - Seek Put

This function moves the **"put"** or **write** pointer. After you use `seekp()`, the next write operation will happen at the new location.

////////////////////////////////////////////

 `tellg()` - Tell Get

This function tells you the position of the **"get"** or **read** pointer. Its value is the number of bytes from the beginning of the file where the next read operation will start.

 `tellp()` - Tell Put

This function tells you the position of the **"put"** or **write** pointer. Its value is the number of bytes from the beginning of the file where the next write operation will start.

E.g.: 

```cpp

#include <iostream>
#include <fstream>

using namespace std;

int main(){

// Open a new file for doing input/output operations upon the content in the file (assumes a length of zero on opening).

    fstream myFile("myfile.txt", ios::in | ios::out | ios::trunc) ;
    
    // Add some text to the file:

	myFile << "Hello World" ;    // Now the file pointer is at the end of the text
	
	// 2. Seek the GET (read) pointer to the 0th position from the beginning. 
	myFile.seekg(0, std::ios::beg); 
	
	// 3. Seek the PUT (write) pointer to the 6th position from the beginning. 
	myFile.seekp(6, std::ios::beg);
	
	cout << "After seeking, tellp() is at: " << myFile.tellp() << endl;
	
	// 4. Overwrite the text from the new position.
	myFile << "C++"; // The file now contains: "Hello C++ld"
	
	cout << "After overwrite, tellp() is at: " << myFile.tellp() << endl;
	cout << "After overwrite, tellg() is at: " << myFile.tellg() << endl;
	
	myFile.close();
	
	return 0;
	

}
    


```

## Working with binary files

```cpp
#include <iostream>
#include <fstream>

using namespace std;

int main(){

fstream var;

unsigned short X = 80085

var.open("Binary_File.dat", ios::out | ios::binary);

if(var){

// Casting the value of X into a character because
// And writing it into the stream ("var")

var.write(reinterpret_cast<char*>(&X) sizeof(unsigned short));
var.close();

}

else{
	cout << "Error opening file \n";

}

```