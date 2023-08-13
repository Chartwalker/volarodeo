#include <volarodeo/config.h>
#include <volarodeo/gui/volarodeo.h>
#include <gtk/gtk.h>

static gint delete_Event(GtkWidget * widget, GdkEvent event, gpointer data){
#ifdef __TSC_PRJG_LANG_DE__
  g_print ("Das Anwendungsfenster wird geschlossen.\n");
#endif
#ifdef __TSC_PRJG_LANG_EN__
  g_print ("The application window will be closed.\n");
#endif
  return FALSE;
}

static void end (GtkWidget * widget, gpointer data) {
#ifdef __TSC_PRJG_LANG_DE__
  g_print ("Die App wird beendet.\n");
#endif
#ifdef __TSC_PRJG_LANG_EN__
  g_print ("The app will exit.\n");
#endif
  gtk_main_quit ();
}

int main (int argc, char **argv) {
  GtkWindow *win;
  GdkPixbuf *pic;
  /* init the environment */
  gtk_init (&argc, &argv);

  /* creating widgets */
  /* load image to Pixbuf */
  pic = gdk_pixbuf_new_from_file ("icons/rattelsnake.png", NULL);
  /* set defaults */
  win = g_object_new (GTK_TYPE_WINDOW,
                      "title", TSC_PRJG_VERSION_S,
                      "default-width", 1000,
                      "default-height", 800,
                      "resizable", TRUE,
                      "window-position", GTK_WIN_POS_CENTER,
                      "border-width", 5, "icon", pic, NULL);
  /* create callbacks  */
  g_signal_connect ( win, "delete-event",
                     G_CALLBACK (delete_Event), NULL);
  g_signal_connect ( win, "destroy",
                     G_CALLBACK (end), NULL);

  /* show widget */
  gtk_widget_show_all (GTK_WIDGET (win));
  /* main loop */
  gtk_main ();
#ifdef __TSC_PRJG_LANG_DE__
  g_print ("Task wird beendet.\n");
#endif
#ifdef __TSC_PRJG_LANG_EN__
  g_print ("Task is terminated.\n");
#endif
  return 0;
}
