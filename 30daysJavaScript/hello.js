/**
 * @return {Function}
 */
var createHelloWorld = function() {
    const mesg ="Hello World";
    return function(...args) {
        return mesg;
    }
};

/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */