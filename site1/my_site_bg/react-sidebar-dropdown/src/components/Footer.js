import React from "react";
import {
  Box,
  Container,
  FooterLink,
} from "./FooterStyles";
  
const Footer = () => {
  return (
    <Box>
      <h1 style={{ color: "green", 
                   textAlign: "center", 
                   marginTop: "-40px" }}>
      </h1>
      <Container>
          <FooterLink href="#">About Us</FooterLink>
      </Container>
    </Box>
  );
};
export default Footer;
