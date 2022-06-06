import React from "react";
import { useParams, useSearchParams } from "react-router-dom";


const Post = () => {
    let [searchParams, setSearchParams] = useSearchParams();
    console.log("This is searchParams",searchParams, "and the type of it", typeof(searchParams))
    console.log("This is setsearchParams", setSearchParams, "and the type of it", typeof(searchParams))

    let { category, id } = useParams();
    let categorys = useParams()
    console.log("this is with curley braces", category)

    // so that's the reason why we used object distructuring or put category inside the curley braces
    console.log("this is without curley braces", categorys.category)
        return (
            <div>
                <h1>This is {category} Post </h1>
                {id && <h1>the id of {category} is {id}. and the prize of it is {searchParams.get('prize')} name is {searchParams.get('name')}</h1>}
            </div>
        );
}
export default Post;