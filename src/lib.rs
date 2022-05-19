#[cfg(feature = "config")]
use {std::{error::Error, fs::File, io::BufReader}, serde::Deserialize};

#[cfg(feature = "config")]
pub fn read_user_from_file<T: for<'de> Deserialize<'de>>(file: &File) -> Result<T, Box<dyn Error>> {
    let reader = BufReader::new(file);
    let c = serde_json::from_reader(reader)?;

    Ok(c)
}