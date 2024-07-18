// src/components/MainComponent.js
import React from "react";
import { useSelector, useDispatch } from "react-redux";
import { toggleTheme } from "../actions/themeActions";
import LoginForm from "./LoginForm";

const MainComponent = () => {
  const theme = useSelector((state) => state.theme);
  const dispatch = useDispatch();

  const containerStyle = {
    background: theme === "light" ? "#f0f0f0" : "#333",
    color: theme === "light" ? "#000" : "#fff",
    padding: "20px",
    borderRadius: "10px",
    maxWidth: "400px",
    margin: "50px auto",
    boxShadow: "0 4px 8px rgba(0, 0, 0, 0.1)",
    textAlign: "center",
  };

  const buttonStyle = {
    margin: "20px 0",
    padding: "10px 20px",
    backgroundColor: theme === "light" ? "#007bff" : "#0056b3",
    color: "#fff",
    border: "none",
    borderRadius: "5px",
    cursor: "pointer",
  };

  return (
    <div style={containerStyle}>
      <button style={buttonStyle} onClick={() => dispatch(toggleTheme())}>
        Toggle Theme
      </button>
      <LoginForm />
    </div>
  );
};

export default MainComponent;
