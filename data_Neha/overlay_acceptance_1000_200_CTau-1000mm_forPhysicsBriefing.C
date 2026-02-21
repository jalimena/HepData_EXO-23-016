#ifdef __CLING__
#pragma cling optimize(0)
#endif

// NOTE: Function names cannot contain '-' in C++/ROOT.
// File name can include '-' but function name must not.
void overlay_acceptance_1000_200_CTau_1000mm_forPhysicsBriefing()
{
//=========Macro generated from canvas: c/
//=========  (Wed Dec 17 14:42:14 2025) by ROOT version 6.26/11
   TCanvas *c = new TCanvas("c", "",1,1,800,776);
   gStyle->SetOptStat(0);

   // Increase raster export resolution (PNG). Does not affect PDF vector quality.
   gStyle->SetImageScaling(3.0);

   c->Range(-100,-0.1625,900,1.4625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);

   TH1D *frame__8 = new TH1D("frame__8","",100,0,1000);
   frame__8->SetMinimum(0);
   frame__8->SetMaximum(1.3);
   frame__8->SetDirectory(0);
   frame__8->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame__8->SetLineColor(ci);

   // ---- Public-friendly axis labels ----
   frame__8->GetXaxis()->SetTitle("Long-lived particle decay distance [cm]");
   frame__8->GetYaxis()->SetTitle("Fraction of events recorded by the trigger");

   frame__8->GetXaxis()->SetRange(1,80);
   frame__8->GetXaxis()->SetLabelFont(42);
   frame__8->GetXaxis()->SetTitleOffset(1);
   frame__8->GetXaxis()->SetTitleFont(42);

   frame__8->GetYaxis()->SetLabelFont(42);
   frame__8->GetYaxis()->SetTitleFont(42);

   frame__8->GetZaxis()->SetLabelFont(42);
   frame__8->GetZaxis()->SetTitleOffset(1);
   frame__8->GetZaxis()->SetTitleFont(42);
   frame__8->Draw("");

   // -------------------------------------------------------------------------
   // Removed detector region shading (TBox) and subsystem labels (TLatex):
   //   Tracker / ECAL / HCAL / Muon DTs
   // -------------------------------------------------------------------------

   TLatex *tex = nullptr;

   // ----- Graph 1 (red): delayed jets using timing -----
   Double_t _fx3036[13] = {5,15,25,35,45,55,65,75,85,95,110,130,150};
   Double_t _fy3036[13] = {0.1709696,0.1946533,0.2208349,0.243838,0.263651,0.2831456,0.2954148,0.3165738,0.3030138,0.2960199,0.2319326,0.203181,0.1925782};
   Double_t _felx3036[13] = {5,5,5,5,5,5,5,5,5,5,10,10,10};
   Double_t _fely3036[13] = {0.002336258,0.002582781,0.002811911,0.003016526,0.003239797,0.003416578,0.003561207,0.003766762,0.003817636,0.00392859,0.002691282,0.002703906,0.003647815};
   Double_t _fehx3036[13] = {5,5,5,5,5,5,5,5,5,5,10,10,10};
   Double_t _fehy3036[13] = {0.002361656,0.002608806,0.002837583,0.003041806,0.003265333,0.003441485,0.00358609,0.003790756,0.003844763,0.003958742,0.002713085,0.002730746,0.003700558};

   TGraphAsymmErrors *grae = new TGraphAsymmErrors(13,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   TGraphAsymmErrors *g_delayedTiming = grae; // store pointer for legend
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);

   TH1F *Graph_Graph_Graph30313036 = new TH1F("Graph_Graph_Graph30313036","",100,0,176);
   Graph_Graph_Graph30313036->SetMinimum(0.1534602);
   Graph_Graph_Graph30313036->SetMaximum(0.3355377);
   Graph_Graph_Graph30313036->SetDirectory(0);
   Graph_Graph_Graph30313036->SetStats(0);
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph30313036->SetLineColor(ci);
   Graph_Graph_Graph30313036->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph30313036->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph30313036->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph30313036->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph30313036->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph30313036->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph30313036->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph30313036->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph30313036);
   grae->Draw("pe ");

   // ----- Graph 2 (blue): displaced jets outer calorimeter -----
   Double_t _fx3037[20] = {5,15,25,35,45,55,65,75,85,95,110,130,150,170,190,210,230,250,270,290};
   Double_t _fy3037[20] = {0.115151,0.1165002,0.1216105,0.1195461,0.1306699,0.1363694,0.1364369,0.1329059,0.1306754,0.1245243,0.1164725,0.12925,0.1511114,0.1216643,0.1607321,0.3063056,0.3473814,0.3374514,0.3358465,0.1559892};
   Double_t _felx3037[20] = {5,5,5,5,5,5,5,5,5,5,10,10,10,10,10,10,10,10,10,10};
   Double_t _fely3037[20] = {0.002108733,0.002224527,0.002354199,0.002415879,0.002621627,0.002749009,0.002823985,0.002892284,0.002945757,0.002982499,0.002157635,0.002371218,0.002724489,0.002608548,0.003112556,0.004080588,0.004503996,0.004755924,0.005013032,0.004040659};
   Double_t _fehx3037[20] = {5,5,5,5,5,5,5,5,5,5,10,10,10,10,10,10,10,10,10,10};
   Double_t _fehy3037[20] = {0.002142501,0.002261603,0.002393674,0.002458313,0.002666552,0.002795909,0.002873454,0.002945877,0.003002514,0.003044178,0.002192519,0.00240844,0.002765023,0.002657017,0.003161473,0.004110871,0.004531196,0.004788682,0.005049869,0.004126456};

   grae = new TGraphAsymmErrors(20,_fx3037,_fy3037,_felx3037,_fehx3037,_fely3037,_fehy3037);
   TGraphAsymmErrors *g_displacedOuterCalo = grae;
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(21);
   grae->SetMarkerSize(1.5);

   TH1F *Graph_Graph_Graph30323037 = new TH1F("Graph_Graph_Graph30323037","",100,0,330);
   Graph_Graph_Graph30323037->SetMinimum(0.08915522);
   Graph_Graph_Graph30323037->SetMaximum(0.3757996);
   Graph_Graph_Graph30323037->SetDirectory(0);
   Graph_Graph_Graph30323037->SetStats(0);
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph30323037->SetLineColor(ci);
   Graph_Graph_Graph30323037->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph30323037->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph30323037->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph30323037->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph30323037->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph30323037->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph30323037->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph30323037->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph30323037);
   grae->Draw("pe ");

   // ----- Graph 3 (green): muon showers barrel -----
   Double_t _fx3038[25] = {210,230,250,270,290,312.5,337.5,362.5,387.5,412.5,437.5,462.5,487.5,512.5,537.5,562.5,587.5,612.5,637.5,662.5,687.5,712.5,737.5,762.5,787.5};
   Double_t _fy3038[25] = {0.2201759,0.2734936,0.3971703,0.5979253,0.6547042,0.6893155,0.7425102,0.7645951,0.7863446,0.7964764,0.806285,0.8248574,0.8433464,0.8233922,0.819153,0.836966,0.8328236,0.8336273,0.8476253,0.819685,0.8303797,0.7793326,0.5177914,0.3126582,0.2056515};
   Double_t _felx3038[25] = {10,10,10,10,10,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5};
   Double_t _fely3038[25] = {0.003312199,0.003838609,0.004526477,0.0048658,0.005009582,0.004711856,0.004745332,0.005026803,0.00522557,0.005604544,0.005976248,0.006060341,0.006332698,0.00724189,0.007837717,0.008085715,0.008857894,0.009530682,0.009802127,0.01144694,0.01161834,0.01445963,0.01813897,0.01688042,0.01631519};
   Double_t _fehx3038[25] = {10,10,10,10,10,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5};
   Double_t _fehy3038[25] = {0.003347986,0.003872163,0.004543974,0.004846785,0.004975847,0.004673356,0.004689577,0.004954589,0.00513549,0.005493813,0.005841854,0.005902697,0.006135336,0.007021063,0.007587845,0.007783451,0.008508167,0.009125435,0.009326909,0.01092492,0.01103895,0.01383436,0.01809378,0.01737294,0.01728456};

   grae = new TGraphAsymmErrors(25,_fx3038,_fy3038,_felx3038,_fehx3038,_fely3038,_fehy3038);
   TGraphAsymmErrors *g_muonBarrel = grae;
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#009900");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(22);
   grae->SetMarkerSize(1.5);

   TH1F *Graph_Graph_Graph30333038 = new TH1F("Graph_Graph_Graph30333038","",100,140,860);
   Graph_Graph_Graph30333038->SetMinimum(0.1225747);
   Graph_Graph_Graph30333038->SetMaximum(0.9237138);
   Graph_Graph_Graph30333038->SetDirectory(0);
   Graph_Graph_Graph30333038->SetStats(0);
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph30333038->SetLineColor(ci);
   Graph_Graph_Graph30333038->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph30333038->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph30333038->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph30333038->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph30333038->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph30333038->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph30333038->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph30333038->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph30333038);
   grae->Draw("pe ");

   // ----- Graph 4 (magenta): muon showers endcap -----
   Double_t _fx3039[29] = {75,85,95,110,130,150,170,190,210,230,250,270,290,312.5,337.5,362.5,387.5,412.5,437.5,462.5,487.5,512.5,537.5,562.5,587.5,612.5,637.5,662.5,687.5};
   Double_t _fy3039[29] = {0.01538462,0.0137457,0.01636364,0.01293661,0.06657224,0.1469175,0.2116576,0.2348993,0.2230637,0.2409106,0.2079314,0.2287293,0.2274436,0.2540541,0.2712509,0.2899963,0.3341554,0.3818182,0.4357349,0.6047904,0.7912458,0.8375734,0.8275862,0.8712221,0.858864,0.7786561,0.6282974,0.3106267,0.106383};
   Double_t _felx3039[29] = {5,5,5,10,10,10,10,10,10,10,10,10,10,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5};
   Double_t _fely3039[29] = {0.01273322,0.006569998,0.005334847,0.002858667,0.005443602,0.007142023,0.007875134,0.008052496,0.007802412,0.007966669,0.007746538,0.008146754,0.008214694,0.00784567,0.008360757,0.008894268,0.009702983,0.01096023,0.01215858,0.01301869,0.0124702,0.01237563,0.01377865,0.01331878,0.01596319,0.02002091,0.0251726,0.02495556,0.0203983};
   Double_t _fehx3039[29] = {5,5,5,10,10,10,10,10,10,10,10,10,10,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5,12.5};
   Double_t _fehy3039[29] = {0.03450628,0.0107411,0.007388301,0.003560114,0.005870982,0.007432884,0.008090264,0.008244054,0.007997449,0.008146653,0.00796023,0.00835128,0.008424495,0.008005383,0.008522251,0.00905509,0.009842326,0.01107909,0.01223449,0.0128755,0.01196221,0.01168682,0.01299165,0.01229029,0.01465449,0.01886096,0.02452651,0.02604484,0.02409592};

   grae = new TGraphAsymmErrors(29,_fx3039,_fy3039,_felx3039,_fehx3039,_fely3039,_fehy3039);
   TGraphAsymmErrors *g_muonEndcap = grae;
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ff00ff");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(23);
   grae->SetMarkerSize(1.5);

   TH1F *Graph_Graph_Graph30343039 = new TH1F("Graph_Graph_Graph30343039","",100,7,763);
   Graph_Graph_Graph30343039->SetMinimum(0.002386252);
   Graph_Graph_Graph30343039->SetMaximum(0.9715985);
   Graph_Graph_Graph30343039->SetDirectory(0);
   Graph_Graph_Graph30343039->SetStats(0);
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph30343039->SetLineColor(ci);
   Graph_Graph_Graph30343039->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph30343039->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph30343039->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph30343039->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph30343039->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph30343039->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph30343039->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph30343039->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph30343039);
   grae->Draw("pe ");

   // ----- Graph 5 (cyan): displaced jets inner tracker -----
   Double_t _fx3040[20] = {5,15,25,35,45,55,65,75,85,95,110,130,150,170,190,210,230,250,270,290};
   Double_t _fy3040[20] = {0.8179903,0.8377475,0.8511493,0.8599562,0.86655,0.8678737,0.8695416,0.8658856,0.8601067,0.8616242,0.8615557,0.8356511,0.7327001,0.6506667,0.6100629,0.5795455,0.6857143,0.52,0.4117647,0.2857143};
   Double_t _felx3040[20] = {5,5,5,5,5,5,5,5,5,5,10,10,10,10,10,10,10,10,10,10};
   Double_t _fely3040[20] = {0.0006651272,0.000895751,0.001156204,0.001481336,0.001878628,0.002413017,0.003035945,0.003915605,0.005050336,0.00617101,0.006035461,0.009857321,0.01730935,0.02635778,0.0424577,0.05897164,0.09752926,0.1181013,0.1374266,0.1821907};
   Double_t _fehx3040[20] = {5,5,5,5,5,5,5,5,5,5,10,10,10,10,10,10,10,10,10,10};
   Double_t _fehy3040[20] = {0.0006632478,0.0008917958,0.001148877,0.001468417,0.0018567,0.00237661,0.002977824,0.003822829,0.004905038,0.005953569,0.005827326,0.009418379,0.01665158,0.0255114,0.04096549,0.05698178,0.0852188,0.116232,0.1498462,0.2600544};

   grae = new TGraphAsymmErrors(20,_fx3040,_fy3040,_felx3040,_fehx3040,_fely3040,_fehy3040);
   TGraphAsymmErrors *g_displacedInnerTracker = grae;
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#33cccc");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(33);
   grae->SetMarkerSize(2.2);

   TH1F *Graph_Graph_Graph30353040 = new TH1F("Graph_Graph_Graph30353040","",100,0,330);
   Graph_Graph_Graph30353040->SetMinimum(0.02662401);
   Graph_Graph_Graph30353040->SetMaximum(0.949419);
   Graph_Graph_Graph30353040->SetDirectory(0);
   Graph_Graph_Graph30353040->SetStats(0);
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph30353040->SetLineColor(ci);
   Graph_Graph_Graph30353040->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph30353040->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph30353040->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph30353040->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph30353040->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph30353040->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph30353040->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph30353040->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph30353040);
   grae->Draw("pe ");

   // Keep CMS + Simulation + energy label as-is
   tex = new TLatex(0.11,0.91,"CMS");
   tex->SetNDC();
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();

   tex = new TLatex(0.2,0.91,"Simulation");
   tex->SetNDC();
   tex->SetTextFont(52);      // 52 = Helvetica italic (common CMS style)
   tex->SetTextSize(0.038);
   tex->SetLineWidth(2);
   tex->Draw();
 
   tex = new TLatex(0.89,0.91,"(13.6 TeV)");
   tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();


   // ---- Public-friendly legend labels (now tied to graphs; styles will match) ----
   TLegend *leg = new TLegend(0.13,0.72,0.74,0.88,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.024);
   leg->SetFillStyle(0);

   leg->AddEntry(g_displacedInnerTracker, "Displaced jets detected in the inner tracker", "lep");
   leg->AddEntry(g_delayedTiming,       "Delayed jets identified using precision timing", "lep");
   leg->AddEntry(g_displacedOuterCalo,   "Displaced jets detected in the outer calorimeter", "lep");
   leg->AddEntry(g_muonBarrel,           "Particle showers in the muon chambers (barrel)", "lep");
   leg->AddEntry(g_muonEndcap,           "Particle showers in the muon chambers (endcap)", "lep");

   leg->Draw();

   c->Modified();
   c->cd();
   c->SetSelected(c);

   // ---- Export outputs ----
   c->SaveAs("Figure61a_forPhysicsBriefing.pdf");
   c->SaveAs("Figure61a_forPhysicsBriefing.png");
}
