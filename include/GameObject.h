#pragma once
#include "Component.h"
#include "Rect.h"
#include <vector>
#include <memory>
#include <string>

class GameObject {
    private:
        std::vector<std::unique_ptr<GameObject>> components;
    protected:
        GameObject& associated;
        bool isDead;
    public:
        Rect box, relative;
        bool started;
        double angleDeg;
        float depth;
        GameObject(GameObject& associated = *((GameObject*)nullptr));
        ~GameObject();
        virtual void Start();
        void UpdateNodes(float dt);
        void RenderNodes();
        virtual void Update(float dt);
        virtual void Render();
        virtual void Print(float x = -1, float y = -1);
        virtual bool Is(std::string type);
        virtual std::string Is();
        virtual void NotifyCollision(GameObject& other);
        bool IsDead();
        void RequestDelete();
        void AddComponent(GameObject* cpt);
        void RemoveComponent(GameObject* cpt);
        GameObject* GetComponent(std::string type);
};