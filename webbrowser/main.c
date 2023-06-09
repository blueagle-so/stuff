/**
  * Minimal example of WebKit2 in GTK3, using C.
  *
  * [Using Linux, start a shell]
  * Compile this code using the Makefile (type the command 'make'),
  * ignore the warnings about unused parameters, they are normal.
  * Then run the program (type the command './bin/Release/gtk3_minimal')
  *
  * The make file is generated using "cbp2make.linux-x86_64" on a Code::Blocks project file.
  */
#include <stdlib.h>
#include <gtk/gtk.h>
#include <webkit2/webkit2.h>

WebKitWebView *webView = NULL;
GtkWidget *entry = NULL;
char *DEFAULT_URI = "http://google.ru/";

//-------------------------------------------------------------------------------------
/** Update the Webview when the URI is changed */
void update_WebKit_Uri_cb(GtkWidget      *widget,
                       GdkEventButton *event,
                       gpointer        data) {
    webkit_web_view_load_uri(webView, gtk_entry_get_text(GTK_ENTRY(entry)));
}

// ================================================================================================
int main (int argc, char *argv[]) {
  GtkWidget *win = NULL;
  GtkWidget *button = NULL;
  GtkWidget *vbox = NULL;
  GtkWidget *hbox = NULL;

  g_log_set_handler ("Gtk", G_LOG_LEVEL_WARNING, (GLogFunc) gtk_false, NULL);
  gtk_init (&argc, &argv);
  g_log_set_handler ("Gtk", G_LOG_LEVEL_WARNING, g_log_default_handler, NULL);

  win = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (win), "GTK3 WebKit2 'C' demo");
  gtk_window_set_position (GTK_WINDOW (win), GTK_WIN_POS_CENTER);
  g_signal_connect (win, "destroy", gtk_main_quit, NULL);

  // The VBox will contain the URL bar + button on the first line,
  // and the Webview (the WebKit display) on the second line.
  vbox = gtk_box_new (TRUE, 6);

  // URL bar & button
  hbox = gtk_box_new(FALSE, 6);
  entry = gtk_entry_new();
  gtk_entry_set_text(GTK_ENTRY(entry), DEFAULT_URI);
  gtk_box_pack_start(GTK_BOX (hbox), entry, TRUE, TRUE, 0);
  button = gtk_button_new_with_label(" Go to URI ");
  g_signal_connect (G_OBJECT (button), "clicked", G_CALLBACK (update_WebKit_Uri_cb), (gpointer) win);
  gtk_box_pack_start(GTK_BOX (hbox), button, FALSE, TRUE, 0);
  gtk_box_pack_start(GTK_BOX (vbox), hbox, FALSE, TRUE, 0);

  // WebKit display
  webView = WEBKIT_WEB_VIEW(webkit_web_view_new());
  webkit_web_view_load_uri(webView, DEFAULT_URI);
  gtk_box_pack_start (GTK_BOX (vbox), GTK_WIDGET(webView), TRUE, TRUE, 0);

  gtk_container_add (GTK_CONTAINER (win), vbox);

  gtk_window_set_default_size(GTK_WINDOW(win), 1200, 800);
  gtk_widget_show_all (win);
  gtk_main ();
  return 0;
}
