package com.klu.demo.model;

import java.io.Serializable;

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.Id;
import javax.persistence.Lob;

@Entity
public class Citizen implements Serializable{
	@Id
	private int aadhaar;
	private boolean isPo;
	private boolean applyStatus;
	
	@Lob
	@Column(columnDefinition="MEDIUMBLOB")
	private String Image;
	
	public String getImage() {
		return Image;
	}
	public void setImage(String image) {
		Image = image;
	}
	public boolean isApplyStatus() {
		return applyStatus;
	}
	public void setApplyStatus(boolean applyStatus) {
		this.applyStatus = applyStatus;
	}
	public void setPo(boolean isPo) {
		this.isPo = isPo;
	}
	
	public boolean isPo() {
		return isPo;
	}
	public boolean getPo() {
		return this.isPo;
	}
	private String twitter,facebook,instagram,linkedin;
	


	public String getTwitter() {
		return twitter;
	}
	public void setTwitter(String twitter) {
		this.twitter = twitter;
	}
	public String getFacebook() {
		return facebook;
	}
	public void setFacebook(String facebook) {
		this.facebook = facebook;
	}
	public String getInstagram() {
		return instagram;
	}
	public void setInstagram(String instagram) {
		this.instagram = instagram;
	}
	public String getLinkedin() {
		return linkedin;
	}
	public void setLinkedin(String linkedin) {
		this.linkedin = linkedin;
	}
	public int getAadhaar() {
		return aadhaar;
	}
	public void setAadhaar(int aadhaar) {
		this.aadhaar = aadhaar;
	}
	private String email,about;
	
	public String getEmail() {
		return email;
	}
	public void setEmail(String email) {
		this.email = email;
	}
	public String getAbout() {
		return about;
	}
	public void setAbout(String about) {
		this.about = about;
	}
	private String username;
	private String name,city,state,country,district;
	private long phone;

	//username, name, city, phone, state, country, district, division,   
	public String getUsername() {
		return username;
	}
	public void setUsername(String username) {
		this.username = username;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public String getCity() {
		return city;
	}
	public void setCity(String city) {
		this.city = city;
	}
	public String getState() {
		return state;
	}
	public void setState(String state) {
		this.state = state;
	}
	public String getCountry() {
		return country;
	}
	public void setCountry(String country) {
		this.country = country;
	}
	public String getDistrict() {
		return district;
	}
	public void setDistrict(String district) {
		this.district = district;
	}
	public long getPhone() {
		return phone;
	}
	public void setPhone(long phone) {
		this.phone = phone;
	}
	public void setDetails(String name2, String about2, String city2, String district2, String state2,
			String country2, long phone2, String email2, String twitter2, String facebook2, String instagram2,
			String linkedin2) {
		this.twitter = twitter2;
		this.facebook= facebook2;
		this.name=name2;
		
		this.about=about2;
		this.city=city2;
		this.country=country2;
		this.district=district2;
		this.email=email2;
		this.phone=phone2;
		this.instagram=instagram2;
		this.linkedin=linkedin2;
		this.state=state2;
		
		
		
		// TODO Auto-generated method stub
		
	}
	
}
