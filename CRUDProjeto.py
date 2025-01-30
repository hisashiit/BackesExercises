import psycopg2
from psycopg2 import sql
import unicodedata
import datetime

# Database connection parameters
DB_HOST = "localhost"
DB_NAME = "Hospital"
DB_USER = "postgres"
DB_PASSWORD = "FOKIL123"

# Function to sanitize strings (remove non-ASCII characters)
def sanitize_string(s):
    return unicodedata.normalize('NFKD', s).encode('ascii', 'ignore').decode('utf-8')

# Establish connection to the database
def connect_db():
    try:
        connection = psycopg2.connect(
            host=DB_HOST,
            database=DB_NAME,
            user=DB_USER,
            password=DB_PASSWORD,
            options="-c client_encoding=UTF8"  # Explicitly set UTF-8 encoding
        )
        # Check the current client encoding
        with connection.cursor() as cursor:
            cursor.execute("SHOW client_encoding;")
            encoding = cursor.fetchone()[0]
        return connection
    except Exception as e:
        print(f"Error connecting to the database: {e}")
        return None


# CREATE a new Patient
def create_patient(idPatient, CPF, idPerson, name, maritalStatus, dateOfBirth, gender):
    name = sanitize_string(name)
    maritalStatus = sanitize_string(maritalStatus)
    gender = sanitize_string(gender)
    
    query = """
        INSERT INTO patient (idPatient, CPF, idPerson, name, maritalStatus, dateOfBirth, gender)
        VALUES (%s, %s, %s, %s, %s, %s, %s);
    """
    
    try:
        connection = connect_db()
        if connection:
            with connection.cursor() as cursor:
                cursor.execute(query, (idPatient, CPF, idPerson, name, maritalStatus, dateOfBirth, gender))
                connection.commit()
                print("Patient added successfully.")
            connection.close()
        else:
            print("Database connection failed.")
    except psycopg2.Error as e:
        print("Error adding patient:", e)

# READ all patients
def read_patients():
    query = "SELECT * FROM patient;"
    try:
        with connect_db() as connection:
            if connection:
                with connection.cursor() as cursor:
                    cursor.execute(query)
                    rows = cursor.fetchall()
                    for row in rows:
                        print(row)
    except psycopg2.Error as e:
        print("Error reading patients:", e)

# READ a particular patient
def read_patient(idpatient, idperson):
    query = """
    SELECT idpatient, cpf, idperson, name, maritalstatus, dateofbirth, gender 
    FROM patient
    WHERE idpatient = %s AND idperson = %s;
    """
    try:
        with connect_db() as connection:
            if connection:
                with connection.cursor() as cursor:
                    cursor.execute(query, (idpatient, idperson))
                    patient = cursor.fetchone()
                    if patient:
                        # Formatting the output
                        headers = ["IDPatient", "CPF", "IDPerson", "Name", "Marital Status", "Date of Birth", "Gender"]
                        patient_dict = dict(zip(headers, patient))
                        for key, value in patient_dict.items():
                            print(f"{key:15}: {value}")
                    else:
                        print(f"No patient found with IDPatient: {idpatient} and IDPerson: {idperson}")
    except psycopg2.Error as e:
        print("Error reading patient:", e)



# UPDATE a patient
def update_patient(idPatient, idPerson, newName, newMaritalStatus):
    newName = sanitize_string(newName)
    newMaritalStatus = sanitize_string(newMaritalStatus)
    
    query = """
        UPDATE patient
        SET name = %s, maritalstatus = %s
        WHERE idpatient = %s AND idperson = %s;
    """
    
    try:
        with connect_db() as connection:
            if connection:
                with connection.cursor() as cursor:
                    cursor.execute(query, (newName, newMaritalStatus, idPatient, idPerson))
                    connection.commit()
                    print("Patient updated successfully.")
    except psycopg2.Error as e:
        print("Error updating patient:", e)

