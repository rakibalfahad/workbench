
/*LICENSE_START*/
/* 
 *  Copyright 1995-2011 Washington University School of Medicine 
 * 
 *  http://brainmap.wustl.edu 
 * 
 *  This file is part of CARET. 
 * 
 *  CARET is free software; you can redistribute it and/or modify 
 *  it under the terms of the GNU General Public License as published by 
 *  the Free Software Foundation; either version 2 of the License, or 
 *  (at your option) any later version. 
 * 
 *  CARET is distributed in the hope that it will be useful, 
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of 
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
 *  GNU General Public License for more details. 
 * 
 *  You should have received a copy of the GNU General Public License 
 *  along with CARET; if not, write to the Free Software 
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA 
 * 
 */ 

#define __BRAIN_OPEN_G_L_VIEWPORT_CONTENT_DECLARE__
#include "BrainOpenGLViewportContent.h"
#undef __BRAIN_OPEN_G_L_VIEWPORT_CONTENT_DECLARE__

using namespace caret;


    
/**
 * \class BrainOpenGLViewportContent 
 * \brief Dimensions and model for a viewport in the graphics window.
 *
 * Dimensions and model for a viewport in the graphics window.
 */
/**
 * Constructor.
 */
BrainOpenGLViewportContent::BrainOpenGLViewportContent(const int viewport[4],
                                                       BrowserTabContent* browserTabContent)
: CaretObject()
{
    this->viewport[0] = viewport[0];
    this->viewport[1] = viewport[1];
    this->viewport[2] = viewport[2];
    this->viewport[3] = viewport[3];
    
    this->browserTabContent = browserTabContent;
}

/**
 * Destructor.
 */
BrainOpenGLViewportContent::~BrainOpenGLViewportContent()
{
    
}

/**
 * Get the viewport.
 * @param viewport
 *    Output into which viewport dimensions are loaded.
 */
void
BrainOpenGLViewportContent::getViewport(int viewport[4]) const
{
    viewport[0] = this->viewport[0];
    viewport[1] = this->viewport[1];
    viewport[2] = this->viewport[2];
    viewport[3] = this->viewport[3];
}

/**
 * @return Pointer to tab content in viewport.
 */
BrowserTabContent* 
BrainOpenGLViewportContent::getBrowserTabContent()
{
    return this->browserTabContent;
}

/**
 * Get a description of this object's content.
 * @return String describing this object's content.
 */
AString 
BrainOpenGLViewportContent::toString() const
{
    return "BrainOpenGLViewportContent";
}
