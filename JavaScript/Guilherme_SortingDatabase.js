//Mock database of books
let books = [
    {
        id: 0,
        title: "Hideaway: A Novel",
        pages: 123
    }, {
        id: 1,
        title: "The Testaments",
        pages: 361
    }, {
        id: 2,
        title: "H. P. Lovecraft: The Complete Fiction",
        pages: 465
    }, {
        id: 3,
        title: "Kafka: The Definitive Guide: Real-Time Data and Stream Processing at Scale",
        pages: 243
    }, {
        id: 4,
        title: "The Castle",
        pages: 644
    }, {
        id: 5,
        title: "The Metamorphosis",
        pages: 231
    }, {
        id: 6,
        title: "The Trial",
        pages: 45
    }, {
        id: 7,
        title: "Uzumaki",
        pages: 185
    }, {
        id: 8,
        title: "Fragments of Horror",
        pages: 534
    }
]

function sortByTitle(books) {
    return books.sort((a, b) => {
        let titleA = a.title.toUpperCase() //Ignores all upper case and lower case letters
        let titleB = b.title.toUpperCase()

        //Comapares the encoding value of the first letter from the title of a and b
        //Encoding values => https://www.w3schools.com/charsets/ref_html_utf8.asp 

        //If the value of the first letter of the title of book a, is bigger than the one in book b
        //Then book a comes after book b
        if (titleA.charAt(0) > titleB.charAt(0)) {
            return 1

        //If the value of the first letter of the title of book a, is smaller than the one in book b
        //Then book a comes before book b
        } else if (titleA.charAt(0) < titleB.charAt(0)) {
            return -1
        
        //If the value of the first letter of the title of book a, is the same as the one in book b
        //Then dont move any book
        } else {
            return 0
        }
    })
}

function sortByPages(books) {
    return books.sort((a, b) => a.pages - b.pages)
    //If a.pages - b.pages is negative => b has more pages than a => move a back one position
    //If a.pages - b.pages is positive => a has more pages than b => move b back one posiiton
    //If a.pages - b.pages equals to 0 => a has the same amount of pages as b => dont move
}

function sortById(books) {
    return books.sort((a, b) => a.id - b.id)
    //Same logic as sortByPages
}
console.log("Sorting books by title: ")
console.log(sortByTitle(books))
/* console.log("Sorting books by pages: ")
console.log(sortByPages(books)) */
/* console.log("Sorting books by id: ")
console.log(sortById(books)) */
