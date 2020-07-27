class Point {
private:
    int y;
public:
    Point() { this->y=0; }
    const inline int getY() { return this->y; }
    inline void setY(int y) { this->y = y; }
};
