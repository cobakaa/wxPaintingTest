#ifndef __TOOLS__
#define __TOOLS__

#include <wx/dc.h>

enum Mode {
    add,
    mdelete,
    repos,
    mconnect,
    text,
    none
};

enum GraphMode {
    directed, 
    undirected, 
    gnone
};

wxCoord sqr(wxCoord x);

wxCoord min(wxCoord x, wxCoord y);
wxCoord max(wxCoord x, wxCoord y);

#endif