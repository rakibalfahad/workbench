/*LICENSE_START*/
/*
 *  Copyright (C) 2014  Washington University School of Medicine
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */
/*LICENSE_END*/

#include "EventBrowserTabGet.h"

using namespace caret;

/**
 * Constructor.
 */
EventBrowserTabGet::EventBrowserTabGet(const int32_t tabNumber)
: Event(EventTypeEnum::EVENT_BROWSER_TAB_GET)
{
    this->tabNumber = tabNumber;
    this->browserTab = NULL;
}

/**
 * Destructor.
 */
EventBrowserTabGet::~EventBrowserTabGet()
{
    
}

/**
 * Get the browser tab that is to be deleted.
 *
 * @return
 *    Pointer to browser tab that is to be deleted.
 */
BrowserTabContent* 
EventBrowserTabGet::getBrowserTab()
{
    return this->browserTab;
}

/**
 * Set the browser tab for the requested tab number.
 * @param browserTab The tab.
 */
void 
EventBrowserTabGet::setBrowserTab(BrowserTabContent* browserTab)
{
    this->browserTab = browserTab;
}

/**
 * @return Returns the requested tab number.
 */
int32_t 
EventBrowserTabGet::getTabNumber() const 
{ 
    return this->tabNumber; 
}

