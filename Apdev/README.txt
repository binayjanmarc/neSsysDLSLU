USERS
	Requestor1 or Requestor2
	Superior1
	ICTC1
	Technician1 or Technician 2
	Admin1
Password
	123qwe                                                                <option <?php echo $row["status"] == 'Approved' ? 'selected' : '""'  ?> value ="Approved">Approved</option>
                                                                <option <?php echo $row["status"] == 'Completed' ? 'selected' : '""'  ?> value ="Completed">Completed</option>

                                                                <option value="<?php echo $rows['username'];?>"></option>