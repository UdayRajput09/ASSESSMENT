// src/App.js
import React from "react";
import { Provider } from "react-redux";
import store from "./store/store";
import MainComponent from "./components/MainComponent";

function App() {
  return (
    <Provider store={store}>
      <div>
        <MainComponent />
      </div>
    </Provider>
  );
}

export default App;
