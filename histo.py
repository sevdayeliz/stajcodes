#!/usr/bin/env python
#-*- coding:utf-8 -*-

import libPyROOT
import ROOT

#from ROOT import TFile, GetListOfKeys
f=TFile('/home/cakir/TMVA-v4.2.0/test/100lumi_light_50PU.root') 
mylist=f.GetListOfKeys()
#keylist=[]
#for en(mylist):	
#if mylist[i]==TH1F:
#		keylist.append(GetKeyNames(mylist[i]))
#	else:
#		continue
#for j in len(keylist):
#	cdef readfile3(keylist[j])
print mylist
