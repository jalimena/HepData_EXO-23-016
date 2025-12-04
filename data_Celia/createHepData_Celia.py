from __future__ import print_function
from hepdata_lib import Submission, Table, Variable, Uncertainty, RootFileReader

def makeVariable(plot, label, is_independent, is_binned, is_symmetric, units, CME=13.6, uncertainty=True):
    var = Variable(label, is_independent=is_independent, is_binned=is_binned, units=units)
    var.values = plot["y"]
    if uncertainty:
        unc = Uncertainty("", is_symmetric=is_symmetric)
        unc.values = plot["dy"]
        var.add_uncertainty(unc)
    var.add_qualifier("SQRT(S)", CME, "TeV")
    #var.add_qualifier("HLT rate","2016")
    return var


#########################################################
# Figure 48
def makeScoutingMuonDataEffVSPtTable():
    table = Table("Scouting dimuon trigger eff vs pt in data")
    table.description = "L1T+HLT efficiency of the dimuon scouting trigger as a function of the subleading muon $p_{T}$, for 2024 data. The efficiency of the L1T dimuon seeds (pink squares) and the HLT dimuon scouting trigger with the vertex-unconstrained reconstruction algorithm (blue triangles) is shown. The events in the denominator are required to have at least two vertex-unconstrained muons ($N_{\\mu(\\text{no-vtx})} > 2$) and additionally have $\\chi^2/N_{\\text{dof}} < 3$ and $\\Delta R > 0.1$."

    table.location = "Data from Fig. 48"
    table.add_image("LLP-Paper_DoubleMuonEfficiency_data_pt.pdf")
    reader = RootFileReader("Scouting_DoubleMuonEfficiency_data_pt.root")
    graph_L1 = reader.read_teff("efficiency_pt_L1;1")
    graph_HLT = reader.read_teff("efficiency_pt_HLT;1")

    subpT = Variable("sub $\mathrm{p_{T}}$", is_independent=True, is_binned=False, units="GeV")
    subpT.values = graph_L1["x"]

    ### add variables and add table to submission
    table.add_variable(subpT)
    table.add_variable(makeVariable(plot = graph_L1, label = "Dimuon Level-1 seeds", is_independent=False, is_binned=False, is_symmetric=False, units=""))
    table.add_variable(makeVariable(plot = graph_HLT, label = "Dimuon HLT scouting trigger", is_independent=False, is_binned=False, is_symmetric=False, units=""))

    return table


#########################################################
# Figure 49
def makeScoutingMuonSigEffVSLxyTable():
    table = Table("Scouting dimuon trigger eff vs Lxy")
    table.description = "L1T+HLT efficiency of the dimuon scouting trigger as a function of the generator-level $L_{xy}$, for HAHM signal events, for 2024 conditions. The efficiency is shown for $m_{Z_D} = 14$ GeV and $c\\tau = 100$ mm (pink squares) and $m_{Z_D} = 2.5$ GeV and $c\\tau = 100$ mm (blue triangles). The muons are required to have $p_{T} > 15$ GeV and $|\\eta| < 2.4$ at the generator level."

    table.location = "Data from Fig. 49"
    table.add_image("LLP-Paper_signalEfficiency_lxy.pdf")
    reader = RootFileReader("Scouting_signalEfficiency_lxy.root")
    graph_2p5 = reader.read_teff("efficiency_minlxy_DoubleMuonNoVtx_2p5_100mm;1")
    graph_14 = reader.read_teff("efficiency_minlxy_DoubleMuonNoVtx_14_100mm;1")

    lxy = Variable("gen $\mathrm{L_{xy}}$", is_independent=True, is_binned=False, units="cm")
    lxy.values = graph_2p5["x"]

    ### add variables and add table to submission
    table.add_variable(lxy)
    table.add_variable(makeVariable(plot = graph_2p5, label = "$m_{Z_D} = 2.5$ GeV, $c\\tau = 100$ mm", is_independent=False, is_binned=False, is_symmetric=False, units=""))
    table.add_variable(makeVariable(plot = graph_14, label = "$m_{Z_D} = 14$ GeV, $c\\tau = 100$ mm", is_independent=False, is_binned=False, is_symmetric=False, units=""))

    return table


