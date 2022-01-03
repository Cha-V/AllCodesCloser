import mysql.connector
import pandas as pd
from sqlalchemy import create_engine
hostname="localhost"
dbname="DWM"
uname="root"
pwd="root"
engine = create_engine("mysql+pymysql://{user}:{pw}@{host}/{db}".format(host=hostname, db=dbname, user=uname, pw=pwd))
dataset = pd.read_csv('Student_details.csv')
dataset