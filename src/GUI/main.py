# main.py
import sys
from PyQt5.QtWidgets import QApplication, QMainWindow
from PyQt5.QtCore import QTimer
from FIKS_GO import Ui_MainWindow  # Import the UI class
import serial

class MainWindow(QMainWindow, Ui_MainWindow):
    def __init__(self):
        super(MainWindow, self).__init__()
        self.setupUi(self)

        # Set up serial communication with Arduino
        self.arduino = serial.Serial('COM12', 9600)  # Change 'COM3' to the appropriate port

        # Connect button signals to Arduino functions
        self.pushButton_5.clicked.connect(self.send_JALAN_command)
        self.pushButton_3.clicked.connect(self.send_HORMAT_command)
        self.pushButton.clicked.connect(self.send_BERDIRI_command)
        self.pushButton_4.clicked.connect(self.send_SQUAT_command)
        self.pushButton_2.clicked.connect(self.send_LAMBAI_command)
    
        # Add connections for other buttons if needed

        # Set up a timer to periodically check for Arduino messages
        self.timer = QTimer(self)
        self.timer.timeout.connect(self.read_serial_data)
        self.timer.start(100)  # Adjust the interval based on your needs

    def send_command(self, command):
        self.arduino.write(command.encode('utf-8'))

    def send_JALAN_command(self):
        self.send_command("J")

    def send_HORMAT_command(self):
        self.send_command("H")

    def send_BERDIRI_command(self):
        self.send_command("B")

    def send_SQUAT_command(self):
        self.send_command("S")

    def send_LAMBAI_command(self):
        self.send_command("L")
        # Add code for other custom commands if needed

    def read_serial_data(self):
        if self.arduino.in_waiting > 0:
            arduino_data = self.arduino.readline().decode('utf-8').strip()
            # Process Arduino data as needed
            print("Arduino:", arduino_data)

if __name__ == "__main__":
    app = QApplication(sys.argv)
    window = MainWindow()
    window.show()
    sys.exit(app.exec_())