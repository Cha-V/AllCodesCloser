package com.klu.demo.dao;

import java.util.List;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.data.jpa.repository.Modifying;
import org.springframework.data.jpa.repository.Query;
import org.springframework.stereotype.Repository;
import org.springframework.transaction.annotation.Transactional;

import com.klu.demo.model.Citizen;
@Repository
public interface CitizenRepo extends JpaRepository<Citizen,Integer>{
	@Query("SELECT aadhaar FROM Citizen c WHERE c.name LIKE %?1%")
	  List<Integer> search(String keyword);
	
	
}
