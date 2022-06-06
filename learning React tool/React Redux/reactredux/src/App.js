import './App.css';
import Counter from "./features/counter/Counter.js";
import Coin from "./features/counter/Coin.js";
import IncrementByAmount from './features/counter/IncrementByAmount';
import Theme from './App/Theme/Theme';

function App() {
  return (
    <div className="App">
      <Counter />
      <Coin />
      <IncrementByAmount /> <br/> <br/>
      <Theme />
    </div>
  );
}

export default App;
