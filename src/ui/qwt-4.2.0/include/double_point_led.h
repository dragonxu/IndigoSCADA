/*
 *                         IndigoSCADA
 *
 *   This software and documentation are Copyright 2002 to 2012 Enscada 
 *   Limited and its licensees. All rights reserved. See file:
 *
 *                     $HOME/LICENSE 
 *
 *   for full copyright notice and license terms. 
 *
 */

#ifndef __DOUBLE_POINT_LED
#define __DOUBLE_POINT_LED

#include "qpixmap.h"
#include "qframe.h"
#include "qpen.h"
#include "qdrawutil.h"
#include "qpainter.h"
#include "qtimer.h"
#include "qwt_global.h"

class QWT_EXPORT DoublePointLed : public QFrame
{
  Q_OBJECT
public:
   DoublePointLed(QWidget *parent= NULL,const char *name = NULL);
   enum State { On, Off };
   State state() const { return s; }
   void setState(State state) { s= state; repaint(); }
   void toggleState() { if (s == On) s= Off; else if (s == Off) s= On; repaint(); }
   virtual ~DoublePointLed();
   void setText(const char *s){text=s;}
   void setColor(QColor newColor)
   {
		color = newColor;
   };

   void startFlash();
   void stopFlash();

   QSize sizeHint() const;
   QSizePolicy sizePolicy() const;
   
 public slots:
   void toggle() { toggleState(); };
   void on() { setState(On); };
   void off() { setState(Off); };
 
 protected:
   void drawContents(QPainter *);
 
 private:
   const int lwidth;
   const int lheight;
   const int dx;
   State s;

 protected slots:
   void timerSlot();
   
 protected:
   QTimer *timer;
   QColor color;
   QString text;
   signals:
   
};

#endif //__DOUBLE_POINT_LED