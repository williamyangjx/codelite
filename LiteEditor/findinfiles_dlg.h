//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: findinfiles_dlg.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef FINDINFILES_DLG_BASE_CLASSES_H
#define FINDINFILES_DLG_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/frame.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/stattext.h>
#include <wx/combobox.h>
#include <wx/arrstr.h>
#include "dirpicker.h"
#include <wx/button.h>
#include <wx/listbox.h>
#include <wx/choice.h>
#include <wx/notebook.h>
#include <wx/imaglist.h>
#include <wx/checkbox.h>

class FindInFilesDialogBase : public wxFrame
{
protected:
    wxPanel* m_panelMainPanel;
    wxStaticText* m_staticText1;
    wxComboBox* m_findString;
    wxStaticText* m_staticText2;
    DirPicker* m_dirPicker;
    wxButton* m_btnAddPath;
    wxListBox* m_listPaths;
    wxButton* m_btnRemovelPath;
    wxButton* m_btnClearPaths;
    wxStaticText* m_staticText3;
    wxComboBox* m_fileTypes;
    wxStaticText* m_staticText5;
    wxChoice* m_choiceEncoding;
    wxStaticText* m_staticText7;
    wxNotebook* m_notebook1;
    wxPanel* m_panel1;
    wxCheckBox* m_matchCase;
    wxCheckBox* m_matchWholeWord;
    wxCheckBox* m_regualrExpression;
    wxCheckBox* m_checkBoxSaveFilesBeforeSearching;
    wxCheckBox* m_checkBoxSeparateTab;
    wxPanel* m_panel2;
    wxCheckBox* m_printScope;
    wxCheckBox* m_checkBoxSkipMatchesFoundInComments;
    wxCheckBox* m_checkBoxSkipMatchesFoundInStrings;
    wxCheckBox* m_checkBoxHighlighStringComments;
    wxButton* m_find;
    wxButton* m_replaceAll;
    wxButton* m_stop;
    wxButton* m_cancel;

protected:
    virtual void OnAddPath(wxCommandEvent& event) { event.Skip(); }
    virtual void OnRemovePath(wxCommandEvent& event) { event.Skip(); }
    virtual void OnRemovePathUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnClearPaths(wxCommandEvent& event) { event.Skip(); }
    virtual void OnClearPathsUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnUseDiffColourForCommentsUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnFind(wxCommandEvent& event) { event.Skip(); }
    virtual void OnFindWhatUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnReplace(wxCommandEvent& event) { event.Skip(); }
    virtual void OnStop(wxCommandEvent& event) { event.Skip(); }
    virtual void OnButtonClose(wxCommandEvent& event) { event.Skip(); }

public:
    FindInFilesDialogBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Find in Files"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_FRAME_STYLE|wxFRAME_NO_TASKBAR|wxFRAME_FLOAT_ON_PARENT|wxRESIZE_BORDER);
    virtual ~FindInFilesDialogBase();
};

#endif
