package com.klu.demo.dao;

import java.util.List;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.data.jpa.repository.Query;

import com.klu.demo.model.Follow;

public interface FollowRepo extends JpaRepository<Follow,Integer>{
//	@Query("SELECT aadhaar FROM Citizen c WHERE c.name LIKE %?1%")
//	 List<Integer> search(String keyword);
	
	
	@Query("SELECT fid FROM Follow c where c.follower=?1 and c.following=?2")
	List<Integer> isFollow(int follower,int following);
}