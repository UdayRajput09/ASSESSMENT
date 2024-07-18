// src/components/LoginForm.js
import React from "react";
import { useSelector } from "react-redux";

const LoginForm = () => {
  const theme = useSelector((state) => state.theme);

  const formStyle = {
    background: theme === "light" ? "#fff" : "#444",
    color: theme === "light" ? "#000" : "#fff",
    padding: "20px",
    borderRadius: "10px",
    boxShadow: "0 2px 4px rgba(0, 0, 0, 0.1)",
    textAlign: "left",
  };

  const inputStyle = {
    width: "100%",
    padding: "10px",
    margin: "10px 0",
    borderRadius: "5px",
    border: "1px solid #ccc",
  };

  const buttonStyle = {
    width: "100%",
    padding: "10px",
    margin: "10px 0",
    borderRadius: "5px",
    border: "none",
    backgroundColor: theme === "light" ? "#007bff" : "#0056b3",
    color: "#fff",
    cursor: "pointer",
  };

  return (
    <form style={formStyle}>
      <h2>Login</h2>
      <input type="email" placeholder="Email" style={inputStyle} />
      <input type="password" placeholder="Password" style={inputStyle} />
      <button type="submit" style={buttonStyle}>
        Log in
      </button>
    </form>
  );
};

export default LoginForm;
