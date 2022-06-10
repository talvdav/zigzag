#include <gtk/gtk.h>

static void
print_hello(GtkWidget *widget,
            gpointer data)
{
  g_print("Hello World\n");
}

static void
print_foobar(GtkWidget *widget,
            gpointer data)
{
  g_print("foobar\n");
}

static void
activate(GtkApplication *app,
         gpointer user_data)
{
  GtkWidget *window;
  GtkWidget *button;
  GtkWidget *button1;
  GtkWidget *box;

  window = gtk_application_window_new(app);
  gtk_window_set_title(GTK_WINDOW(window), "Zigzag");
  gtk_window_set_default_size(GTK_WINDOW(window), 600, 400);

  box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 0);
  gtk_window_set_child(GTK_WINDOW(window), box);

  button = gtk_button_new_with_label("Hello World");
  g_signal_connect(button, "clicked", G_CALLBACK(print_hello), NULL);
  //g_signal_connect_swapped(button, "clicked", G_CALLBACK(gtk_window_destroy), window);
  gtk_box_append(GTK_BOX(box), button);

  button1 = gtk_button_new_with_label("FooBar");
  g_signal_connect(button1, "clicked", G_CALLBACK(print_foobar), NULL);
  //g_signal_connect_swapped(button1, "clicked", G_CALLBACK(gtk_window_destroy), window);
  gtk_box_append(GTK_BOX(box), button1);
  
  gtk_widget_show(window);
}

int main(int argc,
         char **argv)
{
  GtkApplication *app;
  int status;

  app = gtk_application_new("org.gtk.example", G_APPLICATION_FLAGS_NONE);
  g_signal_connect(app, "activate", G_CALLBACK(activate), NULL);
  status = g_application_run(G_APPLICATION(app), argc, argv);
  g_object_unref(app);

  return status;
}
