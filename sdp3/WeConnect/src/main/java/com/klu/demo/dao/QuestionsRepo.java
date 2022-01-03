package com.klu.demo.dao;

import org.springframework.data.repository.CrudRepository;

import com.klu.demo.model.Questions;

public interface QuestionsRepo extends CrudRepository<Questions,Integer>{

}
