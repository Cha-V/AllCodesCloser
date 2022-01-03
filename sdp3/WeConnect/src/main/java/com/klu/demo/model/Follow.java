package com.klu.demo.model;

import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.Id;

@Entity
public class Follow {
  @Id
  @GeneratedValue
  private int fid;
  private int follower;
  private int following;
  public int getFid() {
    return fid;
  }
  public void setFid(int fid) {
    this.fid = fid;
  }
  public int getFollower() {
    return follower;
  }
  public void setFollower(int follower) {
    this.follower = follower;
  }
  public int getFollowing() {
    return following;
  }
  public void setFollowing(int following) {
    this.following = following;
  }
}
