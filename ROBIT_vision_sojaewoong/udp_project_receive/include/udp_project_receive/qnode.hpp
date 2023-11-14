/**
 * @file /include/udp_project_receive/qnode.hpp
 *
 * @brief Communications central!
 *
 * @date February 2011
 **/
/*****************************************************************************
** Ifdefs
*****************************************************************************/

#ifndef udp_project_receive_QNODE_HPP_
#define udp_project_receive_QNODE_HPP_

/*****************************************************************************
** Includes
*****************************************************************************/

// To workaround boost/qt4 problems that won't be bugfixed. Refer to
//    https://bugreports.qt.io/browse/QTBUG-22829
#ifndef Q_MOC_RUN
#include <ros/ros.h>
#endif
#include <string>
#include <QThread>
#include <QStringListModel>
#include "udp.h"

/*****************************************************************************
** Namespaces
*****************************************************************************/

namespace udp_project_receive
{
  /*****************************************************************************
  ** Class
  *****************************************************************************/

  class QNode : public QThread
  {
    Q_OBJECT
  public:
    QNode(int argc, char** argv);
    virtual ~QNode();
    bool init();
    void run();

  Q_SIGNALS:
    void rosShutdown();
    void readyRead();

  private:
    int init_argc;
    char** init_argv;
     ros::Publisher pub;
  };

}  // namespace s

#endif /* udp_project_receive_QNODE_HPP_ */
