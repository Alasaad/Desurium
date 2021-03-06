/*
Desura is the leading indie game distribution platform
Copyright (C) 2011 Mark Chandler (Desura Net Pty Ltd)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>
*/

#ifndef DESURA_MWFINISHPAGE_H
#define DESURA_MWFINISHPAGE_H
#ifdef _WIN32
#pragma once
#endif

#include "BasePage.h"
#include "wx_controls/gcControls.h"
#include "wx/wx.h"


class MWFinishPage : public BasePage 
{
public:
	MWFinishPage( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxTAB_TRAVERSAL );
	~MWFinishPage();

	void dispose();
	void run(){;}

protected:
	wxStaticText* m_labInfo;
	gcButton* m_butPlay;
	gcButton* m_butClose;
	gcButton* m_butCustom;

	void onButtonClicked( wxCommandEvent& event );

private:
	DECLARE_EVENT_TABLE()
};


#endif //DESURA_MWFINISHPAGE_H
