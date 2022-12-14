#include <Eigen/Dense>
#include "../engine/geometry.h"
#include "../engine/objParser.h"
#include <iostream>
#include <string>

int main(){
	std::string path = "/home/andrew/sdcard/code/cpp3d/src/cube.obj";
	std::string s;
	fileToStr(path, s); 
	//s = "kjanseilfnaienf";
	//std::cout << s;

	std::vector<std::string> vec;
	getLines(path, vec);

	std::vector<Eigen::Vector4d> verts = parseVerts(vec);

	std::vector<int> inds = parseInds(vec);

	for(int i: inds) std::cout << i << std::endl;
}

