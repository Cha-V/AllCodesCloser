package com.klu.demo.model;

import javax.persistence.*;
import javax.persistence.GeneratedValue;

@Entity
public class Notifications {

	@Id
	@GeneratedValue
	private int not_id;
	private int user_id;
	private String message;
	public int getNot_id() {
		return not_id;
	}
	public void setNot_id(int not_id) {
		this.not_id = not_id;
	}
	public int getUser_id() {
		return user_id;
	}
	public void setUser_id(int user_id) {
		this.user_id = user_id;
	}
	public String getMessage() {
		return message;
	}
	public void setMessage(String message) {
		this.message = message;
	}
	
}
