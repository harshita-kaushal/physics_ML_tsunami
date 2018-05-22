# used https://github.com/shantnu/PyQt_first/blob/master/pyqt_skeleton.py
# for skeleton code on which paramGenerator.py builds on
# Creates new qt GUI application, initializes parent classes, 
# and loads GUI file into memory

import sys
from PyQt4 import QtCore, QtGui, uic
 
qtCreatorFile = "paramGenerator.ui" # Enter file here.
 
Ui_MainWindow, QtBaseClass = uic.loadUiType(qtCreatorFile)
 
class MyApp(QtGui.QMainWindow, Ui_MainWindow):
    def __init__(self):
        QtGui.QMainWindow.__init__(self)
        Ui_MainWindow.__init__(self)
        self.setupUi(self)
        self.generateFile.clicked.connect(self.ReadData)

    def ReadData(self):
        self.ReadStrings
        self.ReadNums
        self.ReadBools
        self.ReadSpinBox

    def ReadStrings(self):
        outfilename = self.outfilename_box.toPlainText()
        bathyfile = self.bathyfile_box.toPlainText()
        deformationfile = self.deformationfile_box.toPlainText()
        initialstatefilename = self.initialstatefilename_box.toPlainText()
        finalstatefilename = self.finalstatefilename_box.toPlainText()
        initialconditions = self.initialconditions_box.toPlainText()
        # based on parse order, write params to text file

    def ReadNums(self):
        bumpheight = int(self.bumpheight_box.toPlainText())
        gaussheight = int(self.gaussheight_box.toPlainText())
        gaussstd = int(self.guassstd_box.toPlainText())
        flatdepth = int(self.flatdepth_box.toPlainText())
        # write to file

    def ReadBools(self):
        if self.movebool_yes.isChecked() == True
            movebool = 1
        else 
            movebool = 0
        if self.flattenbool_yes.isChecked() == True
            flattenbool = 1
        else 
            flattenbool = 0
        if self.diffuse_yes.isChecked() == True
            diffuse = 1
        else 
            diffuse = 0
        if self.accel_yes.isChecked() == True
            accel = 1
        else 
            accel = 0
        if self.checmsimhealth_yes.isChecked() == True
            checmsimhealth = 1
        else 
            checmsimhealth = 0
        if self.doplanefit_yes.isChecked() == True
            doplanefit = 1
        else 
            doplanefit = 0
        if self.writesimstate_yes.isChecked() == True
            writesimstate = 1
        else 
            writesimstate = 0
        # write to file 

    def ReadSpinBox(self):
        ndiffusions = (self.ndiffusions_spinBox.value())
        dt = (self.dt_spinBox.value())
        Nsteps = (self.Nsteps_spinBox.value())
        currentstep = (self.currentstep_spinBox.value())
        updatestep = (self.updatestep_spinBox.value())
        savestep = (self.savestep_spinBox.value())
        time = (self.time_timeEdit.time())
        floatprecision = float(self.floatprecision_spinBox.value())
        # write to file
 
if __name__ == "__main__":
    app = QtGui.QApplication(sys.argv)
    window = MyApp()
    window.show()
    sys.exit(app.exec_())