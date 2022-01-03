package com.klu.demo.model;

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.Id;
import javax.persistence.Lob;

import org.springframework.web.multipart.MultipartFile;

@Entity
public class Post {
	@Id
	@GeneratedValue
	private int post_id;
	private String post_description;
	private int post_to;
	private String post_to_name;
	private String post_from_name;
	private int likes;
	
	public int getLikes() {
		return likes;
	}
	public void setLikes(int likes) {
		this.likes = likes;
	}
	public String getPost_to_name() {
		return post_to_name;
	}
	public void setPost_to_name(String post_to_name) {
		this.post_to_name = post_to_name;
	}
	public String getPost_from_name() {
		return post_from_name;
	}
	public void setPost_from_name(String post_from_name) {
		this.post_from_name = post_from_name;
	}
	@Lob
	@Column(columnDefinition="MEDIUMBLOB")
	private String Image;
	private int post_from;
	public int getPost_id() {
		return post_id;
	}
	public void setPost_id(int post_id) {
		this.post_id = post_id;
	}
	public String getPost_description() {
		return post_description;
	}
	public void setPost_description(String post_description) {
		this.post_description = post_description;
	}
	public int getPost_to() {
		return post_to;
	}
	public void setPost_to(int post_to) {
		this.post_to = post_to;
	}
	
	public String getImage() {
		return Image;
	}
	public void setImage(String image) {
		Image = image;
	}
	public int getPost_from() {
		return post_from;
	}
	public void setPost_from(int post_from) {
		this.post_from = post_from;
	}
	
}
