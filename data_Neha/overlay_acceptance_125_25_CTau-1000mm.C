#ifdef __CLING__
#pragma cling optimize(0)
#endif
void overlay_acceptance_125_25_CTau-1000mm()
{
//=========Macro generated from canvas: c/
//=========  (Mon Nov 24 15:32:16 2025) by ROOT version 6.26/11
   TCanvas *c = new TCanvas("c", "",0,0,800,800);
   gStyle->SetOptStat(0);
   c->Range(-100,-0.1625,900,1.4625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1D *frame__1 = new TH1D("frame__1","",100,0,1000);
   frame__1->SetMinimum(0);
   frame__1->SetMaximum(1.3);
   frame__1->SetDirectory(0);
   frame__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame__1->SetLineColor(ci);
   frame__1->GetXaxis()->SetTitle("LLP decay R [cm]");
   frame__1->GetXaxis()->SetRange(1,80);
   frame__1->GetXaxis()->SetLabelFont(42);
   frame__1->GetXaxis()->SetTitleOffset(1);
   frame__1->GetXaxis()->SetTitleFont(42);
   frame__1->GetYaxis()->SetTitle("L1T+HLT acceptance");
   frame__1->GetYaxis()->SetLabelFont(42);
   frame__1->GetYaxis()->SetTitleFont(42);
   frame__1->GetZaxis()->SetLabelFont(42);
   frame__1->GetZaxis()->SetTitleOffset(1);
   frame__1->GetZaxis()->SetTitleFont(42);
   frame__1->Draw("");
   TBox *box = new TBox(0,0,110,1);

   ci = 1179;
   color = new TColor(ci, 0.4, 1, 1, " ", 0.15);
   box->SetFillColor(ci);
   box->SetLineWidth(0);
   box->Draw();
   TLatex *   tex = new TLatex(100,0.75,"Tracker");
   tex->SetTextAlign(22);

   ci = TColor::GetColor("#339999");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.025);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   box = new TBox(128,0,147,1);

   ci = 1180;
   color = new TColor(ci, 1, 0, 0, " ", 0.15);
   box->SetFillColor(ci);
   box->SetLineWidth(0);
   box->Draw();
      tex = new TLatex(137.5,0.75,"ECAL");
   tex->SetTextAlign(22);

   ci = TColor::GetColor("#ff0000");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.025);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   box = new TBox(177,0,287.7,1);

   ci = 1181;
   color = new TColor(ci, 0, 0, 1, " ", 0.15);
   box->SetFillColor(ci);
   box->SetLineWidth(0);
   box->Draw();
      tex = new TLatex(277,0.75,"HCAL");
   tex->SetTextAlign(22);

   ci = TColor::GetColor("#0000ff");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.025);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   box = new TBox(400,0,720,1);

   ci = 1182;
   color = new TColor(ci, 0, 0.6, 0, " ", 0.15);
   box->SetFillColor(ci);
   box->SetLineWidth(0);
   box->Draw();
      tex = new TLatex(410,0.75,"Muon DTs");
   tex->SetTextAlign(22);

   ci = TColor::GetColor("#009900");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.025);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t _fx3001[13] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   110,
   130,
   150};
   Double_t _fy3001[13] = {
   0.002633541,
   0.004364799,
   0.00164247,
   0.004128874,
   0.003337942,
   0.0006651665,
   0.004370106,
   0.005129459,
   0.002096383,
   0.005008257,
   0.003438245,
   0.01076585,
   0};
   Double_t _felx3001[13] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   10,
   10,
   10};
   Double_t _fely3001[13] = {
   0.0009939804,
   0.001384597,
   0.0008314834,
   0.001407387,
   0.001281421,
   0.0005325545,
   0.001592892,
   0.001746693,
   0.001140822,
   0.001898826,
   0.001150452,
   0.002164782,
   0};
   Double_t _fehx3001[13] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   10,
   10,
   10};
   Double_t _fehy3001[13] = {
   0.001463354,
   0.001909702,
   0.00141732,
   0.001990599,
   0.00189915,
   0.001399265,
   0.002310468,
   0.002468489,
   0.002035128,
   0.002797232,
   0.001616884,
   0.002643885,
   0.001537493};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(13,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,176);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(0.0147507);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3001->SetLineColor(ci);
   Graph_Graph3001->GetXaxis()->SetLabelFont(42);
   Graph_Graph3001->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3001->GetXaxis()->SetTitleFont(42);
   Graph_Graph3001->GetYaxis()->SetLabelFont(42);
   Graph_Graph3001->GetYaxis()->SetTitleFont(42);
   Graph_Graph3001->GetZaxis()->SetLabelFont(42);
   Graph_Graph3001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("pe ");
   
   Double_t _fx3002[20] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   110,
   130,
   150,
   170,
   190,
   210,
   230,
   250,
   270,
   290};
   Double_t _fy3002[20] = {
   0.008177541,
   0.002888589,
   0.001706857,
   0.004014034,
   0.004274155,
   0.002272969,
   0.002348736,
   0.004708899,
   0.01073294,
   0.004846783,
   0.009409544,
   0.0109577,
   0.01224255,
   0.006655743,
   0.008777256,
   0.05626803,
   0.06954314,
   0.06958171,
   0.04940463,
   0.01527263};
   Double_t _felx3002[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t _fely3002[20] = {
   0.001927729,
   0.001205404,
   0.0009064939,
   0.001496443,
   0.001565685,
   0.001183429,
   0.001222081,
   0.001789711,
   0.002892552,
   0.002013629,
   0.002072306,
   0.002350805,
   0.002634048,
   0.00201375,
   0.002429855,
   0.006407592,
   0.007565148,
   0.008069168,
   0.00718629,
   0.004079505};
   Double_t _fehx3002[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t _fehy3002[20] = {
   0.002440251,
   0.001853824,
   0.001591933,
   0.002190509,
   0.002275565,
   0.002051288,
   0.002117294,
   0.002639565,
   0.00378724,
   0.003086958,
   0.002581337,
   0.002910193,
   0.003261776,
   0.00273252,
   0.003207716,
   0.00712853,
   0.008361349,
   0.008977327,
   0.008244941,
   0.005319992};
   grae = new TGraphAsymmErrors(20,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(21);
   grae->SetMarkerSize(0.7);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,330);
   Graph_Graph3002->SetMinimum(0.0007203265);
   Graph_Graph3002->SetMaximum(0.0863349);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3002->SetLineColor(ci);
   Graph_Graph3002->GetXaxis()->SetLabelFont(42);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3002->GetXaxis()->SetTitleFont(42);
   Graph_Graph3002->GetYaxis()->SetLabelFont(42);
   Graph_Graph3002->GetYaxis()->SetTitleFont(42);
   Graph_Graph3002->GetZaxis()->SetLabelFont(42);
   Graph_Graph3002->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3002);
   
   grae->Draw("pe ");
   
   Double_t _fx3003[25] = {
   210,
   230,
   250,
   270,
   290,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5,
   612.5,
   637.5,
   662.5,
   687.5,
   712.5,
   737.5,
   762.5,
   787.5};
   Double_t _fy3003[25] = {
   0.01546245,
   0.02641296,
   0.02088444,
   0.02807923,
   0.02409642,
   0.05272368,
   0.0693425,
   0.08703528,
   0.09429566,
   0.1066462,
   0.1160747,
   0.1275389,
   0.130831,
   0.1280087,
   0.1309214,
   0.1277818,
   0.189875,
   0.1482652,
   0.187272,
   0.1429021,
   0.1606897,
   0.1487099,
   0.06964431,
   0.01339844,
   0.02482964};
   Double_t _felx3003[25] = {
   10,
   10,
   10,
   10,
   10,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3003[25] = {
   0.002912525,
   0.00408711,
   0.003929488,
   0.004896758,
   0.004672855,
   0.006744173,
   0.008314598,
   0.009715894,
   0.01115064,
   0.0124846,
   0.01394047,
   0.01505283,
   0.01750171,
   0.01797697,
   0.01936108,
   0.02134286,
   0.02566227,
   0.02418935,
   0.02980124,
   0.02772517,
   0.0314176,
   0.03288665,
   0.02399049,
   0.009906557,
   0.01467543};
   Double_t _fehx3003[25] = {
   10,
   10,
   10,
   10,
   10,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3003[25] = {
   0.003508132,
   0.004751251,
   0.004726221,
   0.005801064,
   0.005648234,
   0.007606434,
   0.009284204,
   0.01073968,
   0.0123847,
   0.01382496,
   0.01545367,
   0.01662586,
   0.01957368,
   0.02022788,
   0.021907,
   0.0245532,
   0.02838543,
   0.02760155,
   0.03356855,
   0.03247613,
   0.03664877,
   0.03929597,
   0.0330066,
   0.02289664,
   0.02717602};
   grae = new TGraphAsymmErrors(25,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#009900");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(22);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,140,860);
   Graph_Graph3003->SetMinimum(0.003142697);
   Graph_Graph3003->SetMaximum(0.2425754);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3003->SetLineColor(ci);
   Graph_Graph3003->GetXaxis()->SetLabelFont(42);
   Graph_Graph3003->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3003->GetXaxis()->SetTitleFont(42);
   Graph_Graph3003->GetYaxis()->SetLabelFont(42);
   Graph_Graph3003->GetYaxis()->SetTitleFont(42);
   Graph_Graph3003->GetZaxis()->SetLabelFont(42);
   Graph_Graph3003->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3003);
   
   grae->Draw("pe ");
   
   Double_t _fx3004[29] = {
   75,
   85,
   95,
   110,
   130,
   150,
   170,
   190,
   210,
   230,
   250,
   270,
   290,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5,
   612.5,
   637.5,
   662.5,
   687.5};
   Double_t _fy3004[29] = {
   0,
   0.0189937,
   0,
   0.02835551,
   0.01705618,
   0.08809817,
   0.1684363,
   0.2112186,
   0.171504,
   0.1721927,
   0.189793,
   0.1950399,
   0.1510013,
   0.1103212,
   0.2134702,
   0.2489981,
   0.2777232,
   0.2968725,
   0.2984143,
   0.4135802,
   0.5223079,
   0.5635885,
   0.5891306,
   0.5452474,
   0.5065295,
   0.3764011,
   0.2085046,
   0.05750261,
   0.0282553};
   Double_t _felx3004[29] = {
   5,
   5,
   5,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3004[29] = {
   0,
   0.01388406,
   0,
   0.008168863,
   0.005461896,
   0.01150339,
   0.01541733,
   0.01610557,
   0.01509749,
   0.01562766,
   0.01636033,
   0.01725488,
   0.01648265,
   0.01387448,
   0.01932746,
   0.02118541,
   0.02327695,
   0.02432011,
   0.02589679,
   0.03143923,
   0.03868363,
   0.04054583,
   0.04082987,
   0.0502844,
   0.05229978,
   0.05122195,
   0.04663791,
   0.02895204,
   0.02245841};
   Double_t _fehx3004[29] = {
   5,
   5,
   5,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3004[29] = {
   0.08575405,
   0.03142128,
   0.01492703,
   0.01082994,
   0.007516741,
   0.01293009,
   0.01656534,
   0.01701293,
   0.01617109,
   0.01677253,
   0.01745621,
   0.01842796,
   0.01800428,
   0.01547029,
   0.02061617,
   0.02239343,
   0.02447323,
   0.02546199,
   0.02717704,
   0.03211782,
   0.0384352,
   0.03976931,
   0.03971887,
   0.04945078,
   0.05216921,
   0.05387027,
   0.05462691,
   0.04710465,
   0.05586687};
   grae = new TGraphAsymmErrors(29,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ff00ff");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#ff00ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(33);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,7,763);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(0.6917344);
   Graph_Graph3004->SetDirectory(0);
   Graph_Graph3004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3004->SetLineColor(ci);
   Graph_Graph3004->GetXaxis()->SetLabelFont(42);
   Graph_Graph3004->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3004->GetXaxis()->SetTitleFont(42);
   Graph_Graph3004->GetYaxis()->SetLabelFont(42);
   Graph_Graph3004->GetYaxis()->SetTitleFont(42);
   Graph_Graph3004->GetZaxis()->SetLabelFont(42);
   Graph_Graph3004->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3004);
   
   grae->Draw("pe ");
   
   Double_t _fx3005[15] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   110,
   130,
   150,
   175,
   250};
   Double_t _fy3005[15] = {
   0.005227612,
   0.02806155,
   0.002676127,
   0.03614067,
   0.03974603,
   0.04447697,
   0.04549285,
   0.03197925,
   0.01602658,
   0.1417418,
   0.1820368,
   0.05786989,
   0.01977051,
   0.3281877,
   0.2900027};
   Double_t _felx3005[15] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   10,
   10,
   10,
   25,
   50};
   Double_t _fely3005[15] = {
   0.0005063016,
   0.001545219,
   0.0006002357,
   0.002879782,
   0.003480498,
   0.005014324,
   0.005665218,
   0.006045912,
   0.005144788,
   0.01603003,
   0.0163667,
   0.01285473,
   0.01153708,
   0.03027446,
   0.03757927};
   Double_t _fehx3005[15] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   10,
   10,
   10,
   25,
   50};
   Double_t _fehy3005[15] = {
   0.000557553,
   0.001629979,
   0.0007521501,
   0.003108841,
   0.003784507,
   0.005581582,
   0.006376236,
   0.007259488,
   0.007089225,
   0.01759201,
   0.01753027,
   0.01582398,
   0.0212691,
   0.03167876,
   0.04043861};
   grae = new TGraphAsymmErrors(15,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineColor(7);
   grae->SetMarkerColor(7);
   grae->SetMarkerStyle(33);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,330);
   Graph_Graph3005->SetMinimum(0.001868302);
   Graph_Graph3005->SetMaximum(0.3956455);
   Graph_Graph3005->SetDirectory(0);
   Graph_Graph3005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3005->SetLineColor(ci);
   Graph_Graph3005->GetXaxis()->SetLabelFont(42);
   Graph_Graph3005->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3005->GetXaxis()->SetTitleFont(42);
   Graph_Graph3005->GetYaxis()->SetLabelFont(42);
   Graph_Graph3005->GetYaxis()->SetTitleFont(42);
   Graph_Graph3005->GetZaxis()->SetLabelFont(42);
   Graph_Graph3005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3005);
   
   grae->Draw("pe ");
      tex = new TLatex(0.11,0.91,"CMS");
tex->SetNDC();
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.91,"#bf{#it{Simulation}}");
tex->SetNDC();
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
   
   TPaveText *pt = new TPaveText(0.59,0.84,0.89,0.88,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillStyle(0);
   pt->SetTextAlign(32);
   pt->SetTextSize(0.025);
   TText *pt_LaTex = pt->AddText("#bf{H #rightarrow XX #rightarrow 4b}");
   pt->Draw();
   
   pt = new TPaveText(0.59,0.8,0.89,0.84,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillStyle(0);
   pt->SetTextAlign(32);
   pt->SetTextSize(0.025);
   pt_LaTex = pt->AddText("#bf{m_{H} = 125 GeV}");
   pt->Draw();
   
   pt = new TPaveText(0.59,0.76,0.89,0.8,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillStyle(0);
   pt->SetTextAlign(32);
   pt->SetTextSize(0.025);
   pt_LaTex = pt->AddText("#bf{m_{X} = 25 GeV}");
   pt->Draw();
   TLine *line = new TLine(80,0,80,1);
   line->SetLineStyle(7);
   line->Draw();
   line = new TLine(700,0,700,1);
   line->SetLineStyle(7);
   line->Draw();
   TArrow *arrow = new TArrow(80,0.96,700,0.96,0.01,"<>");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);

   ci = TColor::GetColor("#ff00ff");
   arrow->SetLineColor(ci);
   arrow->Draw();
      tex = new TLatex(390,0.975,"CSCs");
   tex->SetTextAlign(22);

   ci = TColor::GetColor("#ff00ff");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.11,0.72,0.74,0.88,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.024);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("","Displaced-jet triggers using the tracker (c#tau = 0.1m)","lep");
   entry->SetLineColor(7);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(7);
   entry->SetMarkerStyle(33);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","Delayed-jet triggers using ECAL timing (c#tau = 1m)","lep");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","Displaced-jet triggers using the HCAL (c#tau = 1m)","lep");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(0.7);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","Muon Detector Showers with the DTs (c#tau = 1m)","lep");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","Muon Detector Showers with the CSCs (c#tau = 1m)","lep");

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff00ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(33);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
