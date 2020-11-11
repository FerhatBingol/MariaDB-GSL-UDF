/* MariaDB PROCEDURE PACKAGE
	by	Ferhat Bingöl 
      ferhatbingol@ustunenerji.com
	
  	Procedure CREATE_SECTORS
    This procedure takes the given TABLE name WD Column name and creates a new column called SECTOR and calculates the wind sector of the given WD.
    Example Usage:
        select (TABLE_NAME; string, NUMBER OF SECTOR WANTED;integer, WIND_DIRECTION_COLUMN; string)
		
		(c) USTUN Energy Engineering LLC 
    www.USTUNEnerji.com
*/


DELIMITER //
CREATE OR REPLACE PROCEDURE CREATE_SECTORS (
	IN pTable VARCHAR(10),
	IN pNSector INT,
	IN pWD VARCHAR(10)
)
backdoor:BEGIN
	DECLARE sectorSize INT DEFAULT 0;
 	
 	SET @pTable=pTable;
	SET @pNSector=pNSector;
	SET @pWD=pWD;

 	/* Check if sector field is avaliable, create if not exists */
	SET @sql_text=CONCAT('ALTER TABLE ',@pTable,' ADD COLUMN IF NOT EXISTS `sector` TINYINT NULL DEFAULT NULL');
	PREPARE psql FROM @sql_text;
	EXECUTE psql;
	DEALLOCATE PREPARE psql;
	
	/* populate sector field */
	SET @sectorSize=360.0/pNSector;
	SET @sql_text=CONCAT('UPDATE ',@pTable,' SET sector=cast(floor(Mod(',pWD,'+',(@sectorSize/2),'+360.0,360.0)/',@sectorSize,')+1 as INT)');
	PREPARE psql FROM @sql_text;
	EXECUTE psql;
	DEALLOCATE PREPARE psql;
	
	
	END;
	 
	 //
DELIMITER ;
