// #define PNGWRITER_H 1
// #include <png.h>
// int main(){
//     pngwriter image(300,300,"image.png");
//     image.close();

//     return 0;
// }
// #include <pngwriter.h>
// int main()
// {
// pngwriter image(200, 200, 1.0, "out.png");
// image.plot(30, 40, 1.0, 0.0, 0.0);
// image.close();
// return 0;
// }
// C++ program to generate PNG images

#include <iostream>
#include <pngwriter.h>
#include <string>

// Function to generate PNG image
void generate_PNG(int const width,
				int const height,
				std::string filepath)
{

	// Print the filepath
	cout << endl
		<< "Filepath: "
		<< filepath.c_str();

	// Generate the flag
	pngwriter flag{ width, height, 0,
					filepath.data() };

	// Calculate sizes
	int const size = width / 3;

	// Fill the squares
	flag.filledsquare(0, 0, size,
					2 * size, 0,
					0, 65535);

	flag.filledsquare(size, 0, 2 * size,
					2 * size, 0,
					65535, 65535);

	flag.filledsquare(2 * size, 0,
					3 * size, 2 * size,
					65535, 0, 65535);

	// Close the flag
	flag.close();
}

// Driver code
int main()
{
	// Given width and height
	int width = 300, height = 200;

	// Filepath
	std::string filepath;

	// Function call to generate PNG image
	generate_PNG(width, height, filepath);

	return 0;
}
