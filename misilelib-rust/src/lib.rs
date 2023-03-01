#[cfg(feature = "config")]
use {
    serde::{Deserialize, Serialize},
    std::{
        error::Error,
        fs::File,
        io::{BufReader, BufWriter},
    },
};

#[cfg(feature = "io")]
use std::io::stdin;

#[cfg(feature = "config")]
pub fn read_config<T: for<'de> Deserialize<'de>>(file: &File) -> Result<T, Box<dyn Error>> {
    let reader = BufReader::new(file);
    let c = serde_json::from_reader(reader)?;

    Ok(c)
}

#[cfg(feature = "config")]
pub fn write_config<T: for<'de> Serialize>(config: &T, file: &File) -> Result<(), Box<dyn Error>> {
    let writer = BufWriter::new(file);
    Ok(serde_json::to_writer_pretty(writer, config)?)
}

#[cfg(feature = "io")]
pub fn input() -> Result<String, Box<dyn std::error::Error>> {
    for i in stdin().lines() {
        return Ok(i?)
    }
    Ok("".to_string())
}
