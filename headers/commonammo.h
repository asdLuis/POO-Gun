#ifndef COMMONAMMO_H
#define COMMONAMMO_H

class CommonAmmo : public Ammo{
    private: 
    std::string caliber;
    public:
    CommonAmmo();
    CommonAmmo(std::string caliber);
    ~CommonAmmo() = default;
    std::string getCommonAmmo();
    void setCommonAmmo(std::string caliber);
    void displayInfo();
};

CommonAmmo::CommonAmmo(){
    caliber = "none";
}

CommonAmmo::CommonAmmo(std::string caliber) : Ammo(caliber){
    this->caliber = caliber;
}

std::string CommonAmmo::getCommonAmmo(){
    return caliber;
}

void CommonAmmo::setCommonAmmo(std::string caliber){
    this->caliber = caliber;
}

void CommonAmmo::displayInfo(){
    std::cout << "I am a bullet of " << caliber << "caliber and without an effect" << std::endl;
}

#endif