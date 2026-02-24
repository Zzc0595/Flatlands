class Vector{
public:
    double x,y;
    Vector(double ix,double iy): x(ix),y(iy){}
    
};

Vector operator+ (const Vector& va, const Vector& vb) {
    return Vector(va.x+vb.x, va.y+vb.y);
}

Vector operator- (const Vector& va, const Vector& vb) {
    return Vector(va.x-vb.x, va.y-vb.y);
}

void operator+= (Vector& va, Vector& vb) {
    va.x += vb.x;
    va.y += vb.y;
}

