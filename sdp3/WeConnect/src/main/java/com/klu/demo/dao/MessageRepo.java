package com.klu.demo.dao;

import org.springframework.data.repository.CrudRepository;

import com.klu.demo.model.Message;

public interface MessageRepo extends CrudRepository<Message,Integer>{

}
