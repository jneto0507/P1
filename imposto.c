#include <stdio.h>

int main()
{
    int ali;
    double cot, vp, vf;
    scanf("%lf %d %lf %lf", &cot, &ali, &vp, &vf);
    if((vp * ali) >= 2500.0)
    {
        double vpc = vp * cot;
        double vfc = vf * cot;
        double vtotal1 = vfc + vpc;
        double vimp = vpc * 0.6;
        double icms = ((vpc + vimp) / (1 - ali)) * ali;
        double vimptotal = vimp + icms;
        printf("%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\nImpostos calculados sem o frete\n", cot, vpc, vfc, vtotal1, vimp, icms, vimptotal, vtotal1 + vimptotal);
    }
    else
    {
        double vpc = vp * cot;
        double vfc = vf * cot;
        double vtotal1 = vfc + vpc;
        double vimp = vtotal1 * 0.6;
        double icms = ((vpc + vfc + vimp) / (1 - ali)) * ali;
        double vimptotal = vimp + icms;
        printf("%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\nImpostos calculados com o frete\n", cot, vpc, vfc, vtotal1, vimp, icms, vimptotal, vtotal1 + vimptotal);
    }
    return 0;
}