#########################################################
# Figure 50
def makeScoutingMuonSigEffVSPtTable(mass):
    table = Table("Scouting dimuon trigger eff vs sub $\mathrm{p_{T}}$ for m = " + mass)
    table.description = "L1T+HLT efficiency of the dimuon scouting trigger as a function of the generator-level subleading muon $\mathrm{p_{T}}$, for HAHM signal events for 2024 conditions. The efficiency is shown for $m_{Z_D}$ masses of 2.5 and 14 GeV, and $c\\tau$ values of 1 (purple squares), 10 (blue triangles), and 100 mm (pink circles). The muons are required to have $|\eta|<2.4$ at the generator level."
    
    if mass=="2.5":
        table.location = "Data from Fig. 50 left"
        table.add_image("LLP-Paper_signalEfficiency_pt_mZD-2p5GeV.pdf")
        reader = RootFileReader("Scouting_signalEfficiency_pt_mZD-2p5GeV.root")
        graph_1mm = reader.read_teff("efficiency_minpt_DoubleMuonNoVtx_2p5_1mm;1")
        graph_10mm = reader.read_teff("efficiency_minpt_DoubleMuonNoVtx_2p5_10mm;1")
        graph_100mm = reader.read_teff("efficiency_minpt_DoubleMuonNoVtx_2p5_100mm;1")
    if mass=="14":
        table.location = "Data from Fig. 50 right"
        table.add_image("LLP-Paper_signalEfficiency_pt_mZD-14GeV.pdf")
        reader = RootFileReader("Scouting_signalEfficiency_pt_mZD-14GeV.root")
        graph_1mm = reader.read_teff("efficiency_minpt_DoubleMuonNoVtx_14_1mm;1")
        graph_10mm = reader.read_teff("efficiency_minpt_DoubleMuonNoVtx_14_10mm;1")
        graph_100mm = reader.read_teff("efficiency_minpt_DoubleMuonNoVtx_14_100mm;1")

    subpT = Variable("sub $\mathrm{p_{T}}$", is_independent=True, is_binned=False, units="GeV")
    subpT.values = graph_1mm["x"]

    ### add variables and add table to submission
    table.add_variable(subpT)
    table.add_variable(makeVariable(plot = graph_1mm, label = "$m_{Z_D} = %s$ GeV, $c\\tau = 1$ mm"%(mass), is_independent=False, is_binned=False, is_symmetric=False, units=""))
    table.add_variable(makeVariable(plot = graph_10mm, label = "$m_{Z_D} = %s$ GeV, $c\\tau = 10$ mm"%(mass), is_independent=False, is_binned=False, is_symmetric=False, units=""))
    table.add_variable(makeVariable(plot = graph_100mm, label = "$m_{Z_D} = %s$ GeV, $c\\tau = 100$ mm"%(mass), is_independent=False, is_binned=False, is_symmetric=False, units=""))

    return table

#########################################################
# Figure 51
def makeScoutingMuonRecoEffVSLxyTable(mass):
    table = Table("Scouting reconstruction eff vs Lxy for m = " + mass)
    table.description = "Scouting muon reconstruction efficiency of the vertex-constrained (pink circles) and vertex-unconstrained (blue triangles) algorithms as a function of the generator-level $L_{xy}$, for HAHM signal events for 2024 conditions. This efficiency is representative of the reconstruction efficiency of the L2 and L3 HLT muon reconstruction employed in scouting data. The efficiency is shown for $m_{Z_D} = 2.5$ GeV and $c\\tau = 100$ mm and $m_{Z_D} = 14$ GeV and $c\\tau = 100$ mm. The muons are required to have $p_{T} > 15$ GeV and $|\\eta| < 2.4$ at the generator level."
    
    if mass=="2.5":
        table.location = "Data from Fig. 51 left"
        table.add_image("LLP-Paper_signalEfficiency_recolxy_2p5GeV_100mm.pdf")
        reader = RootFileReader("Scouting_signalEfficiency_lxy_2p5GeV_100mm.root")
        graph_vtx = reader.read_teff("efficiency_lxy_vtx_2p5_100mm;1")
        graph_novtx = reader.read_teff("efficiency_lxy_novtx_2p5_100mm;1")
    if mass=="14":
        table.location = "Data from Fig. 51 right"
        table.add_image("LLP-Paper_signalEfficiency_recolxy_14GeV_100mm.pdf")
        reader = RootFileReader("Scouting_signalEfficiency_lxy_14GeV_100mm.root")
        graph_vtx = reader.read_teff("efficiency_lxy_vtx_14_100mm;1")
        graph_novtx = reader.read_teff("efficiency_lxy_novtx_14_100mm;1")

    lxy = Variable("gen $\mathrm{L_{xy}}$", is_independent=True, is_binned=False, units="cm")
    lxy.values = graph_vtx["x"]

    ### add variables and add table to submission
    table.add_variable(lxy)
    table.add_variable(makeVariable(plot = graph_vtx, label = "Vertex-constrained reconstruction", is_independent=False, is_binned=False, is_symmetric=False, units=""))
    table.add_variable(makeVariable(plot = graph_novtx, label = "Vertex-unconstrained reconstruction", is_independent=False, is_binned=False, is_symmetric=False, units=""))

    return table

