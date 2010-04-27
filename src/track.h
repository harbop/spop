/*
 * This file is part of spop.
 *
 * spop is free software: you can redistribute it and/or modify it under the
 * terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option) any later
 * version.
 *
 * spop is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
 * A PARTICULAR PURPOSE. See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * spop. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef TRACK_H
#define TRACK_H

#include <glib.h>
#include <libspotify/api.h>

/* Functions called directly from spop */
void tracks_init();
void tracks_add_playlist(sp_playlist* pl);
void tracks_remove_playlist(sp_playlist* pl);
GString* track_get_link(sp_track* track);

/* Utility functions that should not be used from outside of track.c */

/* Commands */
void list_tracks(int idx, GString* result);

/* Callbacks */
void cb_tracks_added(sp_playlist* pl, sp_track* const* tracks, int num_tracks, int position, void* userdata);
void cb_tracks_removed(sp_playlist* pl, const int* tracks, int num_tracks, void* userdata);
void cb_tracks_moved(sp_playlist* pl, const int* tracks, int num_tracks, int new_position, void* userdata);

#endif