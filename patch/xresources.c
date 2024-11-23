#include <X11/Xresource.h>

void
readxresources(void)
{
	XrmInitialize();

	char* xrm;
	if ((xrm = XResourceManagerString(drw->dpy))) {
		char *type;
		XrmDatabase xdb = XrmGetStringDatabase(xrm);
		XrmValue xval;

        /*pywal*/

		/*if (XrmGetResource(xdb, "dmenu.font", "*", &type, &xval))*/
		/*	fonts[0] = strdup(xval.addr);*/
		/*else*/
		/*	fonts[0] = strdup(fonts[0]);*/
		/*if (XrmGetResource(xdb, "dmenu.color0", "*", &type, &xval))*/
		/*	colors[SchemeNorm][ColBg] = strdup(xval.addr);*/
		/*if (XrmGetResource(xdb, "dmenu.color6", "*", &type, &xval))*/
		/*	colors[SchemeNorm][ColFg] = strdup(xval.addr);*/
		/*if (XrmGetResource(xdb, "dmenu.color14", "*", &type, &xval))*/
		/*	colors[SchemeSel][ColBg] = strdup(xval.addr);*/
		/*if (XrmGetResource(xdb, "dmenu.color0", "*", &type, &xval))*/
		/*	colors[SchemeSel][ColFg] = strdup(xval.addr);*/
		/*if (XrmGetResource(xdb, "dmenu.outbackground", "*", &type, &xval))*/
		/*	colors[SchemeOut][ColBg] = strdup(xval.addr);*/
		/*if (XrmGetResource(xdb, "dmenu.outforeground", "*", &type, &xval))*/
		/*	colors[SchemeOut][ColFg] = strdup(xval.addr);*/
		/*if (XrmGetResource(xdb, "dmenu.color6", "*", &type, &xval))*/
		/*	colors[SchemeBorder][ColBg] = strdup(xval.addr);*/

        /*norm*/

		if (XrmGetResource(xdb, "dmenu.font", "*", &type, &xval))
			fonts[0] = strdup(xval.addr);
		else
			fonts[0] = strdup(fonts[0]);
		if (XrmGetResource(xdb, "dmenu.0", "*", &type, &xval))
			colors[SchemeNorm][ColBg] = strdup(xval.addr);
		if (XrmGetResource(xdb, "dmenu.7", "*", &type, &xval))
			colors[SchemeNorm][ColFg] = strdup(xval.addr);
		if (XrmGetResource(xdb, "dmenu.7", "*", &type, &xval))
			colors[SchemeSel][ColBg] = strdup(xval.addr);
		if (XrmGetResource(xdb, "dmenu.0", "*", &type, &xval))
			colors[SchemeSel][ColFg] = strdup(xval.addr);
		if (XrmGetResource(xdb, "dmenu.outbackground", "*", &type, &xval))
			colors[SchemeOut][ColBg] = strdup(xval.addr);
		if (XrmGetResource(xdb, "dmenu.outforeground", "*", &type, &xval))
			colors[SchemeOut][ColFg] = strdup(xval.addr);
		if (XrmGetResource(xdb, "dmenu.sel_fg", "*", &type, &xval))
			colors[SchemeBorder][ColBg] = strdup(xval.addr);
		XrmDestroyDatabase(xdb);
	}
}
