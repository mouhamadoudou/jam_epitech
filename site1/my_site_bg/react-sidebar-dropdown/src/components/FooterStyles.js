import styled from 'styled-components';
   
export const Box = styled.div`
  padding: 47px 50px;
  background: #CFC1C3;
  position: absolute;
  bottom: 0;
  width: 100%;
   
  @media (max-width: 1000px) {
    padding: 50px 30px;
  }
`;
   
export const Container = styled.div`
    display: flex;
    flex-direction: column;
    justify-content: center;
    max-width: 1000px;
    margin:  auto;
    /* background: red; */
`
export const Column = styled.div`
  display: flex;
  flex-direction: column;
  text-align: left;
  margin-left: 100px;
`;
   
export const FooterLink = styled.a`
  color: #fff;
  font-size: 30px;
  margin-bottom:500;
  text-decoration: none;

  &:hover {
      color: gray;
      transition: 200ms ease-in;
  }
`;
