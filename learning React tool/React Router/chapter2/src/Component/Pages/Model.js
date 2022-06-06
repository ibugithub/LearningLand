import React from "react";
import { useParams, useSearchParams } from "react-router-dom";


const Model = () => {
    let {m} = useParams()
    console.log(m)
        return (
            <div>
                <h1>This is Model Page {m}</h1>
                {m && <h2>{m}</h2>}
              
  
            </div>
        );
}
export default Model;