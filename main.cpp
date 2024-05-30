#include <iostream>
#include <vector>

using namespace std;

struct Resolution { // struct to store width and height of a resolution
    int width;
    int height;
};

vector<Resolution> findResolutions(int totalPixels, int aspectWidth, int aspectHeight) { // function to find resolutions with specified aspect ratio and total pixels
    vector<Resolution> resolutions;
    for (int width = 1; width <= totalPixels; ++width) { // iterate through all possible widths
        if (totalPixels % width == 0) { // if total pixels is divisible by width
            int height = totalPixels / width;   // calculate height
            if ((width * aspectHeight) == (height * aspectWidth)) {  // check if aspect ratio matches
                Resolution res = {width, height};
                resolutions.push_back(res);
            }
        }
    }
    return resolutions;
}

int main() { // main function
    int totalPixels = 30000; // total pixels of a resolution

    cout << "Finding resolutions with 4:3 aspect ratio:\n";
    vector<Resolution> resolutions_4_3 = findResolutions(totalPixels, 4, 3); // find resolutions with 4:3 aspect ratio and total pixels
    if (resolutions_4_3.empty()) { // if no resolutions found
        cout << "No resolutions found with 4:3 aspect ratio and " << totalPixels << " pixels.\n";
    } else { // if resolutions found
        for (const auto& res : resolutions_4_3) { // print resolutions
            cout << res.width << "x" << res.height << endl; 
        }
    }

    cout << "\nFinding resolutions with 16:9 aspect ratio:\n";
    vector<Resolution> resolutions_16_9 = findResolutions(totalPixels, 16, 9); // find resolutions with 16:9 aspect ratio and total pixels
    if (resolutions_16_9.empty()) { // if no resolutions found
        cout << "No resolutions found with 16:9 aspect ratio and " << totalPixels << " pixels.\n";
    } else { // if resolutions found
        for (const auto& res : resolutions_16_9) { // print resolutions
            cout << res.width << "x" << res.height << endl; 
        }
    }

    return 0; 
}
