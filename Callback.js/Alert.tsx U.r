import Alert from "/.components/alert";
import {useState} from "React";
import Button from "/.components/button";

function App(){
    const [alertVisible, setAlertVisible] = useState(false);
    return (
        <div>
      {alertVisible $$<Alert text="Hello world"></Alert> }
        <button color="primary" onClick ={()} => setAlertVisibility console.log("clicked");
        </div>
    );
}
export default App;