# DELETE a patient
def delete_patient(idPatient, idPerson):
    query = """
        DELETE FROM patient
        WHERE idpatient = %s AND idperson = %s;
    """
    try:
        with connect_db() as connection:
            if connection:
                with connection.cursor() as cursor:
                    cursor.execute(query, (idPatient, idPerson))
                    connection.commit()
                    print("Patient deleted successfully.")
    except psycopg2.Error as e:
        print("Error deleting patient:", e)


# CREATE a new Doctor
def create_doctor(CRM, idDoctor, CPF, idPerson, name, maritalStatus, dateOfBirth, gender):
    name = sanitize_string(name)
    maritalStatus = sanitize_string(maritalStatus)
    gender = sanitize_string(gender)

    query = """
        INSERT INTO doctor (CRM, idDoctor, CPF, idPerson, name, maritalStatus, dateOfBirth, gender)
        VALUES (%s, %s, %s, %s, %s, %s, %s, %s);
    """
    try:
        with connect_db() as connection:
            if connection:
                with connection.cursor() as cursor:
                    cursor.execute(query, (CRM, idDoctor, CPF, idPerson, name, maritalStatus, dateOfBirth, gender))
                    connection.commit()
                    print("Doctor added successfully.")
    except psycopg2.Error as e:
        print(f"Error adding doctor: {e}")


# READ all doctors
def read_doctors():
    query = "SELECT * FROM doctor;"
    try:
        with connect_db() as connection:
            if connection:
                with connection.cursor() as cursor:
                    cursor.execute(query)
                    rows = cursor.fetchall()
                    for row in rows:
                        print(row)
    except psycopg2.Error as e:
        print("Error reading doctors:", e)

# UPDATE a doctor
def update_doctor(idDoctor, idPerson, newName, newMaritalStatus):
    newName = sanitize_string(newName)
    newMaritalStatus = sanitize_string(newMaritalStatus)
    
    query = """
        UPDATE doctor
        SET name = %s, maritalStatus = %s
        WHERE idDoctor = %s AND idPerson = %s;
    """
    try:
        with connect_db() as connection:
            if connection:
                with connection.cursor() as cursor:
                    cursor.execute(query, (newName, newMaritalStatus, idDoctor, idPerson))
                    connection.commit()
                    print("Doctor updated successfully.")
    except psycopg2.Error as e:
        print(f"Error updating doctor: {e}")


# DELETE a doctor
def delete_doctor(idDoctor, idPerson):
    query = """
        DELETE FROM doctor
        WHERE iddoctor = %s AND idperson = %s;
    """
    try:
        with connect_db() as connection:
            if connection:
                with connection.cursor() as cursor:
                    cursor.execute(query, (idDoctor, idPerson))
                    connection.commit()
                    print("Doctor deleted successfully.")
    except psycopg2.Error as e:
        print("Error deleting doctor:", e)


# Example usage
if __name__ == "__main__":
    # Add a new patient
    create_patient(4, '14345678901', 3000, 'Marcelo Albertini', 'Single', '1960-04-15', 'Male')
    
    # Read all patients
    #print("All patients:")
    #read_patients()
    
    # Update a patient's information
    update_patient(4, 3000, 'Marcelo Albertini', 'Married')
    
    # Read again to verify the update
    #print("\nAfter update:")
    #read_patients()
    
    # Delete a patient
    delete_patient(4, 3000)
    read_patient(1, 1001)
    # Read again to verify the deletion
    #print("\nAfter deletion:")
    #read_patients()

    # Add a new doctor CRM, idDoctor, CPF, idPerson, name, maritalStatus, dateOfBirth, gender
    #create_doctor(190057, 3002, 13242212422, 2002, 'Dr. Hisashi', 'Single', '1976-06-25', 'Male')
    
    # Read all doctors
    #print("\nAll doctors:")
    #read_doctors()
    
    # Update a doctor's information idDoctor, idPerson, newName, newMaritalStatus
    #update_doctor(4, 3000, 'Dr. Bruno', 'Married')
    
    # Read again to verify the update
    #print("\nAfter doctor update:")
    #read_doctors()
    
    # Delete a doctor
    #delete_doctor(4, 1006)
    
    # Read again to verify the deletion
    ##print("\nAfter doctor deletion:")
    #read_doctors()
 