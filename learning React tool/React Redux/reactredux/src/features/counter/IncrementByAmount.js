import { useDispatch } from 'react-redux';
import {incrementByAmount} from "./CounterSlice.js"; 
const IncrementByAmount = () => {
    const dispatch = useDispatch()
    return (
        <>
           <br/> <button onClick={() => {dispatch(incrementByAmount(10))}}> <span>increment by amount</span></button>
        </>
    );
}

export default IncrementByAmount;