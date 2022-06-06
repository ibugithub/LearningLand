import React from 'react';
import { useParams } from 'react-router-dom';

const Prize = () =>{
    let {p} =useParams()
    return (
        <React.Fragment>
            <h2>This is the Prize page</h2>
            {p && <h2>{p}</h2>}
        </React.Fragment>
    );
}
export default Prize;