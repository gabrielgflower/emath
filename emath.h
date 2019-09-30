//calcula a raiz quadrada
static float squareRoot(float n)
{   float x = n;
    float y = 1;
    double e = 0.000001;
    while(x - y > e)
    {   x = (x + y)/2;
        y = n/x;}
    return x;}

//aplicações lei de ohm;

// cálculos de potência
float pot_1(float volts, float amperes){
    return volts*amperes;}
float pot_2(float ohms, float amperes){
    return ohms*(amperes*amperes);}
float pot_3(float volts, float ohms){
    return (volts*volts)/ohms;}
    
//cálculos de corrente
float corrente_1(float volts, float ohms){
    return volts/ohms;}
float corrente_2(float watts, float volts){
    return watts/volts;}
float corrente_3(float watts, float ohms){
    float corrente = watts/ohms;
    return squareRoot(corrente);}
    
//cálculos de resistência
float resistenc_1(float volts, float watts){
    return (volts*volts)/watts;}
float resistenc_2(float volts, float amperes){
    return volts/amperes;}
float resistenc_3(float watts, float amperes){
    return watts/(amperes*amperes);}
    
//cálculos de tensão
float tensao_1(float watts, float amperes){
    return watts/amperes;}
float tensao_2(float watts, float ohms){
    float tensao = watts*ohms;
    return squareRoot(tensao);}
float tensao_3(float amperes, float ohms){
    return amperes*ohms;}
    