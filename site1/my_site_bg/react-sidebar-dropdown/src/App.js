import Sidebar from "./components/Sidebar";
import { BrowserRouter as Router, Routes, Route } from "react-router-dom";

import Logo from  "./logo.jpg";
import { AboutUs, OurAim, OurVision } from "./pages/AboutUs";
import Footer from './components/Footer';
import React from 'react';
import {
  Services,
  ServicesOne,
  ServicesTwo,
  ServicesThree,
} from "./pages/Services";
import { Events, EventsOne, EventsTwo } from "./pages/Events";
import Contact from "./pages/ContactUs";
import Support from "./pages/Support";
function App() {
    return (
        <Router>
          <Footer />
        <Sidebar />
        <Routes>
        <Route path="/about-us" exact component={AboutUs} />
        <Route path="/about-us/aim" exact component={OurAim} />
        <Route path="/about-us/vision" exact component={OurVision} />
        <Route path="/services" exact component={Services} />
        <Route path="/services/services1" exact component={ServicesOne} />
        <Route path="/services/services2" exact component={ServicesTwo} />
        <Route path="/services/services3" exact component={ServicesThree} />
        <Route path="/contact" exact component={Contact} />
        <Route path="/events" exact component={Events} />
        <Route path="/events/events1" exact component={EventsOne} />
        <Route path="/events/events2" exact component={EventsTwo} />
            <Route path="/support" exact component={Support} />
        </Routes>
            <img src={Logo} alt="website logo" />                    
    </Router>
  );
}
  
export default App;
