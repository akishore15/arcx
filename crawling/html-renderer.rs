use gtk::prelude::*;

fn main() {
    // Initialize GTK
    gtk::prelude::init();

    // Create a window
    let window = gtk::Window::new(gtk::WindowType::Toplevel);
    window.set_title("Web Renderer");
    window.set_default_size(800, 600);

    // Create a web view
    let web_view = gtk::WebView::new();
    web_view.load_html("https://www.example.com", None);

    // Add the web view to the window
    window.add(&web_view);

    // Show the window
    window.show_all();

    // Run the GTK main loop
    gtk::main();
}
