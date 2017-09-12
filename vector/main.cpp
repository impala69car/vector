#include <iostream>
#include <memory.h>
using namespace std;

struct mat4 {
	mat4() {
   memset(m, 0, sizeof(float) * 16);
   m[0] = m[5] = m[10] = m[15] = 1.0f;
	}

	float m[16];
};

struct vec3 {
	vec3(float _x, float _y, float _z) {
		x = _x;
		y = _y;
		z = _z;
	}

	float x;
	float y;
	float z;
};

vec3 multiply(mat4 matrix, vec3 vec) {
	//your code here
	vec3 vec2 = vec3(vec.x*matrix.m[0],vec.y*matrix.m[5],vec.z*matrix.m[14]);
	return vec2;
};

int main(int argc, char** argv) {
	mat4 matrix;

	matrix.m[0] = 2.0f;
	matrix.m[5] = 1.5f;
	matrix.m[14] = 1.5f;

	vec3 vec = vec3(1.0f, 2.0f, 3.0f);
	vec3 result = multiply(matrix, vec);

	cout << "x = " <<  result.x << " y = " << result.y << " z = " << result.z << std::endl;
	system("pause");
	return 0;
}
