/**
 * @file /include/udp_project_receive/main_window.hpp
 *
 * @brief Qt based gui for %(package)s.
 *
 * @date November 2010
 **/
#ifndef udp_project_receive_MAIN_WINDOW_H
#define udp_project_receive_MAIN_WINDOW_H

/*****************************************************************************
** Includes
*****************************************************************************/

#include <QMainWindow>
#include "ui_main_window.h"
#include "qnode.hpp"

#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/core/mat.hpp>
#include <opencv2/imgcodecs.hpp>

/*****************************************************************************
** Namespace
*****************************************************************************/

namespace udp_project_receive
{
  /*****************************************************************************
  ** Interface [MainWindow]
  *****************************************************************************/
  /**
   * @brief Qt central, all operations relating to the view part here.
   */
  class MainWindow : public QMainWindow
  {
    Q_OBJECT

  public:
    MainWindow(int argc, char** argv, QWidget* parent = 0);
    ~MainWindow();
    u_int16_t PORT; 
    QHostAddress MY_IP;
    QHostAddress NOOK_IP;
    QUdpSocket* img_socket; 
    cv:: Mat img_HSV; 
 void on_horizontalSlider_valueChanged(int value);
  void on_horizontalSlider_valueChanged_2(int value2);
   void on_horizontalSlider_valueChanged_3(int value3);
    void on_horizontalSlider_valueChanged_4(int value4);
     void on_horizontalSlider_valueChanged_5(int value5);
      void on_horizontalSlider_valueChanged_6(int value6);
      cv::Mat img_mask; 
cv::Mat region_of_interest(cv::Mat img_edges,cv::Point *points);
cv::Mat img_masked; 

    
    void call_back();
     cv::Mat img;
     cv::Mat img2;
     cv::Mat clone_mat; 
     bool is_true =0;
     int x = 0; 
     int y = 0; 
     int x2 = 0; 
     int y2 = 0; 
     int width = 0; 
     int height = 0; 
     int width2 = 0; 
     int height2 = 0; 
     int value = 0; 
         int value2 = 0; 
             int value3 = 0; 
                 int value4 = 0; 
                     int value5 = 0; 
                         int value6 = 0; 

   
    public Q_SIGNAL: 
    void readyRead();
    
    


  public Q_SLOTS: 
  void Load();

  private:
    Ui::MainWindowDesign ui;
    QNode qnode;
    udp::UDP udp_; 
    
   
  };

}  // namespace s

#endif  // udp_project_receive_MAIN_WINDOW_H
