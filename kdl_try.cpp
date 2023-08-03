#include "kuka_iiwa.h"

#include <iostream>
#include <kdl/chainiksolverpos_lma.hpp>
#include <kdl/chainfksolverpos_recursive.hpp>
#include <kdl/utilities/utility.h>

int main(){

    KDL::Chain chain;

    chain = KDL::KukaIiwa7_DH();
    KDL::ChainFkSolverPos_recursive fk_solver(chain);

    KDL::ChainIkSolverPos_LMA solver(chain);
    KDL::JntArray in(7), out(7);
    KDL::Frame goal;
    
    in.data[0] = 3.1 ;

    in.data[1] = 0;

    in.data[2] = 0;

    in.data[3] = -1.57;

    in.data[4] = 0;

    in.data[5] = 1.57;

    in.data[6] = 0;

    fk_solver.JntToCart(in, goal);

    std::cout << " Start OF FW KINEMATICS " << std::endl;


    for(size_t i = 0; i< 3; i++)
        std::cout<<goal.p[i]<<std::endl;

    std::cout<<std::endl;

    for(size_t i = 0; i<9; i++){

        std::cout<<goal.M.data[i] << std::endl;

    }
    goal.p[0] = - goal.p[0];


    std::cout << " END OF FW KINEMATICS " << std::endl;

    solver.CartToJnt(in, goal, out);

    for(size_t i = 0; i<7; i++){
        std::cout << out.data[i] << std::endl;
    }

    fk_solver.JntToCart(out, goal);

    std::cout << "------------------------" << std::endl;
    for(size_t i = 0; i< 3; i++)
        std::cout<<goal.p[i]<<std::endl;

    std::cout<<std::endl;

    for(size_t i = 0; i<9; i++){

        std::cout<<goal.M.data[i] << std::endl;

    }
    return 0;
}


