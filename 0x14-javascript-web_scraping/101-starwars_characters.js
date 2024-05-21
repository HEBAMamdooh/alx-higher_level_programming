#!/usr/bin/node

const request = require('request');

const movieId = process.argv[2];
const apiUrl = `https://swapi-api.alx-tools.com/api/films/${movieId}`;

request(apiUrl, (error, response, body) => {
  if (error) {
    console.error(error);
    return;
  }

  const movieData = JSON.parse(body);
  const charactersUrls = movieData.characters;

  printCharacters(charactersUrls, 0);
});

function printCharacters (charactersUrls, index) {
  if (index >= charactersUrls.length) {
    return;
  }

  request(charactersUrls[index], (charError, charResponse, charBody) => {
    if (charError) {
      console.error(charError);
      return;
    }

    const characterData = JSON.parse(charBody);
    console.log(characterData.name);

    printCharacters(charactersUrls, index + 1);
  });
}
