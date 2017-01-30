#include<iostream>
#include<TFile.h>

void  readfile2()
{
TFile *file=new TFile("/home/cakir/TMVA-v4.2.0/test/100lumi_light_50PU.root");
TH1D *histo= (TH1D*)file->Get("hHT;1");
histo->Draw();
}

