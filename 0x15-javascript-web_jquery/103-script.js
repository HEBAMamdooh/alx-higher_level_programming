$(document).ready(function () {
    function fetchTranslation() {
        var languageCode = $('#language_code').val();
        if (languageCode) {
            $.getJSON('https://www.fourtonfish.com/hellosalut/hello/', { lang: languageCode }, function (data) {
                $('#hello').text(data.hello);
            }).fail(function () {
                $('#hello').text('Error fetching translation');
            });
        } else {
            $('#hello').text('Please enter a language code');
        }
    }

    $('#btn_translate').click(fetchTranslation);

    $('#language_code').keypress(function (event) {
        if (event.which == 13) {  // Enter key pressed
            fetchTranslation();
        }
    });
});
