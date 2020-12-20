/* graphical_hello - A cross-platform graphical hello world
 **********************************************************
 * Works in macOS, linux and Windows.
 * The program contains a text area where the greeting will
 * appear and two buttons, one to display the greeting and
 * another to clear the message.
 *
 * It uses the Gtk+ 3 graphical toolkit.
 * See: https://www.gtk.org/
 *
 * Developed by: <put your name here>.
 */

/* Include the gtk header file to be able to use the functions. */
#include <gtk/gtk.h>

/* Function called when the user clicks the show button. */
void on_show_button_clicked(GtkWidget *show_button, GtkWidget *hello_display)
{
	/* Display the greeting. */
	gtk_label_set_markup(GTK_LABEL(hello_display),
			     "<span font='Italic 30'>Hello, World!</span>");
}

/* Function called when the user clicks the clear button */
void on_clear_button_clicked(GtkWidget *clear_button, GtkWidget *hello_display)
{
	/* Display an empty message (clear the greeting). */
	gtk_label_set_text(GTK_LABEL(hello_display), "");
}

/* Build the application window with all its components */
void build_window(void)
{
	/* Declares the list of variables. Each one will represent one
	 * graphical element (called a widget). */
	GtkWidget *hello_window, *layout;
	GtkWidget *hello_display, *show_button, *clear_button;

	/* Creates the text box (label) and two buttons. */
	hello_display = gtk_label_new(NULL);
	show_button = gtk_button_new();
	gtk_button_set_label(GTK_BUTTON(show_button), "Display hello");
	clear_button = gtk_button_new();
	gtk_button_set_label(GTK_BUTTON(clear_button), "Clear");

	/* Connects the "clicked" input events happening at the buttons to
	 * their callback functions (on_show_button_clicked() and
	 * on_clear_button_clicked()). */
	g_signal_connect(show_button, "clicked",
			 G_CALLBACK(on_show_button_clicked),
			 hello_display);
	g_signal_connect(clear_button, "clicked",
			 G_CALLBACK(on_clear_button_clicked),
			 hello_display);

	/* Create a layout element to visually organize widgets. */
	layout = gtk_grid_new();
	gtk_grid_attach(GTK_GRID(layout), hello_display, 0, 0, 2, 1);
	gtk_grid_attach(GTK_GRID(layout), show_button, 0, 1, 1, 1);
	gtk_grid_attach(GTK_GRID(layout), clear_button, 1, 1, 1, 1);
	gtk_grid_set_row_homogeneous(GTK_GRID(layout), TRUE);
	gtk_grid_set_column_homogeneous(GTK_GRID(layout), TRUE);
	gtk_grid_set_row_spacing(GTK_GRID(layout), 8);
	gtk_grid_set_column_spacing(GTK_GRID(layout), 32);
	gtk_widget_set_margin_start(layout, 20);
	gtk_widget_set_margin_end(layout, 20);
	gtk_widget_set_margin_top(layout, 20);
	gtk_widget_set_margin_bottom(layout, 20);

	/* Finally, create the main window and insert the whole layout
	 * inside. */
	hello_window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_title(GTK_WINDOW(hello_window), "Graphical Hello");
	gtk_window_set_default_size(GTK_WINDOW(hello_window), 400, 300);
	gtk_container_add(GTK_CONTAINER(hello_window), layout);
	gtk_widget_show_all(hello_window);

	/* Connects the "destroy" event, generated when closing the window
	 * to the gtk_main_quit() function, which asks to stop the event
	 * loop, so that the program can finish. */
	g_signal_connect(hello_window, "destroy", G_CALLBACK(gtk_main_quit),
			 NULL);
}

/* main() function called when program starts. */
int main(int argc, char *argv[]) {
	/* Call the gtk initialization function */
	gtk_init(&argc, &argv);

	/* Call our function to build the complete program window. */
	build_window();

	/* Enter Gtk+ main event loop (sleeps waiting for input events,
	 * like mouse or keyboard input, then wakes up calling the registered
	 * event callbacks and goes back to sleep until exit is requested). */
	gtk_main();

	/* After the main loop quits just return zero to the operating
	 * system. */
	return 0;
}