#pragma once
#include "State.h"
#include "GameObject.h"
#include "Sprite.h"
#include "Music.h"
#include "TileSet.h"
#include "TileMap.h"
#include "Camera.h"
#include "CameraFollower.h"
#include "Alien.h"
#include "PenguinBody.h"
#include "RigidBody.h"
#include "TerrainBody.h"

#include "Collider.h"
#include "Collision.h"
#include "GameData.h"
#include "EndState.h"
#include "InputManager.h"
#include "Vec2.h"
#include <vector>
#include <memory>
#include <map>

class Stage4 : public State {
private:

    TileSet* tileSet;
    Music backgroundMusic;
    
public:
    Stage4();
    ~Stage4();
    void LoadAssets();
    void Start();
    void Update(float dt);
    void Render();
    void Pause();
    void Resume();

    void Collision();
    void CollideVectors(std::vector<std::shared_ptr<GameObject>>&, std::vector<std::shared_ptr<GameObject>>&);
 
};