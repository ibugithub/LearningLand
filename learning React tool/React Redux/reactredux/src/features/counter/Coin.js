import { useSelector } from 'react-redux'

const Coin = (props) => {
    const count = useSelector((state) => state.counter.value);
    const textColor = useSelector((state) => state.theme.color);
    return(
        <div>
            <span style = {{color:textColor}}>Coin:{count}</span>
        </div>
    );
}

export default Coin;