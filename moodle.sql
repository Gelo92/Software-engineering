-- phpMyAdmin SQL Dump
-- version 5.1.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Nov 19, 2021 at 09:47 PM
-- Server version: 10.4.21-MariaDB
-- PHP Version: 7.3.31

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `moodle`
--

-- --------------------------------------------------------

--
-- Table structure for table `practicalbooking`
--

CREATE TABLE `practicalbooking` (
  `index` bigint(20) NOT NULL,
  `module` varchar(50) DEFAULT NULL,
  `description` bigint(250) DEFAULT NULL,
  `firstname` varchar(50) DEFAULT NULL,
  `username` varchar(50) DEFAULT NULL,
  `surname` varchar(50) DEFAULT NULL,
  `prac` varchar(100) DEFAULT NULL,
  `prac_day_time` varchar(100) DEFAULT NULL,
  `date` datetime DEFAULT current_timestamp(),
  `marks` varchar(10) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `practicalbooking`
--

INSERT INTO `practicalbooking` (`index`, `module`, `description`, `firstname`, `username`, `surname`, `prac`, `prac_day_time`, `date`, `marks`) VALUES
(1, 'ENEL3CO', 0, NULL, '218124478', NULL, 'Monday', 'System.Windows.Forms.ComboBox, Items.Count: 3 @08:40 - 11:20', NULL, NULL),
(2, 'ENEL3CO', 0, NULL, '218124478', NULL, 'CO2', 'Wednesday @14:10 - 17:35', NULL, NULL),
(3, 'ENEL3CO', 0, NULL, '218124478', NULL, 'CO2', 'Wednesday @14:10 - 17:35', '2021-11-19 21:06:37', NULL),
(4, 'ENEL3CO', 0, NULL, '218124478', NULL, 'CO2', 'Friday @08:40 - 11:20', '2021-11-19 21:10:05', NULL);

-- --------------------------------------------------------

--
-- Table structure for table `practicals`
--

CREATE TABLE `practicals` (
  `pracno` bigint(20) NOT NULL,
  `practittle` varchar(100) DEFAULT NULL,
  `module` varchar(50) DEFAULT NULL,
  `pracid` varchar(50) DEFAULT NULL,
  `pracdescription` varchar(250) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `practicals`
--

INSERT INTO `practicals` (`pracno`, `practittle`, `module`, `pracid`, `pracdescription`) VALUES
(2, 'SASS', 'ENEL3CO', 'CO2', 'ENEL3CO');

-- --------------------------------------------------------

--
-- Table structure for table `projects`
--

CREATE TABLE `projects` (
  `projectsno` bigint(20) NOT NULL,
  `projectid` varchar(100) DEFAULT NULL,
  `projecttittle` varchar(100) DEFAULT NULL,
  `projectdescription` varchar(1500) DEFAULT NULL,
  `supervisor` varchar(50) DEFAULT NULL,
  `eligibility` varchar(50) DEFAULT NULL,
  `implementation` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `projects`
--

INSERT INTO `projects` (`projectsno`, `projectid`, `projecttittle`, `projectdescription`, `supervisor`, `eligibility`, `implementation`) VALUES
(1, 'JT1', 'Automatic timetable generation', 'Manual preparation of timetables in institutions of learning can end up producing  scheduling that has an ineffective usage of resources (Classrooms, teachers, etc.). This project aims to produce a system that  prepares feasible timetable, given a number of subjects, teachers, maximum lectures a teacher can conduct,  and any other necessary information. ', 'Tapamo', 'CE', 'No, it must be completed within the design budget'),
(2, 'JT2', 'Document Visual Question Answering', 'Design a system that visually analyses and understands information on a document image in order to provide an answer to a question asked. This entails extraction from the document. Textual content (handwritten or typewritten), non-textual elements (marks, tick boxes, separators, diagrams), layout (page structure, forms, tables), and style (font, colours, highlighting), and many other elements that will enable the answering of the question.', 'Tapamo', 'CE', 'Software');

-- --------------------------------------------------------

--
-- Table structure for table `projectselection`
--

CREATE TABLE `projectselection` (
  `index` bigint(10) NOT NULL,
  `userid` varchar(50) DEFAULT NULL,
  `username` varchar(50) DEFAULT NULL,
  `surname` varchar(50) DEFAULT NULL,
  `projectid` varchar(30) DEFAULT NULL,
  `projecttitle` varchar(250) DEFAULT NULL,
  `supervisor` varchar(50) DEFAULT NULL,
  `projectdescription` varchar(250) DEFAULT NULL,
  `status` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Table structure for table `users`
--

CREATE TABLE `users` (
  `userid` bigint(20) NOT NULL,
  `username` varchar(9) DEFAULT NULL,
  `firstname` text DEFAULT NULL,
  `lastname` text DEFAULT NULL,
  `phonenumber` varchar(13) DEFAULT NULL,
  `email` varchar(50) DEFAULT NULL,
  `course` text DEFAULT NULL,
  `password` varchar(24) DEFAULT NULL,
  `usertype` varchar(20) DEFAULT NULL,
  `regitsrationdate` timestamp NULL DEFAULT current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `users`
--

INSERT INTO `users` (`userid`, `username`, `firstname`, `lastname`, `phonenumber`, `email`, `course`, `password`, `usertype`, `regitsrationdate`) VALUES
(1, '218124478', 'Lungelo', 'Zondi', '0684552412', '218005716@ukzn.ac.za', 'BSc Electronics', '1111', 'student', '2021-11-18 00:23:33'),
(2, 'Zondiln', 'Lungelo', 'Zondi', '0657880124', '218124478@stu.ukzn.ac.za', 'BSc Computer', '1112', 'lecturer', '2021-11-18 00:23:33'),
(3, 'admin', 'Lungelo', 'Zondi', '0786284562', '', '', '1113', 'administrator', '2021-11-18 00:23:33'),
(4, '', '', 'Ngid', '072154711', 'udykyuk@stu.ukzn.ac.za', 'ufkf', 'UKZN2021', 'student', '2021-11-18 21:34:03'),
(5, 'udykyuk12', 'yhstjuykj', 'udykyuk', 'ukuykyuf', 'udykyuk@ukzn.ac.za', 'ufkf', 'UKZN2021', 'lecturer', '2021-11-18 21:34:21'),
(7, 'Sakhile83', 'Senzo', 'Sakhile', '02154', 'Sakhile83@ukzn.ac.za', 'Bsc Eng', 'UKZN2021', 'lecturer', '2021-11-18 21:50:15'),
(8, 'Ndebele83', 'Sakhile ', 'Ndebele', '0824578745', 'Ndebele83@ukzn.ac.za', 'BSc Ti', 'UKZN2021', 'lecturer', '2021-11-18 21:57:50'),
(9, '22120962', 'Sakhile ', 'Ndebele', '0824578745', '22120962@stu.ukzn.ac.za', 'BSc Ti', 'UKZN2021', 'student', '2021-11-18 22:01:54'),
(10, 'eeew101', 'ewee', 'eeew', 'ewewew', 'eeew101@ukzn.ac.za', 'eewew', 'UKZN2021', 'weewe', '2021-11-18 23:02:44');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `practicalbooking`
--
ALTER TABLE `practicalbooking`
  ADD PRIMARY KEY (`index`);

--
-- Indexes for table `practicals`
--
ALTER TABLE `practicals`
  ADD PRIMARY KEY (`pracno`);

--
-- Indexes for table `projects`
--
ALTER TABLE `projects`
  ADD PRIMARY KEY (`projectsno`),
  ADD UNIQUE KEY `projectid` (`projectid`);

--
-- Indexes for table `projectselection`
--
ALTER TABLE `projectselection`
  ADD PRIMARY KEY (`index`),
  ADD UNIQUE KEY `userid` (`userid`),
  ADD UNIQUE KEY `username` (`username`),
  ADD UNIQUE KEY `projectid` (`projectid`),
  ADD UNIQUE KEY `surname` (`surname`),
  ADD UNIQUE KEY `projecttitle` (`projecttitle`);

--
-- Indexes for table `users`
--
ALTER TABLE `users`
  ADD PRIMARY KEY (`userid`),
  ADD UNIQUE KEY `username` (`username`),
  ADD UNIQUE KEY `email` (`email`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `practicalbooking`
--
ALTER TABLE `practicalbooking`
  MODIFY `index` bigint(20) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;

--
-- AUTO_INCREMENT for table `practicals`
--
ALTER TABLE `practicals`
  MODIFY `pracno` bigint(20) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;

--
-- AUTO_INCREMENT for table `projects`
--
ALTER TABLE `projects`
  MODIFY `projectsno` bigint(20) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;

--
-- AUTO_INCREMENT for table `projectselection`
--
ALTER TABLE `projectselection`
  MODIFY `index` bigint(10) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `users`
--
ALTER TABLE `users`
  MODIFY `userid` bigint(20) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=11;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
