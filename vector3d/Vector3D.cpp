#include <iostream>
#include "Vector3D.h"
#include <cmath>
    Vector3D::Vector3D(){
        this -> m_vector.at(0) = 0.0;
        this -> m_vector.at(1) = 0.0;
        this -> m_vector.at(2) = 0.0;
        return;
    }
    Vector3D::Vector3D(double dx, double dy, double dz){
        this -> m_vector.at(0) = dx;
        this -> m_vector.at(1) = dy;
        this -> m_vector.at(2) = dz;
        return;
    }
    Vector3D::~Vector3D(){}
    void Vector3D::display(){
        std::cout << this -> m_vector.at(0) << " x, " << this->m_vector.at(1) << "y, " << this-> m_vector.at(2) << " z " << std::endl;

    }
    double Vector3D::dot(Vector3D vec3D){
        double dDotProduct = 0.0;
        for (unsigned int i = 0; i < this->m_vector.size(); i++){
            dDotProduct += this->m_vector.at(1) * vec3D.m_vector.at(i);
        }
    }
int main(){
    double const PI = 3.14159265;

    double Fx = 10.0 * std::cos(45 * PI/180.0);
    double Fy = 10.0 * std::sin(45 * PI / 180.0);
    double Fz = 0;

    double Dx = 10.0;
    double Dy = 0.0;
    double Dz = 0.0;

    Vector3D vec3dForce(Fx,Fy,Fz);
    Vector3D vec3dDisplacement(Dx,Dy,Dz);

    vec3dForce.display();
    vec3dDisplacement.display();

    double dWork = vec3dForce.dot(vec3dDisplacement);
    std::cout << "Work: " << dWork << std::endl;  


}#include <iostream>
#include "Vector3D.h"
#include <cmath>
    Vector3D::Vector3D(){
        this -> m_vector.at(0) = 0.0;
        this -> m_vector.at(1) = 0.0;
        this -> m_vector.at(2) = 0.0;
        return;
    }
    Vector3D::Vector3D(double dx, double dy, double dz){
        this -> m_vector.at(0) = dx;
        this -> m_vector.at(1) = dy;
        this -> m_vector.at(2) = dz;
        return;
    }
    Vector3D::~Vector3D(){}
    void Vector3D::display(){
        std::cout << this -> m_vector.at(0) << " x, " << this->m_vector.at(1) << "y, " << this-> m_vector.at(2) << " z " << std::endl;

    }
    double Vector3D::dot(Vector3D vec3D){
        double dDotProduct = 0.0;
        for (unsigned int i = 0; i < this->m_vector.size(); i++){
            dDotProduct += this->m_vector.at(1) * vec3D.m_vector.at(i);
        }
    }
int main(){
    double const PI = 3.14159265;

    double Fx = 10.0 * std::cos(45 * PI/180.0);
    double Fy = 10.0 * std::sin(45 * PI / 180.0);
    double Fz = 0;

    double Dx = 10.0;
    double Dy = 0.0;
    double Dz = 0.0;

    Vector3D vec3dForce(Fx,Fy,Fz);
    Vector3D vec3dDisplacement(Dx,Dy,Dz);

    vec3dForce.display();
    vec3dDisplacement.display();

    double dWork = vec3dForce.dot(vec3dDisplacement);
    std::cout << "Work: " << dWork << std::endl;  


}
