/*  This file is part of nextbird, a Gtk+ linux Twitter client.
 *  Copyright (C) 2017 Timm Bäder
 *
 *  nextbird is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  nextbird is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with nextbird.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef _CB_SURFACE_PROGRESS_H_
#define _CB_SURFACE_PROGRESS_H_

#include <gtk/gtk.h>

#define CB_TYPE_SURFACE_PROGRESS cb_surface_progress_get_type ()
G_DECLARE_FINAL_TYPE (CbSurfaceProgress, cb_surface_progress, CB, SURFACE_PROGRESS, GtkWidget);

struct _CbSurfaceProgress
{
  GtkWidget parent_instance;

  cairo_surface_t *surface;
  double progress;
};
typedef struct _CbSurfaceProgress CbSurfaceProgress;

GtkWidget *       cb_surface_progress_new (void);
double            cb_surface_progress_get_progress (CbSurfaceProgress *self);
void              cb_surface_progress_set_progress (CbSurfaceProgress *self,
                                                    double             progress);
cairo_surface_t * cb_surface_progress_get_surface  (CbSurfaceProgress *self);
void              cb_surface_progress_set_surface  (CbSurfaceProgress *self,
                                                    cairo_surface_t   *surface);

#endif
