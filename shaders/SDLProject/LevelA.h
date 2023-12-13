#include "Scene.h"

class LevelA : public Scene {
public:
    int ENEMY_COUNT = 1;
    int font_id;
    bool alive = true;
    ~LevelA();
    void checkEnemyCollision();
    void initialise() override;
    void update(float delta_time) override;
    void render(ShaderProgram* program) override;
};
