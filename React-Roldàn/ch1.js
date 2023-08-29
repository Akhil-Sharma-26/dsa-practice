// imperative vs declarative approach
// imperative function
const toUpperCase = input => {
    const output = []
    for( let i = 0; i < input.length; i++ ) {
        output.push( input[i].toUpperCase() )
    }
    return output
}
// React uses the declarative approach
// declarative function
const toUpperCase1 = input => input.map( s => s.toUpperCase1() )
