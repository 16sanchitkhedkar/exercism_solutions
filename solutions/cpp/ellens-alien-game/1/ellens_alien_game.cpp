namespace targets {
// TODO: Insert the code for the alien class here
class Alien {
    public:
        Alien (int x, int y) {
            x_coordinate = x;
            y_coordinate = y;
        }
        int get_health() {
            return health;
        }
    int hit() {
        if (health > 0) {
            return --health;
        }
        return 0;
    }
    bool is_alive() {
        if (health > 0) {
            return true;
        }
        return false;
    }
    int teleport(int x_new, int y_new) {
        x_coordinate = x_new;
        y_coordinate = y_new;
        return true;
    }
    bool collision_detection(Alien alien2) {
        if(x_coordinate == alien2.x_coordinate && y_coordinate == alien2.y_coordinate) {
            return true;
        }
        return false;
    }
    int x_coordinate{}, y_coordinate{};
    private:
        int health{3};
};
}  // namespace targets
