#include "TCanvas.h"
#include "TEfficiency.h"
#include "TGraphAsymmErrors.h"
#include "TH1F.h"
#include "TLegend.h"
#include "TLatex.h"

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HLT_L1Tau_Delayedjet3p5nsthreshold_efficiency()
{
//=========Macro generated from canvas: FigExample/FigExample
//=========  (Wed Dec 17 00:08:15 2025) by ROOT version 6.26/11
   TCanvas *FigExample = new TCanvas("FigExample", "FigExample",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   FigExample->Range(-1.885714,-0.1791972,13.82857,1.31993);
   FigExample->SetFillColor(0);
   FigExample->SetBorderMode(0);
   FigExample->SetBorderSize(2);
   FigExample->SetTickx(1);
   FigExample->SetTicky(1);
   FigExample->SetLeftMargin(0.12);
   FigExample->SetRightMargin(0.04);
   FigExample->SetTopMargin(0.08);
   FigExample->SetBottomMargin(0.12);
   FigExample->SetFrameFillStyle(0);
   FigExample->SetFrameBorderMode(0);
   FigExample->SetFrameFillStyle(0);
   FigExample->SetFrameBorderMode(0);
   Double_t xAxis3[11] = {0, 0.25, 0.5, 1, 1.5, 2, 2.5, 3, 4, 6, 12}; 
   
   TEfficiency * den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v3_clone3 = new TEfficiency("eff2023"," ",10,xAxis3);
   
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v3_clone3->SetConfidenceLevel(0.683);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v3_clone3->SetBetaAlpha(1);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v3_clone3->SetBetaBeta(1);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v3_clone3->SetWeight(0.1666667);
   //den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v3_clone3->SetStatisticOption(1);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v3_clone3->SetPosteriorMode(0);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v3_clone3->SetShortestInterval(0);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v3_clone3->SetTotalEvents(0,56537);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v3_clone3->SetPassedEvents(0,135);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v3_clone3->SetTotalEvents(1,31436);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v3_clone3->SetPassedEvents(1,56);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v3_clone3->SetTotalEvents(2,30955);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v3_clone3->SetPassedEvents(2,37);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v3_clone3->SetTotalEvents(3,62632);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v3_clone3->SetPassedEvents(3,58);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v3_clone3->SetTotalEvents(4,85522);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v3_clone3->SetPassedEvents(4,75);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v3_clone3->SetTotalEvents(5,25605);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v3_clone3->SetPassedEvents(5,51);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v3_clone3->SetTotalEvents(6,10941);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v3_clone3->SetPassedEvents(6,53);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v3_clone3->SetTotalEvents(7,9100);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v3_clone3->SetPassedEvents(7,56);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v3_clone3->SetTotalEvents(8,11679);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v3_clone3->SetPassedEvents(8,929);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v3_clone3->SetTotalEvents(9,3816);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v3_clone3->SetPassedEvents(9,1793);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v3_clone3->SetTotalEvents(10,3563);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v3_clone3->SetPassedEvents(10,2367);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v3_clone3->SetTotalEvents(11,13);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v3_clone3->SetPassedEvents(11,12);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v3_clone3->SetFillColor(19);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v3_clone3->SetLineWidth(2);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v3_clone3->SetMarkerStyle(20);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v3_clone3->SetMarkerSize(2);
   Double_t xAxis4[11] = {0, 0.25, 0.5, 1, 1.5, 2, 2.5, 3, 4, 6, 12}; 
   
   TEfficiency * den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v1_clone4 = new TEfficiency("eff2022","",10,xAxis4);
   
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v1_clone4->SetConfidenceLevel(0.683);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v1_clone4->SetBetaAlpha(1);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v1_clone4->SetBetaBeta(1);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v1_clone4->SetWeight(1);
   //den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v1_clone4->SetStatisticOption(1);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v1_clone4->SetPosteriorMode(0);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v1_clone4->SetShortestInterval(0);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v1_clone4->SetTotalEvents(0,264406);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v1_clone4->SetPassedEvents(0,23);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v1_clone4->SetTotalEvents(1,26602);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v1_clone4->SetPassedEvents(1,5);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v1_clone4->SetTotalEvents(2,12045);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v1_clone4->SetPassedEvents(2,2);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v1_clone4->SetTotalEvents(3,6226);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v1_clone4->SetPassedEvents(3,1);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v1_clone4->SetTotalEvents(4,995);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v1_clone4->SetPassedEvents(4,2);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v1_clone4->SetTotalEvents(5,366);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v1_clone4->SetPassedEvents(5,2);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v1_clone4->SetTotalEvents(6,233);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v1_clone4->SetPassedEvents(6,0);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v1_clone4->SetTotalEvents(7,111);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v1_clone4->SetPassedEvents(7,0);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v1_clone4->SetTotalEvents(8,41);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v1_clone4->SetPassedEvents(8,9);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v1_clone4->SetTotalEvents(9,6);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v1_clone4->SetPassedEvents(9,5);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v1_clone4->SetTotalEvents(10,2);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v1_clone4->SetPassedEvents(10,2);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v1_clone4->SetTotalEvents(11,0);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v1_clone4->SetPassedEvents(11,0);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v1_clone4->SetFillColor(19);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v1_clone4->SetLineColor(2);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v1_clone4->SetLineWidth(2);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v1_clone4->SetMarkerColor(2);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v1_clone4->SetMarkerStyle(22);
   den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v1_clone4->SetMarkerSize(2.5);

   // Use an explicit frame histogram for stable axis titles and labels.
   TH1F *hframe = new TH1F("hframe","",100,0.,12.);
   hframe->SetDirectory(nullptr);
   hframe->SetStats(0);
   hframe->SetMinimum(0.);
   hframe->SetMaximum(1.2);
   hframe->GetXaxis()->SetTitle("Jet timing [ns]");
   hframe->GetYaxis()->SetTitle("L1T+HLT efficiency");
   hframe->GetXaxis()->SetTitleSize(0.06);
   hframe->GetYaxis()->SetTitleSize(0.06);
   hframe->GetXaxis()->SetLabelSize(0.045);
   hframe->GetYaxis()->SetLabelSize(0.045);
   hframe->GetXaxis()->SetTitleOffset(0.8);
   hframe->GetYaxis()->SetTitleOffset(0.8);
   hframe->Draw("AXIS");

      // Draw independent graphs rather than the TEfficiency painted graphs.
   // This prevents later canvas updates from restoring removed 2022 points.
   TGraphAsymmErrors *graph2023 =
     den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v3_clone3->CreateGraph();
   graph2023->SetName("graph2023");

   // Keep the last 2023 data point and their horizontal bin-width bars,
   // but suppress their vertical error bars.
   for (int i = graph2023->GetN() - 1; i < graph2023->GetN(); ++i) {
      if (i >= 0) {
         graph2023->SetPointEYlow(i, 0.);
         graph2023->SetPointEYhigh(i, 0.);
      }
   }
   
   graph2023->SetLineColor(1);
   graph2023->SetLineWidth(2);
   graph2023->SetMarkerColor(1);
   graph2023->SetMarkerStyle(20);
   graph2023->SetMarkerSize(2.);
   graph2023->Draw("P SAME");

   TGraphAsymmErrors *graph2022 =
      den_HLT_L1Tau_DelayedJet40_SingleDelay3p5nsInclusive_v1_clone4->CreateGraph();
   graph2022->SetName("graph2022");

   // Remove selected original 2022 points.
   // TGraph indices are zero-based:
   //   original 1st, 2nd, 3rd points -> indices 0, 1, 2
   //   original 6th, 7th points      -> indices 5, 6
   //
   // Remove from highest to lowest index so earlier removals
   // do not shift the indices of points that still need removal.
   const int indicesToRemove[] = {6, 5, 2, 1, 0};
   for (int index : indicesToRemove) {
     graph2022->RemovePoint(index);
   }
   
   // Keep the last remaining 2022 data point and their horizontal
   // bin-width bars, but suppress their vertical error bars.
   for (int i = graph2022->GetN() - 1; i < graph2022->GetN(); ++i) {
      if (i >= 0) {
         graph2022->SetPointEYlow(i, 0.);
         graph2022->SetPointEYhigh(i, 0.);
      }
   }
   
   graph2022->SetLineColor(2);
   graph2022->SetLineWidth(2);
   graph2022->SetMarkerColor(2);
   graph2022->SetMarkerStyle(22);
   graph2022->SetMarkerSize(2.5);
   graph2022->Draw("PZ SAME");

   
   TLatex *   tex = new TLatex(0.33,1.13,"Trigger selection: L1 tau with p_{ T} > 120 GeV,");
   tex->SetTextAlign(12);
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();

   TLatex *   tex2 = new TLatex(0.33,1.05,"#geq 1 HLT jet with p_{ T} > 40 GeV and t > 3.5 ns");
   tex2->SetTextAlign(12);
   tex2->SetTextFont(42);
   tex2->SetTextSize(0.04);
   tex2->SetLineWidth(2);
   tex2->Draw();

   TLegend *leg = new TLegend(0.75,0.25,0.9,0.5,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("graph2023","#bf{2023}","PLE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(62);
   TLegendEntry *entry2=leg->AddEntry("graph2022","#bf{2022}","PLE");
   entry2->SetLineColor(2);
   entry2->SetLineStyle(1);
   entry2->SetLineWidth(2);
   entry2->SetMarkerColor(2);
   entry2->SetMarkerStyle(22);
   entry2->SetMarkerSize(2.5);
   entry2->SetTextFont(62);
   leg->Draw();
      tex = new TLatex(0.96,0.936," 27.2 fb^{ -1} (2023) +  3.1 fb^{ -1} (2022) (13.6 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.12,0.936,"CMS");
tex->SetNDC();
   tex->SetTextFont(61);
   tex->SetTextSize(0.06);
   tex->SetLineWidth(2);
   tex->Draw();

   gPad->Modified();
   gPad->Update();
   
   FigExample->Modified();
   FigExample->cd();
   FigExample->SetSelected(FigExample);
   FigExample->SaveAs("Figure_029-b.pdf");
}
