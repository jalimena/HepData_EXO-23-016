#ifdef __CLING__
#pragma cling optimize(0)
#endif
void overlay_acceptance_350_80_CTau-1000mm()
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
   
   TH1D *frame__2 = new TH1D("frame__2","",100,0,1000);
   frame__2->SetMinimum(0);
   frame__2->SetMaximum(1.3);
   frame__2->SetDirectory(0);
   frame__2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame__2->SetLineColor(ci);
   frame__2->GetXaxis()->SetTitle("LLP decay R [cm]");
   frame__2->GetXaxis()->SetRange(1,80);
   frame__2->GetXaxis()->SetLabelFont(42);
   frame__2->GetXaxis()->SetTitleOffset(1);
   frame__2->GetXaxis()->SetTitleFont(42);
   frame__2->GetYaxis()->SetTitle("L1T+HLT acceptance");
   frame__2->GetYaxis()->SetLabelFont(42);
   frame__2->GetYaxis()->SetTitleFont(42);
   frame__2->GetZaxis()->SetLabelFont(42);
   frame__2->GetZaxis()->SetTitleOffset(1);
   frame__2->GetZaxis()->SetTitleFont(42);
   frame__2->Draw("");
   TBox *box = new TBox(0,0,110,1);

   ci = 1183;
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

   ci = 1184;
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

   ci = 1185;
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

   ci = 1186;
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
   
   Double_t _fx3006[13] = {
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
   Double_t _fy3006[13] = {
   0.04166667,
   0.04241071,
   0.05249257,
   0.05743629,
   0.06430868,
   0.0615518,
   0.08121597,
   0.07916464,
   0.07933081,
   0.07094595,
   0.07575277,
   0.08001448,
   0.0731548};
   Double_t _felx3006[13] = {
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
   Double_t _fely3006[13] = {
   0.003420703,
   0.00360925,
   0.00406707,
   0.00455661,
   0.00494059,
   0.005026575,
   0.005852336,
   0.005984726,
   0.006316037,
   0.0061259,
   0.004733684,
   0.005189871,
   0.00669455};
   Double_t _fehx3006[13] = {
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
   Double_t _fehy3006[13] = {
   0.003699408,
   0.003914228,
   0.004374804,
   0.004907634,
   0.005305374,
   0.005423394,
   0.006247417,
   0.00641044,
   0.00678986,
   0.006631681,
   0.005011859,
   0.005504861,
   0.007279814};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(13,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
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
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,176);
   Graph_Graph3006->SetMinimum(0.03332422);
   Graph_Graph3006->SetMaximum(0.09238513);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3006->SetLineColor(ci);
   Graph_Graph3006->GetXaxis()->SetLabelFont(42);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3006->GetXaxis()->SetTitleFont(42);
   Graph_Graph3006->GetYaxis()->SetLabelFont(42);
   Graph_Graph3006->GetYaxis()->SetTitleFont(42);
   Graph_Graph3006->GetZaxis()->SetLabelFont(42);
   Graph_Graph3006->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3006->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3006);
   
   grae->Draw("pe ");
   
   Double_t _fx3007[20] = {
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
   Double_t _fy3007[20] = {
   0.05525965,
   0.04639175,
   0.0604311,
   0.05247181,
   0.05371901,
   0.0495,
   0.05772231,
   0.06146179,
   0.05558912,
   0.04467135,
   0.05368154,
   0.04509723,
   0.05369436,
   0.05630165,
   0.0839563,
   0.3168968,
   0.4433308,
   0.4439764,
   0.3900376,
   0.1097308};
   Double_t _felx3007[20] = {
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
   Double_t _fely3007[20] = {
   0.004184845,
   0.004049321,
   0.00469517,
   0.004661464,
   0.004850655,
   0.004868488,
   0.005342113,
   0.005678942,
   0.005657186,
   0.005236045,
   0.004308981,
   0.004234849,
   0.004848481,
   0.005261556,
   0.006693052,
   0.01213881,
   0.01413792,
   0.0147967,
   0.01531885,
   0.01015504};
   Double_t _fehx3007[20] = {
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
   Double_t _fehy3007[20] = {
   0.004492981,
   0.004398824,
   0.005047725,
   0.005067994,
   0.005280208,
   0.0053425,
   0.005824876,
   0.006188671,
   0.006223359,
   0.005853065,
   0.004646662,
   0.00462998,
   0.005277861,
   0.005742808,
   0.007192497,
   0.01238632,
   0.01422779,
   0.01489388,
   0.0155321,
   0.01100486};
   grae = new TGraphAsymmErrors(20,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
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
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,330);
   Graph_Graph3007->SetMinimum(0.03549177);
   Graph_Graph3007->SetMaximum(0.5008138);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3007->SetLineColor(ci);
   Graph_Graph3007->GetXaxis()->SetLabelFont(42);
   Graph_Graph3007->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3007->GetXaxis()->SetTitleFont(42);
   Graph_Graph3007->GetYaxis()->SetLabelFont(42);
   Graph_Graph3007->GetYaxis()->SetTitleFont(42);
   Graph_Graph3007->GetZaxis()->SetLabelFont(42);
   Graph_Graph3007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3007->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3007);
   
   grae->Draw("pe ");
   
   Double_t _fx3008[25] = {
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
   Double_t _fy3008[25] = {
   0.09819639,
   0.1120533,
   0.1369681,
   0.1992218,
   0.2541485,
   0.3575419,
   0.4754572,
   0.5243309,
   0.571831,
   0.650974,
   0.6287879,
   0.6446469,
   0.6976744,
   0.6884273,
   0.6944444,
   0.6475771,
   0.6961326,
   0.754386,
   0.707483,
   0.6055046,
   0.7272727,
   0.6744186,
   0.3012048,
   0.1230769,
   0.08823529};
   Double_t _felx3008[25] = {
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
   Double_t _fely3008[25] = {
   0.006706763,
   0.007826436,
   0.008952021,
   0.01129316,
   0.01308475,
   0.01382497,
   0.015952,
   0.01805759,
   0.01937725,
   0.02026879,
   0.02221997,
   0.02431553,
   0.02680318,
   0.02728208,
   0.02956676,
   0.03454924,
   0.03803963,
   0.03738582,
   0.04234646,
   0.05223614,
   0.04910914,
   0.05828511,
   0.05341025,
   0.04146227,
   0.03445579};
   Double_t _fehx3008[25] = {
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
   Double_t _fehy3008[25] = {
   0.007124755,
   0.008314973,
   0.009453114,
   0.01177783,
   0.0135289,
   0.01405915,
   0.01600072,
   0.01799632,
   0.01916724,
   0.01975797,
   0.02171033,
   0.02362409,
   0.02558764,
   0.02609925,
   0.02813201,
   0.03316139,
   0.03570357,
   0.03415561,
   0.03927851,
   0.05012145,
   0.04455774,
   0.0537928,
   0.05873562,
   0.05511346,
   0.04901151};
   grae = new TGraphAsymmErrors(25,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
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
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,140,860);
   Graph_Graph3008->SetMinimum(0.04840155);
   Graph_Graph3008->SetMaximum(0.8620178);
   Graph_Graph3008->SetDirectory(0);
   Graph_Graph3008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3008->SetLineColor(ci);
   Graph_Graph3008->GetXaxis()->SetLabelFont(42);
   Graph_Graph3008->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3008->GetXaxis()->SetTitleFont(42);
   Graph_Graph3008->GetYaxis()->SetLabelFont(42);
   Graph_Graph3008->GetYaxis()->SetTitleFont(42);
   Graph_Graph3008->GetZaxis()->SetLabelFont(42);
   Graph_Graph3008->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3008->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3008);
   
   grae->Draw("pe ");
   
   Double_t _fx3009[29] = {
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
   Double_t _fy3009[29] = {
   0.08333333,
   0.03614458,
   0,
   0.02564103,
   0.08333333,
   0.133829,
   0.2206897,
   0.2476038,
   0.2370618,
   0.2627737,
   0.2522361,
   0.25,
   0.1866359,
   0.2441406,
   0.2580645,
   0.3209877,
   0.3866279,
   0.3431734,
   0.3814815,
   0.4764151,
   0.6627219,
   0.7651007,
   0.7083333,
   0.6981132,
   0.8192771,
   0.6621622,
   0.3703704,
   0.1956522,
   0.03125};
   Double_t _felx3009[29] = {
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
   Double_t _fely3009[29] = {
   0.06905547,
   0.01961522,
   0,
   0.00834188,
   0.01289258,
   0.01488895,
   0.01757561,
   0.01762706,
   0.01775015,
   0.01925702,
   0.0187958,
   0.01991608,
   0.01908526,
   0.01943215,
   0.02081274,
   0.02395354,
   0.02733779,
   0.03003253,
   0.03090727,
   0.0364716,
   0.0402706,
   0.03994262,
   0.04740285,
   0.05116021,
   0.0524337,
   0.06377757,
   0.07155205,
   0.06101359,
   0.02587173};
   Double_t _fehx3009[29] = {
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
   Double_t _fehy3009[29] = {
   0.1666031,
   0.0339303,
   0.01474506,
   0.01149773,
   0.01482134,
   0.01633599,
   0.01858676,
   0.01847066,
   0.01867008,
   0.02016457,
   0.01972518,
   0.02097599,
   0.02061743,
   0.02048264,
   0.02190793,
   0.02488395,
   0.02803274,
   0.03126213,
   0.03183879,
   0.03670889,
   0.03819437,
   0.03605391,
   0.04359934,
   0.04704866,
   0.0437059,
   0.05889589,
   0.07696663,
   0.07648384,
   0.068259};
   grae = new TGraphAsymmErrors(29,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
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
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,7,763);
   Graph_Graph3009->SetMinimum(0);
   Graph_Graph3009->SetMaximum(0.9492813);
   Graph_Graph3009->SetDirectory(0);
   Graph_Graph3009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3009->SetLineColor(ci);
   Graph_Graph3009->GetXaxis()->SetLabelFont(42);
   Graph_Graph3009->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3009->GetXaxis()->SetTitleFont(42);
   Graph_Graph3009->GetYaxis()->SetLabelFont(42);
   Graph_Graph3009->GetYaxis()->SetTitleFont(42);
   Graph_Graph3009->GetZaxis()->SetLabelFont(42);
   Graph_Graph3009->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3009->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3009);
   
   grae->Draw("pe ");
   
   Double_t _fx3010[15] = {
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
   Double_t _fy3010[15] = {
   0.301367,
   0.351152,
   0.381049,
   0.4053805,
   0.4307141,
   0.4588991,
   0.4670905,
   0.4814241,
   0.5284922,
   0.4996598,
   0.5662904,
   0.5198833,
   0.5503933,
   0.4230754,
   0.4068718};
   Double_t _felx3010[15] = {
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
   Double_t _fely3010[15] = {
   0.002653676,
   0.003862486,
   0.005454623,
   0.007488774,
   0.00978628,
   0.01297092,
   0.01642716,
   0.02023458,
   0.02722803,
   0.03532162,
   0.03226299,
   0.04531469,
   0.06798441,
   0.0687253,
   0.1086904};
   Double_t _fehx3010[15] = {
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
   Double_t _fehy3010[15] = {
   0.002666941,
   0.003881905,
   0.005484446,
   0.007532376,
   0.009839639,
   0.01302545,
   0.01649659,
   0.02029341,
   0.02706767,
   0.03532481,
   0.03174154,
   0.045014,
   0.06633655,
   0.07148989,
   0.1170371};
   grae = new TGraphAsymmErrors(15,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineColor(7);
   grae->SetMarkerColor(7);
   grae->SetMarkerStyle(33);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,330);
   Graph_Graph3010->SetMinimum(0.2663265);
   Graph_Graph3010->SetMaximum(0.6485847);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3010->SetLineColor(ci);
   Graph_Graph3010->GetXaxis()->SetLabelFont(42);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3010->GetXaxis()->SetTitleFont(42);
   Graph_Graph3010->GetYaxis()->SetLabelFont(42);
   Graph_Graph3010->GetYaxis()->SetTitleFont(42);
   Graph_Graph3010->GetZaxis()->SetLabelFont(42);
   Graph_Graph3010->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3010->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3010);
   
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
   pt_LaTex = pt->AddText("#bf{m_{X} = 80 GeV}");
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
