import React from  'react';
import { useParams } from 'react-router-dom';

const Feature = () => {
    let {f} = useParams()
    return (
        <React.Fragment>
            <h2> this is the Feature page</h2>
            {f && <h2>{f}</h2>}
        </React.Fragment>
    );
}
export default Feature;