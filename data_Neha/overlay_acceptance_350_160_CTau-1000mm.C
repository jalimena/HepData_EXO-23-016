#ifdef __CLING__
#pragma cling optimize(0)
#endif
void overlay_acceptance_350_160_CTau-1000mm()
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
   
   TH1D *frame__3 = new TH1D("frame__3","",100,0,1000);
   frame__3->SetMinimum(0);
   frame__3->SetMaximum(1.3);
   frame__3->SetDirectory(0);
   frame__3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame__3->SetLineColor(ci);
   frame__3->GetXaxis()->SetTitle("LLP decay R [cm]");
   frame__3->GetXaxis()->SetRange(1,80);
   frame__3->GetXaxis()->SetLabelFont(42);
   frame__3->GetXaxis()->SetTitleOffset(1);
   frame__3->GetXaxis()->SetTitleFont(42);
   frame__3->GetYaxis()->SetTitle("L1T+HLT acceptance");
   frame__3->GetYaxis()->SetLabelFont(42);
   frame__3->GetYaxis()->SetTitleFont(42);
   frame__3->GetZaxis()->SetLabelFont(42);
   frame__3->GetZaxis()->SetTitleOffset(1);
   frame__3->GetZaxis()->SetTitleFont(42);
   frame__3->Draw("");
   TBox *box = new TBox(0,0,110,1);

   ci = 1187;
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

   ci = 1188;
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

   ci = 1189;
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

   ci = 1190;
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
   
   Double_t _fx3011[13] = {
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
   Double_t _fy3011[13] = {
   0.2232687,
   0.2910063,
   0.3475566,
   0.4061033,
   0.4169914,
   0.4706685,
   0.5041766,
   0.5128023,
   0.5389121,
   0.5576541,
   0.5988181,
   0.6193182,
   0.5084388};
   Double_t _felx3011[13] = {
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
   Double_t _fely3011[13] = {
   0.004934203,
   0.00622289,
   0.007438323,
   0.00853529,
   0.009899729,
   0.01086215,
   0.01251777,
   0.01369867,
   0.01487487,
   0.01621701,
   0.01295812,
   0.01553433,
   0.02402419};
   Double_t _fehx3011[13] = {
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
   Double_t _fehy3011[13] = {
   0.005012003,
   0.006301134,
   0.007512232,
   0.008591393,
   0.009965763,
   0.01088941,
   0.01251266,
   0.01367997,
   0.01480783,
   0.01609872,
   0.0128249,
   0.01530113,
   0.02398697};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(13,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
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
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,176);
   Graph_Graph3011->SetMinimum(0.176706);
   Graph_Graph3011->SetMaximum(0.6762478);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3011->SetLineColor(ci);
   Graph_Graph3011->GetXaxis()->SetLabelFont(42);
   Graph_Graph3011->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3011->GetXaxis()->SetTitleFont(42);
   Graph_Graph3011->GetYaxis()->SetLabelFont(42);
   Graph_Graph3011->GetYaxis()->SetTitleFont(42);
   Graph_Graph3011->GetZaxis()->SetLabelFont(42);
   Graph_Graph3011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3011->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3011);
   
   grae->Draw("pe ");
   
   Double_t _fx3012[20] = {
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
   Double_t _fy3012[20] = {
   0.0326897,
   0.02560677,
   0.03417318,
   0.03725627,
   0.0347581,
   0.03480663,
   0.0330753,
   0.04230118,
   0.03979592,
   0.04295943,
   0.0421875,
   0.05668934,
   0.1358025,
   0.18,
   0.2286501,
   0.4732824,
   0.6341463,
   0.6021505,
   0.5774648,
   0.2314815};
   Double_t _felx3012[20] = {
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
   Double_t _fely3012[20] = {
   0.002319028,
   0.002360498,
   0.003098602,
   0.003542918,
   0.003978447,
   0.004317316,
   0.004751441,
   0.005871415,
   0.006258381,
   0.007022693,
   0.005635139,
   0.007824734,
   0.01363996,
   0.01750408,
   0.02261451,
   0.03259984,
   0.03327501,
   0.03908,
   0.04542082,
   0.04230321};
   Double_t _fehx3012[20] = {
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
   Double_t _fehy3012[20] = {
   0.002483254,
   0.002581915,
   0.003381258,
   0.003881278,
   0.004441661,
   0.004864639,
   0.005457744,
   0.006702188,
   0.007274663,
   0.00820668,
   0.00640057,
   0.008903429,
   0.0148284,
   0.01885808,
   0.0242016,
   0.03281606,
   0.03211422,
   0.03790239,
   0.04424146,
   0.04781428};
   grae = new TGraphAsymmErrors(20,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
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
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,330);
   Graph_Graph3012->SetMinimum(0.02092164);
   Graph_Graph3012->SetMaximum(0.730562);
   Graph_Graph3012->SetDirectory(0);
   Graph_Graph3012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3012->SetLineColor(ci);
   Graph_Graph3012->GetXaxis()->SetLabelFont(42);
   Graph_Graph3012->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3012->GetXaxis()->SetTitleFont(42);
   Graph_Graph3012->GetYaxis()->SetLabelFont(42);
   Graph_Graph3012->GetYaxis()->SetTitleFont(42);
   Graph_Graph3012->GetZaxis()->SetLabelFont(42);
   Graph_Graph3012->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3012->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3012);
   
   grae->Draw("pe ");
   
   Double_t _fx3013[13] = {
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
   475,
   650};
   Double_t _fy3013[13] = {
   0.04244032,
   0.07440476,
   0.09504132,
   0.2,
   0.3185185,
   0.4444444,
   0.6346154,
   0.7384615,
   0.8085106,
   0.8947368,
   0.8113208,
   0.8205128,
   0.8791209};
   Double_t _felx3013[13] = {
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
   25,
   150};
   Double_t _fely3013[13] = {
   0.01037651,
   0.01442781,
   0.01907766,
   0.03117132,
   0.04220324,
   0.04586721,
   0.05321219,
   0.06592149,
   0.07513006,
   0.07547701,
   0.0695424,
   0.08327889,
   0.04440448};
   Double_t _fehx3013[13] = {
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
   25,
   150};
   Double_t _fehy3013[13] = {
   0.01311192,
   0.01722179,
   0.02278481,
   0.03491338,
   0.04512864,
   0.04675802,
   0.05037528,
   0.05762748,
   0.05978311,
   0.04970916,
   0.05589847,
   0.06375302,
   0.03479592};
   grae = new TGraphAsymmErrors(13,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
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
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,140,860);
   Graph_Graph3013->SetMinimum(0.02885743);
   Graph_Graph3013->SetMaximum(1.035684);
   Graph_Graph3013->SetDirectory(0);
   Graph_Graph3013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3013->SetLineColor(ci);
   Graph_Graph3013->GetXaxis()->SetLabelFont(42);
   Graph_Graph3013->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3013->GetXaxis()->SetTitleFont(42);
   Graph_Graph3013->GetYaxis()->SetLabelFont(42);
   Graph_Graph3013->GetYaxis()->SetTitleFont(42);
   Graph_Graph3013->GetZaxis()->SetLabelFont(42);
   Graph_Graph3013->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3013->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3013);
   
   grae->Draw("pe ");
   
   Double_t _fx3014[21] = {
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
   475,
   650};
   Double_t _fy3014[21] = {
   0,
   0,
   0.01503759,
   0.01257862,
   0.03061224,
   0.1140684,
   0.1690141,
   0.2010309,
   0.1793103,
   0.1777778,
   0.2291667,
   0.2112676,
   0.1551724,
   0.2363636,
   0.2280702,
   0.3611111,
   0.25,
   0.4166667,
   0.32,
   0.45,
   0.6875};
   Double_t _felx3014[21] = {
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
   25,
   150};
   Double_t _fely3014[21] = {
   0,
   0,
   0.009710351,
   0.006013053,
   0.009947885,
   0.01989994,
   0.02630917,
   0.02963369,
   0.03279937,
   0.03389127,
   0.044768,
   0.05056585,
   0.04891517,
   0.06035832,
   0.05840299,
   0.08809669,
   0.09439398,
   0.1145058,
   0.1023218,
   0.1293103,
   0.1027933};
   Double_t _fehx3014[21] = {
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
   25,
   150};
   Double_t _fehy3014[21] = {
   0.08798609,
   0.02094986,
   0.01949994,
   0.0098395,
   0.01367605,
   0.02311457,
   0.02969397,
   0.03298379,
   0.03768387,
   0.03918134,
   0.05105762,
   0.05980182,
   0.06280724,
   0.07133976,
   0.0693292,
   0.0969885,
   0.1194051,
   0.1226551,
   0.1193396,
   0.1352276,
   0.08912671};
   grae = new TGraphAsymmErrors(21,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
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
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,873);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(0.8542894);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3014->SetLineColor(ci);
   Graph_Graph3014->GetXaxis()->SetLabelFont(42);
   Graph_Graph3014->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3014->GetXaxis()->SetTitleFont(42);
   Graph_Graph3014->GetYaxis()->SetLabelFont(42);
   Graph_Graph3014->GetYaxis()->SetTitleFont(42);
   Graph_Graph3014->GetZaxis()->SetLabelFont(42);
   Graph_Graph3014->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3014->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3014);
   
   grae->Draw("pe ");
   
   Double_t _fx3015[12] = {
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
   150,
   250};
   Double_t _fy3015[12] = {
   0.3437684,
   0.46451,
   0.6112122,
   0.7165367,
   0.7974462,
   0.8163732,
   0.7528554,
   0.7760596,
   0.8536007,
   0.5446843,
   0.8625623,
   0.9101514};
   Double_t _felx3015[12] = {
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
   50,
   50};
   Double_t _fely3015[12] = {
   0.002526394,
   0.006881423,
   0.01368376,
   0.02330819,
   0.03306119,
   0.05388631,
   0.07248676,
   0.1136284,
   0.170392,
   0.2384982,
   0.1336125,
   0.8835256};
   Double_t _fehx3015[12] = {
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
   50,
   50};
   Double_t _fehy3015[12] = {
   0.002535213,
   0.006894776,
   0.01351535,
   0.02225715,
   0.02972789,
   0.04488367,
   0.06183964,
   0.0874086,
   0.09705783,
   0.2233351,
   0.08104018,
   0.08984857};
   grae = new TGraphAsymmErrors(12,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineColor(7);
   grae->SetMarkerColor(7);
   grae->SetMarkerStyle(33);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,330);
   Graph_Graph3015->SetMinimum(0.02396324);
   Graph_Graph3015->SetMaximum(1.097337);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3015->SetLineColor(ci);
   Graph_Graph3015->GetXaxis()->SetLabelFont(42);
   Graph_Graph3015->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3015->GetXaxis()->SetTitleFont(42);
   Graph_Graph3015->GetYaxis()->SetLabelFont(42);
   Graph_Graph3015->GetYaxis()->SetTitleFont(42);
   Graph_Graph3015->GetZaxis()->SetLabelFont(42);
   Graph_Graph3015->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3015->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3015);
   
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
   pt_LaTex = pt->AddText("#bf{m_{H} = 350 GeV}");
   pt->Draw();
   
   pt = new TPaveText(0.59,0.76,0.89,0.8,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillStyle(0);
   pt->SetTextAlign(32);
   pt->SetTextSize(0.025);
   pt_LaTex = pt->AddText("#bf{m_{X} = 160 GeV}");
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
