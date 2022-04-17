
class sample{
int a;
int b;
Public:
void setvalue()
{
a=2,b=6;}
friend float mean(sample s);
};
float mean(sample s)
{
return float (s.a +s.b)/2.0;
}
