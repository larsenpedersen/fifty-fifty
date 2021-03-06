//
// Created by Magnus Nordlander on 2021-02-06.
//

#include "BaseViewController.h"

void BaseViewController::render(U8G2 display) {
    display.clearBuffer();
    display.setFont(u8g2_font_ncenB08_tr);
    display.drawStr(16, 16, "Override me");
    display.sendBuffer();
}

void BaseViewController::handleRotation(int encoderDiff) {

}

void BaseViewController::handleButtonState(bool state) {

}

void BaseViewController::viewWillBePushed(NavigationController *) {

}

void BaseViewController::viewWasPushed(NavigationController * nav) {
    this->navigationController = nav;
}

void BaseViewController::viewWillBePopped(NavigationController *) {
    this->navigationController = nullptr;
}

void BaseViewController::viewWasPopped(NavigationController *) {

}

void BaseViewController::tick() {

}

void BaseViewController::subviewWillBePushed(NavigationController *, BaseViewController *) {

}

void BaseViewController::subviewWasPushed(NavigationController *, BaseViewController *) {

}

void BaseViewController::subviewWasPopped(NavigationController *, BaseViewController *) {

}
