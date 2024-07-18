#pragma once
#include "Fellows.h"

namespace Character
{ 
    class Player : public Fellows
    {
    public:
        Player();
        ~Player();

        void Init();
        void Update();
        void Draw();
        void End();
        
        float speed;
    };

}
