


// Computes and prints n! for a given n.
// Uses several basic elements of C++.
#include <iostream>
#include <child/hello.h>
#include <child/hello2.h>
#include <cctype>
#include <tuple>
#include <string>

#include <QApplication> // Required for the application object
#include <QWidget>      // Required for the base window widget
#include <QLabel>      // Required for the base window widget
#include <QVBoxLayout>



std::string filterNumbers(const std::string& inputString) {
  std::string filteredString;
  for (char c : inputString) {
    if (std::isdigit(c)) {
      filteredString += c;
    }
  }
  return filteredString;
}



std::tuple<bool, int, std::string> toNumbers(const std::string& inputString) {
  int converted_int;
  try {
    converted_int = std::stoi(inputString);
    return std::make_tuple(true, converted_int, "nothing");
  } catch (const std::invalid_argument& e) {
    return std::make_tuple(false, 0, e.what()) ;
  } catch (const std::out_of_range& e) {
    return std::make_tuple(false, 0, e.what());
  }
}



int main(int argc, char *argv[])
{
  
  // template <typename T> std::string type_name();
  // Create a QApplication object. This is the central object for Qt applications,
  // managing application-wide resources and the event loop.
  QApplication app(argc, argv);
  
  // Create a QWidget object. When created without a parent, it acts as a top-level window.
  // QWidget *window = new QWidget();
  QWidget window;
  // setCentralWidget(window);

  QVBoxLayout *layout = new QVBoxLayout(window);

  QLabel *pointOneLongLabel = new QLabel(QApplication::translate("windowlayout", "Longitude:"));

  pointOneLongLabel->setFrameStyle(QFrame::Panel | QFrame::Sunken);
  pointOneLongLabel->setText("first line\nsecond line");
  pointOneLongLabel->setAlignment(Qt::AlignBottom | Qt::AlignRight);

  layout->addWidget(pointOneLongLabel);
  
  // Set the title of the window.
  window->setWindowTitle("My Simple Qt Window");

  // Set the initial size of the window (width, height).
  window->resize(400, 300);

  // Show the window.
  window->show();

  // Start the Qt event loop. This makes the application responsive and handles
  // user interactions until the window is closed.
  return app.exec();
}
