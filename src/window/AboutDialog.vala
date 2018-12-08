/*  This file is part of nextbird, a Gtk+ linux Twitter client.
 *  Copyright (C) 2013 Timm Bäder
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


[GtkTemplate (ui = "/de/lucaswerkmeister/nextbird/ui/about-dialog.ui")]
class AboutDialog : Gtk.AboutDialog {
  [GtkCallback]
  private void response_cb (int id) {
    if (id == Gtk.ResponseType.DELETE_EVENT) {
      this.close ();
    } else
      warning ("Unhandled response: %d", id);
  }
}
