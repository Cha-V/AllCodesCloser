package com.klu.demo.model;

import javax.persistence.*;

@Entity
public class Message 
{
	@Id
	@GeneratedValue
	public int id;
	
	public int fromId;
	public String message;
	public String fromName;
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public int getFrom() {
		return fromId;
	}
	public void setFrom(int from) {
		this.fromId = from;
	}
	public String getMessage() {
		return message;
	}
	public void setMessage(String message) {
		this.message = message;
	}
	public String getFromName() {
		return fromName;
	}
	public void setFromName(String fromName) {
		this.fromName = fromName;
	}
	
}
