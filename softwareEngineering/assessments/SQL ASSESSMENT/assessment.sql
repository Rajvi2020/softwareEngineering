-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Apr 28, 2026 at 11:12 AM
-- Server version: 10.4.32-MariaDB
-- PHP Version: 8.2.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `assessment`
--

DELIMITER $$
--
-- Procedures
--
CREATE DEFINER=`root`@`localhost` PROCEDURE `GetMonthlyExpense` (IN `uid` INT, IN `month_num` INT, IN `year_num` INT)   BEGIN
    SELECT u.name, SUM(e.amount) AS total_expense
    FROM expenses e
    INNER JOIN users u ON e.user_id = u.user_id
    WHERE e.user_id = uid 
    AND MONTH(e.expense_date) = month_num
    AND YEAR(e.expense_date) = year_num
    GROUP BY u.name;
END$$

DELIMITER ;

-- --------------------------------------------------------

--
-- Stand-in structure for view `activeusersview`
-- (See below for the actual view)
--
CREATE TABLE `activeusersview` (
`name` varchar(50)
,`email` varchar(100)
);

-- --------------------------------------------------------

--
-- Stand-in structure for view `activeusersview1`
-- (See below for the actual view)
--
CREATE TABLE `activeusersview1` (
`name` varchar(50)
,`email` varchar(100)
);

-- --------------------------------------------------------

--
-- Table structure for table `categories`
--

CREATE TABLE `categories` (
  `category_id` int(11) NOT NULL,
  `category_name` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `categories`
--

INSERT INTO `categories` (`category_id`, `category_name`) VALUES
(1, 'Food'),
(2, 'Rent'),
(3, 'Entertainment');

-- --------------------------------------------------------

--
-- Table structure for table `expenses`
--

CREATE TABLE `expenses` (
  `expense_id` int(11) NOT NULL,
  `user_id` int(11) DEFAULT NULL,
  `category_id` int(11) DEFAULT NULL,
  `amount` decimal(10,2) DEFAULT NULL,
  `expense_date` date DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `expenses`
--

INSERT INTO `expenses` (`expense_id`, `user_id`, `category_id`, `amount`, `expense_date`) VALUES
(1, 1, 1, 2000.00, '2026-02-01'),
(2, 2, 2, 5000.00, '2026-02-02'),
(4, 4, 3, 700.00, '2026-02-04'),
(5, 5, 2, 4500.00, '2026-02-05'),
(6, 1, 3, 800.00, '2026-02-06'),
(8, 3, 2, 5200.00, '2026-02-08'),
(9, 4, 3, 900.00, '2026-02-09'),
(10, 5, 1, 200.00, '2026-02-10'),
(11, 1, 1, 300.00, '2026-02-11'),
(12, 1, 2, 400.00, '2026-02-12'),
(13, 1, 3, 500.00, '2026-02-13'),
(14, 1, 1, 600.00, '2026-02-14'),
(25, 1, 1, 1000.00, '2026-03-15');

-- --------------------------------------------------------

--
-- Table structure for table `users`
--

CREATE TABLE `users` (
  `user_id` int(11) NOT NULL,
  `name` varchar(50) DEFAULT NULL,
  `email` varchar(100) DEFAULT NULL,
  `created_at` date DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `users`
--

INSERT INTO `users` (`user_id`, `name`, `email`, `created_at`) VALUES
(1, 'Amit Shah', 'amit@gmail.com', '2026-01-01'),
(2, 'Priya Mehta', 'priya@gmail.com', '2026-01-02'),
(3, 'Rahul Patel', 'rahul@gmail.com', '2026-01-03'),
(4, 'Sneha Jain', 'sneha@gmail.com', '2026-01-04'),
(5, 'Karan Verma', 'karan@gmail.com', '2026-01-05');

-- --------------------------------------------------------

--
-- Structure for view `activeusersview`
--
DROP TABLE IF EXISTS `activeusersview`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `activeusersview`  AS SELECT `u`.`name` AS `name`, `u`.`email` AS `email` FROM (`users` `u` join `expenses` `e` on(`u`.`user_id` = `e`.`user_id`)) GROUP BY `u`.`user_id`, `u`.`name`, `u`.`email` HAVING count(`e`.`expense_id`) > 5 ;

-- --------------------------------------------------------

--
-- Structure for view `activeusersview1`
--
DROP TABLE IF EXISTS `activeusersview1`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `activeusersview1`  AS SELECT `u`.`name` AS `name`, `u`.`email` AS `email` FROM (`users` `u` join `expenses` `e` on(`u`.`user_id` = `e`.`user_id`)) GROUP BY `u`.`user_id`, `u`.`name`, `u`.`email` HAVING count(`e`.`expense_id`) > 5 ;

--
-- Indexes for dumped tables
--

--
-- Indexes for table `categories`
--
ALTER TABLE `categories`
  ADD PRIMARY KEY (`category_id`);

--
-- Indexes for table `expenses`
--
ALTER TABLE `expenses`
  ADD PRIMARY KEY (`expense_id`),
  ADD KEY `user_id` (`user_id`),
  ADD KEY `category_id` (`category_id`);

--
-- Indexes for table `users`
--
ALTER TABLE `users`
  ADD PRIMARY KEY (`user_id`);

--
-- Constraints for dumped tables
--

--
-- Constraints for table `expenses`
--
ALTER TABLE `expenses`
  ADD CONSTRAINT `expenses_ibfk_1` FOREIGN KEY (`user_id`) REFERENCES `users` (`user_id`),
  ADD CONSTRAINT `expenses_ibfk_2` FOREIGN KEY (`category_id`) REFERENCES `categories` (`category_id`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
