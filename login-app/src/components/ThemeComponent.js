// src/components/ThemeComponent.js
import React from "react";
import { useSelector, useDispatch } from "react-redux";
import { toggleTheme } from "../actions/themeActions";

const ThemeComponent = () => {
  const theme = useSelector((state) => state.theme);
  const dispatch = useDispatch();

  return (
    <div
      style={{
        background: theme === "light" ? "#fff" : "#333",
        color: theme === "light" ? "#000" : "#fff",
      }}
    >
      <p>Current theme: {theme}</p>
      <button onClick={() => dispatch(toggleTheme())}>Toggle Theme</button>
    </div>
  );
};

export default ThemeComponent;
