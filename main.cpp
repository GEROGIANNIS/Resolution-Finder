#include <iostream>
#include <vector>

using namespace std;

struct Resolution { // struct to store width and height of a resolution
    int width;
    int height;
};

vector<Resolution> findResolutions(int totalPixels) { // function to find resolutions with 4:3 aspect ratio and total pixels
    vector<Resolution> resolutions;
    for (int width = 1; width <= totalPixels; ++width) { // iterate through all possible widths
        if (totalPixels % width == 0) { // if total pixels is divisible by width
            int height = totalPixels / width;   // calculate height
            if ((width * 3) == (height * 4)) {  // check if aspect ratio is 4:3
                Resolution res = {width, height};
                resolutions.push_back(res);
            }
        }
    }
    return resolutions;
}

int main() { // main function
    int totalPixels = 30000; // total pixels of a resolution
    vector<Resolution> resolutions = findResolutions(totalPixels); // find resolutions with 4:3 aspect ratio and total pixels

    if (resolutions.empty()) { // if no resolutions found
        cout << "No resolutions found with 4:3 aspect ratio and " << totalPixels << " pixels.\n";
    } else { // if resolutions found
        cout << "Resolutions with 4:3 aspect ratio and " << totalPixels << " pixels:\n"; 
        for (const auto& res : resolutions) { // print resolutions
            cout << res.width << "x" << res.height << endl; 
        }
    }

    return 0; 
}
