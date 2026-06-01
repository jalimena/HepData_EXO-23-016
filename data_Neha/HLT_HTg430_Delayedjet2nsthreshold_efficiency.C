#include "TCanvas.h"
#include "TEfficiency.h"
#include "TGraphAsymmErrors.h"
#include "TH1F.h"
#include "TLegend.h"
#include "TLatex.h"

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HLT_HTg430_Delayedjet2nsthreshold_efficiency()
{
//=========Macro generated from canvas: FigExample_800-600_3-out/FigExample_800-600_3-out
//=========  (Wed Dec 17 00:08:15 2025) by ROOT version 6.26/11
   TCanvas *FigExample = new TCanvas("FigExample", "FigExample",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   FigExample->Range(-1.885714,-0.1648269,13.82857,1.318681);
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
   Double_t xAxis1[11] = {0, 0.25, 0.5, 1, 1.5, 2, 2.5, 3, 4, 6, 12}; 
   
   TEfficiency * den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone1 = new TEfficiency("eff2023","",10,xAxis1);
   
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone1->SetConfidenceLevel(0.683);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone1->SetBetaAlpha(1);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone1->SetBetaBeta(1);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone1->SetWeight(0.1666667);
   //den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone1->SetStatisticOption(1);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone1->SetPosteriorMode(0);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone1->SetShortestInterval(0);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone1->SetTotalEvents(0,15450);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone1->SetPassedEvents(0,784);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone1->SetTotalEvents(1,9920);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone1->SetPassedEvents(1,539);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone1->SetTotalEvents(2,10377);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone1->SetPassedEvents(2,589);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone1->SetTotalEvents(3,18697);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone1->SetPassedEvents(3,873);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone1->SetTotalEvents(4,23338);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone1->SetPassedEvents(4,361);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone1->SetTotalEvents(5,4798);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone1->SetPassedEvents(5,140);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone1->SetTotalEvents(6,528);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone1->SetPassedEvents(6,195);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone1->SetTotalEvents(7,53);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone1->SetPassedEvents(7,33);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone1->SetTotalEvents(8,11);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone1->SetPassedEvents(8,5);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone1->SetTotalEvents(9,3);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone1->SetPassedEvents(9,3);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone1->SetTotalEvents(10,1);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone1->SetPassedEvents(10,1);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone1->SetTotalEvents(11,0);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone1->SetPassedEvents(11,0);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone1->SetFillColor(19);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone1->SetLineWidth(2);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone1->SetMarkerStyle(20);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone1->SetMarkerSize(2);
   Double_t xAxis2[11] = {0, 0.25, 0.5, 1, 1.5, 2, 2.5, 3, 4, 6, 12}; 
   
   TEfficiency * den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone2 = new TEfficiency("eff2022","",10,xAxis2);
   
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone2->SetConfidenceLevel(0.683);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone2->SetBetaAlpha(1);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone2->SetBetaBeta(1);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone2->SetWeight(1);
   //den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone2->SetStatisticOption(1);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone2->SetPosteriorMode(0);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone2->SetShortestInterval(0);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone2->SetTotalEvents(0,126024);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone2->SetPassedEvents(0,495);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone2->SetTotalEvents(1,16212);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone2->SetPassedEvents(1,89);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone2->SetTotalEvents(2,7248);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone2->SetPassedEvents(2,29);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone2->SetTotalEvents(3,3531);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone2->SetPassedEvents(3,23);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone2->SetTotalEvents(4,433);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone2->SetPassedEvents(4,4);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone2->SetTotalEvents(5,77);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone2->SetPassedEvents(5,3);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone2->SetTotalEvents(6,27);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone2->SetPassedEvents(6,11);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone2->SetTotalEvents(7,22);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone2->SetPassedEvents(7,11);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone2->SetTotalEvents(8,9);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone2->SetPassedEvents(8,5);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone2->SetTotalEvents(9,3);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone2->SetPassedEvents(9,3);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone2->SetTotalEvents(10,1);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone2->SetPassedEvents(10,1);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone2->SetTotalEvents(11,0);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone2->SetPassedEvents(11,0);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone2->SetFillColor(19);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone2->SetLineColor(2);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone2->SetLineWidth(2);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone2->SetMarkerColor(2);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone2->SetMarkerStyle(22);
   den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone2->SetMarkerSize(2.5);
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
      den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone1->CreateGraph();
   graph2023->SetName("graph2023");

      // Keep the last two 2023 data points and their horizontal bin-width bars,
   // but suppress their vertical error bars.
   for (int i = graph2023->GetN() - 2; i < graph2023->GetN(); ++i) {
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
      den_HLT_HT430_DelayedJet40_SingleDelay2nsInclusive_v3_clone2->CreateGraph();
   graph2022->SetName("graph2022");

   // Remove the first four regular-bin points, together with their error bars.
   for (int i = 0; i < 4; ++i) {
      graph2022->RemovePoint(0);
   }

   // Keep the last two remaining 2022 data points and their horizontal
   // bin-width bars, but suppress their vertical error bars.
   for (int i = graph2022->GetN() - 2; i < graph2022->GetN(); ++i) {
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

   TLatex *   tex = new TLatex(0.33,1.13,"Trigger selection: L1 H_{ T} > 350 GeV, HLT H_{ T} > 430 GeV,");
   tex->SetTextAlign(12);
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();

   TLatex *   tex2 = new TLatex(0.33,1.05,"#geq 1 jet with p_{T} > 40 GeV and t > 2 ns");
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
   TLegendEntry *entry=leg->AddEntry(graph2023,"#bf{2023}","PLE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(62);
   TLegendEntry *entry2=leg->AddEntry(graph2022,"#bf{2022}","PLE");
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
   FigExample->SaveAs("Figure_029-a.pdf");
}