#########################################################
# Figure 52
def makeScoutingMuonResolutionTable():
    table = Table("Scouting resolution vs pt")
    table.description = "The $p_{T}$ resolution of scouting muons with respect to offline muons, as a function of the scouting muon $p_{T}$, for 2024 data events. The root mean square (RMS) of the difference of the scouting muon $p_{T}$ and the offline muon $p_{T}$, divided by the offline muon $p_{T}$, is plotted. The dimuon $\\Delta R$ is required to be greater than 0.2, and the scouting muon $p_{T}$ is required to be greater than 3 GeV. The resolution is shown for muons in the barrel (blue filled points) and the endcaps (purple filled triangles) that are reconstructed with both the vertex-unconstrained reconstruction algorithm, as well as for muons in the barrel (red filled squares) and the endcaps (orange unfilled squares) that are reconstructed with the vertex-constrained reconstruction algorithm. A special monitoring data set is used that collects events triggered by a mixture of HLT paths (both scouting and standard triggers) with a very high prescale, in which all information about the muon objects is stored from the offline and scouting reconstruction."

    table.location = "Data from Fig. 52"
    table.add_image("LLP-Paper_bothReco_ptres_graph_BE_2024.pdf")

    reader_noVtxMu = RootFileReader("TGraph_ptres_noVtxMu_v2.root")
    graph_noVtxMu_B = reader_noVtxMu.read_graph("noVtxMu_B;1")
    graph_noVtxMu_E = reader_noVtxMu.read_graph("noVtxMu_E;1")

    reader_vtxMu = RootFileReader("TGraph_ptres_vtxMu_v2.root")
    graph_vtxMu_B = reader_vtxMu.read_graph("vtxMu_B;1")
    graph_vtxMu_E = reader_vtxMu.read_graph("vtxMu_E;1")

    pT = Variable("$\mathrm{p_{T}}$", is_independent=True, is_binned=False, units="GeV")
    pT.values = graph_noVtxMu_B["x"]

    ### add variables and add table to submission
    table.add_variable(pT)
    table.add_variable(makeVariable(plot = graph_noVtxMu_B, label = "Barrel: vertex-unconstrained reconstruction", is_independent=False, is_binned=False, is_symmetric=True, units=""))
    table.add_variable(makeVariable(plot = graph_noVtxMu_E, label = "Endcap: vertex-unconstrained reconstruction", is_independent=False, is_binned=False, is_symmetric=True, units=""))
    table.add_variable(makeVariable(plot = graph_vtxMu_B, label = "Barrel: vertex-constrained reconstruction", is_independent=False, is_binned=False, is_symmetric=True, units=""))
    table.add_variable(makeVariable(plot = graph_vtxMu_E, label = "Encap: vertex-constrained reconstruction", is_independent=False, is_binned=False, is_symmetric=True, units=""))

    return table

###################################################################################################### 

def main():

    #create submission
    submission = Submission()

    submission.read_abstract("abstract.txt")
    #
    submission.add_table(makeScoutingMuonDataEffVSPtTable()) # Figure 48
    #
    submission.add_table(makeScoutingMuonSigEffVSLxyTable()) # Figure 49
    #
    submission.add_table(makeScoutingMuonSigEffVSPtTable("2.5")) # Figure 50 left
    submission.add_table(makeScoutingMuonSigEffVSPtTable("14")) # Figure 50 right
    #
    submission.add_table(makeScoutingMuonRecoEffVSLxyTable("2.5")) # Figure 51 left
    submission.add_table(makeScoutingMuonRecoEffVSLxyTable("14")) # Figure 51 right
    #
    submission.add_table(makeScoutingMuonResolutionTable()) # Figure 52 - preliminary deactivated because the input looks broken (solving it)

    for table in submission.tables:
        table.keywords["cmenergies"] = [13600]

    #submission.add_additional_resource("Signal generation", "data/signalGeneration.tar.gz", copy_file=True)

    submission.create_files("hepdataRecord",remove_old=True)

    
if __name__ == '__main__':
    main()

