
/*
Given the coordinates of four points in 2D space, return whether the four points could construct a square.
The coordinate (x,y) of a point is represented by an integer array with two integers.

Example:
Input: p1 = [0,0], p2 = [1,1], p3 = [1,0], p4 = [0,1]
Output: True
*/

class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) { //It's too complicated. I can't come up with a better idea
        if(p1==p2||p1==p3||p1==p4) return false;
        vector<int>vec;
        vector<int>vec1;
        vector<int>vec2;
        vector<int>vec3;
        vector<int>vec4;
        vector<int>vec5;
        int length1,length2,length3,length4,judge1,judge2,judge3;
        vec.push_back(p2[0]-p1[0]);
        vec.push_back(p2[1]-p1[1]);
        vec2.push_back(p3[0]-p1[0]);
        vec2.push_back(p3[1]-p1[1]);
        vec4.push_back(p3[0]-p2[0]);
        vec4.push_back(p3[1]-p2[1]);
        vec1.push_back(p4[0]-p3[0]);
        vec1.push_back(p4[1]-p3[1]);
        vec3.push_back(p4[0]-p1[0]);
        vec3.push_back(p4[1]-p1[1]);
        vec5.push_back(p4[0]-p2[0]);
        vec5.push_back(p4[1]-p2[1]);
        length1=vec[0]*vec[0]+vec[1]*vec[1];
        length2=vec1[0]*vec1[0]+vec1[1]*vec1[1];
        length3=vec4[0]*vec4[0]+vec4[1]*vec4[1];
        length4=vec3[0]*vec3[0]+vec3[1]*vec3[1];
        judge1=vec3[0]*vec4[0]+vec3[1]*vec4[1];
        judge2=vec2[0]*vec5[0]+vec2[1]*vec5[1];
        judge3=vec1[0]*vec[0]+vec1[1]*vec[1];
        return ((length1==length2&&length3==length4)&&(judge1==0||judge3==0||judge2==0));
    }
};