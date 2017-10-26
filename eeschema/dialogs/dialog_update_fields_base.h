///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 17 2016)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __DIALOG_UPDATE_FIELDS_BASE_H__
#define __DIALOG_UPDATE_FIELDS_BASE_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
class DIALOG_SHIM;

#include "dialog_shim.h"
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/checklst.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/checkbox.h>
#include <wx/statline.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class DIALOG_UPDATE_FIELDS_BASE
///////////////////////////////////////////////////////////////////////////////
class DIALOG_UPDATE_FIELDS_BASE : public DIALOG_SHIM
{
	private:
	
	protected:
		wxStaticText* m_infoLabel;
		wxCheckListBox* m_fieldsBox;
		wxButton* m_selAllBtn;
		wxButton* m_selNoneBtn;
		wxCheckBox* m_removeExtraBox;
		wxStaticLine* m_staticline1;
		wxStdDialogButtonSizer* m_sdbSizer;
		wxButton* m_sdbSizerOK;
		wxButton* m_sdbSizerCancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void onSelectAll( wxCommandEvent& event ) { event.Skip(); }
		virtual void onSelectNone( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		DIALOG_UPDATE_FIELDS_BASE( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Update symbol fields"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 300,600 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~DIALOG_UPDATE_FIELDS_BASE();
	
};

#endif //__DIALOG_UPDATE_FIELDS_BASE_H__