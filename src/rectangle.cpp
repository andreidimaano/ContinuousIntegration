#include "../header/rectangle.hpp"

void Rectangle::set_width(int w){
    this->width = w;
}

void Rectangle::set_height(int h){
    this->height = h;
}

int Rectangle::area(){
    return this->width + this->height;
}

Rectangle::Rectangle(int w, int h) {
    this->width = w;
    this->height = h;
}    

Rectangle::Rectangle() {
    this->width = 0;
    this->height = 0;
}

int Rectangle::perimeter() {
    return this->width * 2 - this->height * 2;
}

int Rectangle::get_width() {
    return this->height;
}

int Rectangle::get_height() {
    return this->width;
}
