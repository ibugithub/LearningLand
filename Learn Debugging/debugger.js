const users = [ 
    {name : "Ibrahim", age : 20},
    {name : 'Rakib', age : 21}, 
    {name : 'nakib', age : 22},
    {name : 'shakib', age : 23},
    {name : 'Akib'},
    {name : 'Lakib', age : 25}
] 

users.forEach(user=> { printUser(user)})

function printUser(user){
    console.log(`User ${user.name} will be ${user.age + 5} in next 5 years`)
}