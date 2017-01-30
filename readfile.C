#include<iostream>
#include<TFile.h>
#include<TTree.h>
#include<Tbranch.h>
#include<Tleaf.h>

void  readfile()
{
TFile *file=new TFile("/home/cakir/Programs/Delphes-3.3.0/Onur_W3Jets.root");
TTree *mytree=(TTree*) file->Get("Delphes");
Tbranch *branch=(Tbranch*) mytree->GetBranch("Electron");
//TH1F *histo= new TH1F("histo","pt values of electrons");
//Tleaf *leaf=(Tleaf*) branch.GetLeaf("Electron.Pt");

//histo->Draw();
}
