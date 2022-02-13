import React from "react";
import * as FaIcons from "react-icons/fa";
import * as AiIcons from "react-icons/ai";
import * as IoIcons from "react-icons/io";
import * as RiIcons from "react-icons/ri";
  
export const SidebarData = [
  {
    title: "About Us",
    path: "/about-us",
    icon: <AiIcons.AiFillHome />,
    iconClosed: <RiIcons.RiArrowDownSFill />,
    iconOpened: <RiIcons.RiArrowUpSFill />,
  
    subNav: [
      {
        title: "My_team_dev",
        path: "Trailer",
        icon: <IoIcons.IoIosPaper />,
      },
      {
        title: "Trailer",
        path: "/about-us/vision",
        icon: <IoIcons.IoIosPaper />,
      },
    ],
  },
];
