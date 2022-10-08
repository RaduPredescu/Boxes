#define PI 3.14
class box
{
    virtual void vol() = 0;
    virtual void arie() = 0;
    virtual double pret_lemn()=0;
    virtual double pret_metal()=0;
};
class cub : public box
{
    double l, pret, v, a;

public:
    explicit cub(double l) : l(l) {}
    void vol() override
    {
        v = l * l * l;
    }
    void arie() override
    {
        a = 6 * l * l;
    }
    double pret_lemn()
    {
        vol();
        arie();
        return 100+a+v;
    }
    double pret_metal()
    {
        vol();
        arie();
        return a*v;
    }
};
class sfera : public box
{
    double r, pret, v, a;

public:
    explicit sfera(double r) : r(r) {}
    void vol() override
    {
        v = 4 * PI * r * r * r / 3;
    }
    void arie() override
    {
        a = 4 * PI * r * r;
    }
    double pret_lemn()
    {
        vol();
        arie();
        return 100+a+v;
    }
    double pret_metal()
    {
        vol();
        arie();
        return a*v;
    }
};
class cilindru : public box
{
    double r, h, v, a;

public:
    explicit cilindru(double r, double h) : r(r), h(h) {}
    void vol() override
    {
        v = PI * r * r * h;
    }
    void arie() override
    {
        a = 2 * PI * r * (h + r);
    }
    double pret_lemn()
    {
        vol();
        arie();
        return 100+a+v;
    }
    double pret_metal()
    {
        vol();
        arie();
        return a*v;
    }
};