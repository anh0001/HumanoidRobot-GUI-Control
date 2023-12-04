# Table of Contents
1. [Introduction and Initial Analysis](#1-introduction-and-initial-analysis)
   1.1. [Pendahuluan](#11-pendahuluan)
   1.2. [Initial Thought Process](#12-initial-thought-process)
2. [Requirement Analysis and Specification](#2-requirement-analysis-and-specification)
   2.1. [User Requirements](#21-user-requirements)
   2.2. [System Requirements](#22-system-requirements)
   2.3. [Tools and Technologies](#23-tools-and-technologies)
3. [Conceptual Design](#3-conceptual-design)
   3.1. [System Architecture](#31-system-architecture)
   3.2. [Interface Design](#32-interface-design)
   3.3. [Control Algorithm Design](#33-control-algorithm-design)
4. [Detailed Design and Development](#4-detailed-design-and-development)
   4.1. [Component Design](#41-component-design)
   4.2. [Coding and Implementation](#42-coding-and-implementation)
   4.3. [Integration](#43-integration)
   4.4. [Unique Features](#44-unique-features)
5. [Testing, Evaluation, and Optimization](#5-testing-evaluation-and-optimization)
   5.1. [Testing Strategy](#51-testing-strategy)
   5.2. [Performance Evaluation](#52-performance-evaluation)
   5.3. [Optimization](#53-optimization)
6. [Collaboration and Project Management](#6-collaboration-and-project-management)
   6.1. [Teamwork Dynamics](#61-teamwork-dynamics)
   6.2. [Project Management](#62-project-management)
7. [Conclusion and Reflection](#7-conclusion-and-reflection)
   7.1. [Project Summary](#71-project-summary)
   7.2. [Future Work](#72-future-work)
   7.3. [Personal and Group Reflections](#73-personal-and-group-reflections)
8. [Appendices](#8-appendices)
   8.1. [Bill of Materials](#81-bill-of-materials)
   8.2. [Electrical Wiring and System Layout](#82-electrical-wiring-and-system-layout)
   8.3. [Code Repository](#83-code-repository)
   8.4. [Additional Documentation](#84-additional-documentation)
9. [References](#9-references)

## 1. Introduction and Initial Analysis
### 1.1 Pendahuluan
Kemajuan teknologi semakin berkembang sangat pesat pada kehidupan manusia pada saat ini, khususnya pada elektronika. Hal ini ditandai dengan adanya berbagai peralatan yang diciptakan dan dapat dioperasikan secara manual maupun otomatis. Kemajuan teknologi inilah maka berkembanglah suatu ilmu yang merupakan suatu pecahan dari ilmu elektronika yaitu dalam bidang robotika. Robot dapat diartikan suatu peralatan yang dioperasikan dengan atau tanpa bantuan manusia atau dengan kata lain bahwa robot merupakan suatu perangkat otomatis. Saat ini robot banyak digunakan dalam industri otomotip dan penyoderan alat elektronik, bahkan dalam beberapa tahun belakang ini diadakan suatu kontes atau perlombaan robot yang bertujuan untuk mengenal maupun memperluas ilmu pengetahuan khususnya dalam bidang ilmu robotika seperti kontes robot yang diadakan di Indonesia

#### 1.1.1 Tujuan
1. Tujuan utama dari robot humanoid ini adalah untuk melakukan gerakan seperti berdiri, hormat, squat jump, maju, dan mundur.
2. Membuat Model Kinematika dan Dinamika: untuk mewakili hubungan antara sendi-sendi dan bagaimana mereka berinteraksi saat gerakan terjadi. Ini termasuk menghitung sudut dan jarak relatif antar sendi.
3. Pemrograman Kontrol: menggunakan servo untuk mengendalikan setiap sendi. Juga memprogram algoritma untuk mengkoordinasikan gerakan antar lengan dan kaki, sehingga robot dapat melakukan tugas-tugas seperti mengambil barang atau berjalan.

#### 1.1.2 Tujuan
1. Untuk mengetahui cara penggunaan Graphical User Interface (GUI)
2. Untuk membuat gerakan pada robot humanoid
3. Untuk melakukan gerakan seperti berdiri, hormat, squat jump, maju, dan mundur.

### 1.2 Initial Thought Process
Pada proses brainstorming awal mencari referensi terlebih dahulu melalui internet terkait gerakan-gerakan robot humanoid, yang dilanjut dengan mencoba menggunakan aplikasi Open CM untuk set up ID servo pada robot. Setelah set up ID robot dilanjut dengan melanjutkan mencoba program untuk berjalan pada robot, dilanjut untuk membuat gerakan menarik pada robot. Yang akhirnya kami membuat keputusan untuk gerakan berjalan, gerakan bebas menarik, dan gerakan bebas yang nantinya akan disambungkan dengan GUI yang akan ditampilkan pada layar monitor. Adapun tantangan dalam proyek ini ialah: 1. Baru pertama kali menggunakan robot humanoid 2. Baru pertama kali menggunakan Graphical User Interface (GUI) 3. Membuat program agar bisa bergerak Peluang dalam proyek ini ialah: 1. Salah satu dari anggota team sudah berpengalaman dalam pemrograman robot 2. Terdapat device yang mumpuni dalam proyek kali ini

## 2 Requirement Analysis and Specification
### 2.1 User Requirements
Robot ini akan digunakan dan dioperasikan oleh mahasiswa sebagai modul pembelajaran dalam mata kuliah pemrograman sistem mekatronik. GUI nantinya akan dimasukkan data terlebih dahulu oleh pengguna, GUI pun akan menampilkan informasi yang dibutuhkan oleh pengguna, serta nantinya akan mengontrol servo dari robot humanoid.

### 2.2 System Requirements
Spesifikasi robot humanoid:
- Sensor IMU
- OpenCM robotis
- Dynamixel Ax 12 A
Koneksivitas robot dengan GUI akan menggunakan sambungan koneksi kabel usb type B dan didukung dengan power 220 V melalui power adaptor. Untuk pergerakan robot humanoid ini nantinya dapat menampilkan berjalan, menampilkan gerakan bebas, menampilkan opsi untuk gerakan menarik yang dibuat. Yang nantinya gerakan-gerakan ini ditampilkan pada GUI untuk mendapatkan nilai servo, tombol untuk menentukan gerakan menarik, dan slider untuk menggerakan servo-servo dari robot humanoid.

### 2.3 Tools and Technologies
- Robot humanoid dengan spesifikasi:
  1. Sensor IMU
  2. OpenCM robotis
  3. Dynamixel Ax 12A
- Aplikasi Qt Designer
- Aplikasi OpenCM
- Aplikasi Arduino IDE

![Tools and Technologies](path/to/image.jpg)

### 2.4 Target specification
**Fitur** | **Keterangan** | **Metrik Pengukuran** | **Nilai Capaian**
--- | --- | --- | ---
Gerakan 1 | Robot bergerak maju | ... | ...
Gerakan 2 | Robot bergerak mundur | | 
Gerakan 3 | Robot hormat | | 
Gerakan 4 | Robot squat jump | | 

## 3 Conceptual Design
### 3.1 System Architecture
Illustrate the high-level architecture of the system, including the GUI and control logic. (flowchart)

### 3.2 Interface Design
Sketch the preliminary design of the GUI, focusing on user interaction and experience. (screenshot gui)

### 3.3 Control Algorithm Design
Outline the design of control algorithms and data processing workflows.

## 4 Detailed Design and Development
### 4.1 Component Design
Delve into the design of individual components, modules, and functionalities.

### 4.2 Coding and Implementation
Document the coding process, adopted standards, and implementation challenges.

### 4.3 Integration
Discuss the integration of GUI with the control system, and among different system components.

### 4.4 Unique Features
Highlight any novel features, optimizations, or technologies employed.

## 5 Testing, Evaluation, and Optimization
### 5.1 Testing Strategy
Describe the testing methodologies, cases, and tools used. Emphasize on how the testing validates the targets specified in Section 2.4.

### 5.2 Performance Evaluation
Evaluate the system performance against the defined requirements and objectives. Include a comparative analysis with the targets specified in Section 2.4, illustrating how well the system meets or exceeds these targets.

### 5.3 Optimization
Discuss any optimizations made to enhance system performance and user experience.

## 6 Collaboration and Project Management
### 6.1 Teamwork Dynamics
Reflect on the collaborative endeavor, roles, and contributions of team members.

### 6.2 Project Management
Document the project timeline, milestones, and management practices adopted.

## 7 Conclusion and Reflection
### 7.1 Project Summary
Summarize the key achievements, learnings, and outcomes.

### 7.2 Future Work
Propose further enhancements, applications, and research directions.

### 7.3 Personal and Group Reflections
Reflect on the experience, challenges, and acquired knowledge.

## 8 Appendices
### 8.1 Bill of Materials
Detail the parts, costs, and sources.

### 8.2 Electrical Wiring and System Layout
Provide diagrams, schematics, and layout information.

### 8.3 Code Repository
Include links to the code repository, version control, and change logs.

### 8.4 Additional Documentation
Include any other relevant documentation, photos, or supporting materials.

## 9 References
Cite all references, tools, libraries, and external resources used in the project.
