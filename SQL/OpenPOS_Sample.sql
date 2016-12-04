-- MySQL dump 10.13  Distrib 5.7.12, for Win32 (AMD64)
--
-- Host: 127.0.0.1    Database: db_project
-- ------------------------------------------------------
-- Server version	5.7.16-log

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `op_product`
--

DROP TABLE IF EXISTS `op_product`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `op_product` (
  `PD_IDX` int(11) NOT NULL,
  `PD_NAME` varchar(100) NOT NULL,
  `PD_PRICE` varchar(45) DEFAULT NULL,
  `PD_COUNT` int(11) DEFAULT NULL,
  PRIMARY KEY (`PD_NAME`),
  UNIQUE KEY `PD_IDX_UNIQUE` (`PD_IDX`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `op_product`
--

LOCK TABLES `op_product` WRITE;
/*!40000 ALTER TABLE `op_product` DISABLE KEYS */;
INSERT INTO `op_product` VALUES (1,'테스트 제품 01','100',41),(2,'테스트 제품 02','1000',99),(3,'테스트 제품 03','250',100),(4,'테스트 제품 04','50',96),(5,'테스트 제품 05','2000',19);
/*!40000 ALTER TABLE `op_product` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `op_result`
--

DROP TABLE IF EXISTS `op_result`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `op_result` (
  `RES_DATE` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  `RES_USERID` varchar(45) NOT NULL,
  `RES_INMONEY` varchar(45) NOT NULL,
  `RES_INCARD` varchar(45) NOT NULL,
  `RES_TOTAL` varchar(45) NOT NULL,
  PRIMARY KEY (`RES_DATE`),
  KEY `RES_USRID_idx` (`RES_USERID`),
  CONSTRAINT `RES_USRID` FOREIGN KEY (`RES_USERID`) REFERENCES `op_user` (`USER_ID`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `op_result`
--

LOCK TABLES `op_result` WRITE;
/*!40000 ALTER TABLE `op_result` DISABLE KEYS */;
INSERT INTO `op_result` VALUES ('2011-01-01 03:12:12','admin','1000','200','1200'),('2016-11-07 11:44:49','admin','0','0','100'),('2016-11-07 11:54:15','admin','120','80','200'),('2016-11-07 15:38:32','admin','1200','0','500'),('2016-11-07 15:42:34','admin','0','0','1000'),('2016-11-11 00:32:43','admin','0','0','100'),('2016-11-11 00:34:38','admin','15000','0','4000'),('2016-11-14 03:33:01','admin','0','0','500'),('2016-11-25 05:24:22','admin','100','200','300'),('2016-11-28 11:46:58','admin','100','200','300'),('2016-11-28 12:13:31','test01','200','1800','2000');
/*!40000 ALTER TABLE `op_result` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `op_sale`
--

DROP TABLE IF EXISTS `op_sale`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `op_sale` (
  `SA_IDX` int(11) NOT NULL AUTO_INCREMENT,
  `SA_USERID` varchar(45) NOT NULL,
  `SA_PDNAME` varchar(100) NOT NULL,
  `SA_PDPRICE` varchar(45) DEFAULT NULL,
  `SA_PDQUA` int(11) NOT NULL DEFAULT '0',
  `SA_TIMETABLE` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`SA_IDX`),
  KEY `PDNAME_idx` (`SA_PDNAME`),
  KEY `USERID_idx` (`SA_USERID`),
  CONSTRAINT `PDNAME` FOREIGN KEY (`SA_PDNAME`) REFERENCES `op_product` (`PD_NAME`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `USERID` FOREIGN KEY (`SA_USERID`) REFERENCES `op_user` (`USER_ID`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB AUTO_INCREMENT=77 DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `op_sale`
--

LOCK TABLES `op_sale` WRITE;
/*!40000 ALTER TABLE `op_sale` DISABLE KEYS */;
INSERT INTO `op_sale` VALUES (67,'admin','테스트 제품 01','100',1,'2016-11-07 11:43:39'),(68,'admin','테스트 제품 01','100',1,'2016-11-07 11:44:49'),(69,'admin','테스트 제품 04','50',4,'2016-11-07 11:54:15'),(73,'admin','테스트 제품 01','100',40,'2016-11-11 00:34:38'),(74,'admin','테스트 제품 01','100',5,'2016-11-14 03:33:01'),(75,'admin','테스트 제품 01','100',3,'2016-11-28 11:46:58'),(76,'test01','테스트 제품 05','2000',1,'2016-11-28 12:13:31');
/*!40000 ALTER TABLE `op_sale` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `op_user`
--

DROP TABLE IF EXISTS `op_user`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `op_user` (
  `USER_GROUP` int(1) NOT NULL DEFAULT '0',
  `USER_ID` varchar(14) CHARACTER SET utf8mb4 NOT NULL,
  `USER_NAME` varchar(50) CHARACTER SET utf8mb4 NOT NULL DEFAULT 'OpenPOS' COMMENT '기본값을 User 혹은 OpenPOS 중 하나 중 고를 예정인데, OpenPOS로 선택..',
  `PASSWORD` varchar(15) CHARACTER SET utf8mb4 NOT NULL DEFAULT '0' COMMENT 'Password 필드가 0일 경우, 패스워드 재설정을 요청하도록 코딩..',
  PRIMARY KEY (`USER_ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `op_user`
--

LOCK TABLES `op_user` WRITE;
/*!40000 ALTER TABLE `op_user` DISABLE KEYS */;
INSERT INTO `op_user` VALUES (1,'admin','관리자','1234'),(0,'test01','직원 01','1234'),(0,'test02','직원 02','1234'),(1,'test03','직원 03','1234'),(1,'test04','직원 04','1234');
/*!40000 ALTER TABLE `op_user` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2016-12-04 10:40:23
