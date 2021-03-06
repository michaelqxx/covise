/* This file is part of COVISE.

   You can use it under the terms of the GNU Lesser General Public License
   version 2.1 or later, see lgpl-2.1.txt.

 * License: LGPL 2+ */

/** \mainpage tabletUI
  tabletUI is a simple GUI Glient for COVER based on QT.
*/

#ifndef TABLET_UI_ELEMENT_H
#define TABLET_UI_ELEMENT_H

#include <QString>
#if !defined _WIN32_WCE && !defined ANDROID_TUI
#include <covise/covise_msg.h>
#include <net/covise_connect.h>
#else
#include "wce_msg.h"
#include "wce_connect.h"
#endif
#include <util/coTabletUIMessages.h>
class TUIContainer;
class QWidget;
class TUITab;
namespace covise
{
class TokenBuffer;
}

/**
 * Basic TUI GUI element.
 * This class provides functionality for all TUI elements like position,
 * size, availability, parent, etc.<BR>
 * At least this class should be subclassed for any new GUI element types.<BR>
 * All inheritable functions are defined virtual so that they can be overwritten
 * by subclasses.
 */
class TUIElement
{
private:
    TUIContainer *parentContainer; ///< info about parent container, needed by layout

public:
    TUIElement(int id, int type, QWidget *w, int parent, QString name);
    virtual ~TUIElement();
    virtual void setParent(TUIContainer *);
    virtual TUIContainer *getParent();
    virtual QWidget *getWidget();
    virtual void setWidget(QWidget *);

    virtual void setEnabled(bool en);
    virtual void setHighlighted(bool hl);
    virtual void setColor(Qt::GlobalColor color);
    virtual void setVisible(bool);
    virtual void setHidden(bool hidden);
    virtual bool isEnabled();
    virtual bool isHighlighted();
    virtual bool isVisible();
    virtual bool isHidden() const;
    virtual void deActivate(TUITab *activedTab)
    {
        (void)activedTab;
    };
    virtual int getXpos() ///< Returns element x position
    {
        return xPos;
    };
    virtual int getYpos() ///< Returns element y position
    {
        return yPos;
    };
    virtual void setPos(int, int); ///< Set element location.
    virtual void setSize(int w = 1, int h = 1);
    virtual int getWidth()
    {
        return width;
    };
    virtual int getHeight()
    {
        return height;
    };
    virtual void setValue(int type, covise::TokenBuffer &);
    virtual void setLabel(QString textl);
    virtual QString getLabel()
    {
        return label;
    };
    virtual QString getName()
    {
        return name;
    };
    int getID()
    {
        return ID;
    };
    /// get the Element's classname
    virtual char *getClassName();
    /// check if the Element or any ancestor is this classname
    virtual bool isOfClassName(char *);

protected:
    int ID;
    int ParentID;
    int xPos, yPos;
    int height, width;
    QString label;
    QWidget *widget;
    bool enabled; ///< true if UI element is enabled, false if UI element cannot be used
    bool highlighted; ///< true if highlighted
    bool visible; ///< true if UI element is visible, false if not visible but still present in scene tree
    bool hidden; ///< true if UI element is to be hidden at any time
    QString name;
};
#endif
