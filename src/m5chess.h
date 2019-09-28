void drawBitmap(int16_t x, int16_t y,
            const uint8_t *bitmap, int16_t w, int16_t h,
            uint16_t color);

void tone_volume(uint16_t frequency, uint32_t duration);
void beep(int leng);
void definecolors();
uint16_t getColor(uint8_t red, uint8_t green, uint8_t blue);
void clearstatus();
//void setup();
void initboard();
void initscreen();
void load_moves();
void gui();
void animategreen_step(int nstep, boolean hide);
void show_cont(int i,int j);
void animate_step(int nstep, boolean hide);
void show_status();
void show_fig(int i,int j);
void show_board();
boolean load_usb();
String str_step(int i);
void show_steps();
void show_menu();
boolean getdiagrowcheckw(signed char dj,signed char di);
boolean getdiagrowcheckb(signed char dj,signed char di);
boolean getstreightrowcheckw(signed char dj,signed char di);
boolean getstreightrowcheckb(signed char dj,signed char di);
boolean get_check(signed char king);
boolean getpole(signed char j,signed char i);
void addstep(signed char j1,signed char i1,signed char j2,signed char i2,signed char type);
void getrowstepsw(signed char j,signed char i,signed char dj,signed char di);
void getrowstepsb(signed char j,signed char i,signed char dj,signed char di);
void getonestepw(signed char j,signed char i,signed char dj,signed char di); //       
void getonestepb(signed char j,signed char i,signed char dj,signed char di);
void sort_variants(int from, int to); //     
void load_variants(int nstep); //       nstep
void movestep(int nstep);     
void backstep(int nstep);
void get_wrocks(int nstep);
void get_brocks(int nstep);
void add_rok(signed char j,signed char i,int nstep);
int addrowstepsw(signed char j,signed char i,signed char dj,signed char di,signed char dc); //       
int addrowstepsb(signed char j,signed char i,signed char dj,signed char di,signed char dc); //   
int addonestepw(signed char j,signed char i,signed char dj,signed char di); //       
int addonestepb(signed char j,signed char i,signed char dj,signed char di);
int activity(); //      - +  
int evaluate(int nstep); //   
void add_cut(int ind);
int quiescence(int start, int nstep, int alpha, int beta );
int alphaBeta(int start, int nstep, int alpha, int beta, int depthleft);
void kingpositions(); 
int get_endspiel(); //   
boolean is_drawn(); //   
int solve_step();
