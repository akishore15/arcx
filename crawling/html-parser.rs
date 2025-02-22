use reqwest;
use select::document::Document;
use select::predicate::Name;

#[tokio::main]
async fn main() -> Result<(), reqwest::Error> {
    let res = reqwest::get("https://www.example.com").await?;
    let html = res.text().await?;
    let document = Document::from(html.as_str());

    // Parse the HTML code
    for node in document.find(Name("body")) {
        println!("{}", node.html());
    }

    Ok(())
}
