typedef union {
    struct { unsigned char r,g,b,n ; } r_g_b_n ;
    unsigned char rgb[4] ;
    unsigned i_rgb;
} RGB ;

RGB make_RGB(unsigned char r, unsigned char g , unsigned char b) {
    RGB res; 
    res.r_g_b_n.r = r; 
    res.r_g_b_n.g = g;
    res.r_g_b_n.b = b;
    res.r_g_b_n.n = 0;
    return res;
}

static_assert(sizeof(RGB)==4,"bad RGB size not 4");
static_assert(sizeof(unsigned)==4,"bad i_RGB size not 4");

struct Image 
{ 
  Image (unsigned M, unsigned N) : M_(M) , N_(N) , v_(M*N) {}
  const RGB* tab() const {return & v_[0] ; }
  RGB* tab() {return & v_[0] ; }
  unsigned M_ , N_;
  std::vector<RGB> v_;
};

void FillRandom(Image & im) {
    std::uniform_int_distribution<unsigned> rnd(0,_16M-1);
    std::mt19937 rng;
    const int N = im.M_ * im.N_;
    RGB* tab = im.tab();
    for (int i=0; i<N; i++) {
        unsigned r = rnd(rng) ;
        *tab++ = make_RGB(  (r & 0xFF) , (r>>8 & 0xFF), (r>>16 & 0xFF) ) ;
    }
}

size_t Count(const Image & im) {
const int N = im.M_ * im.N_;
std::vector<char> count(_16M,0);
const RGB* tab = im.tab();
#pragma omp parallel 
{
#pragma omp for 
for (int i=0; i<N; i++) {
    count[ tab->i_rgb ] = 1 ;
    tab++;
    }
}
size_t nColors = 0 ;
#pragma omp parallel 
{
#pragma omp for 
for (int i = 0 ; i<_16M; i++) nColors += count[i];
}
return nColors;
}

int main() {
    Image im(4096,4096);
    FillRandom(im);
    typedef boost::chrono::high_resolution_clock hrc;
    auto start = hrc::now();

    std::cout << " # colors " << Count(im) << std::endl ; 

    boost::chrono::duration<double> sec  = hrc::now() - start;
    std::cout << " took " << sec.count() << " seconds\n";
    return 0;
}
