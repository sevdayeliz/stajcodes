#include<iostream>
#include<TFile.h>
#include<TString.h>
#include<TH1F.h>
#include<TImage.h>
#include<TCanvas.h>
void  readfile3(const char* name)
{
TFile *file=new TFile("/home/cakir/TMVA-v4.2.0/test/100lumi_light_50PU.root");
TCanvas *c = new TCanvas;
TH1F *histo= (TH1F*)file->Get(name);
TImage *img=TImage::Create();
histo->Draw(name);
//histo->SaveAs("/home/nar/Desktop/Homework/rootcodes/deneme.png");
img->FromPad(c);
img->WriteImage("/home/nar/Desktop/Homework/rootcodes/deneme.png");


}

