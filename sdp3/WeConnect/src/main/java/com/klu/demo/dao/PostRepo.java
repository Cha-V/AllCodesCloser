package com.klu.demo.dao;

import org.springframework.data.repository.CrudRepository;

import com.klu.demo.model.Post;

public interface PostRepo extends CrudRepository<Post,Integer>{

}
