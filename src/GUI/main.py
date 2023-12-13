# main.py
import sys
from PyQt5.QtWidgets import QApplication, QMainWindow
from PyQt5.QtCore import QTimer
from humanoidrobot2 import Ui_MainWindow  # Import the UI class
import serial

class MainWindow(QMainWindow, Ui_MainWindow):
    def __init__(self):
        super(MainWindow, self).__init__()
        self.setupUi(self)

        # Set up serial communication with Arduino
        self.arduino = serial.Serial('COM7', 9600)  # Change 'COM3' to the appropriate port

        # Connect button signals to Arduino functions
        self.byeButton.clicked.connect(self.send_bye_command)
        self.punchKiriButton.clicked.connect(self.send_punch_command)
        self.punchKananButton.clicked.connect(self.send_punch2_command)
        self.slebewButton.clicked.connect(self.send_custom_command)
        # Add connections for other buttons if needed

        # Set up a timer to periodically check for Arduino messages
        self.timer = QTimer(self)
        self.timer.timeout.connect(self.read_serial_data)
        self.timer.start(100)  # Adjust the interval based on your needs

    def send_command(self, command):
        self.arduino.write(command.encode('utf-8'))

    def send_bye_command(self):
        self.send_command("w")

    def send_punch_command(self):
        self.send_command("a")

    def send_punch2_command(self):
        self.send_command("d")

    def send_custom_command(self):
        self.send_command("s")
        
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
