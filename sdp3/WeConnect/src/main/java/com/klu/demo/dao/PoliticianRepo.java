package com.klu.demo.dao;

import org.springframework.data.repository.CrudRepository;

import com.klu.demo.model.Politician;



public interface PoliticianRepo  extends CrudRepository<Politician,Integer>{

}
