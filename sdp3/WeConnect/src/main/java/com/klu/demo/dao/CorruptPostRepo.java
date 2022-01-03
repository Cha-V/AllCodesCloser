package com.klu.demo.dao;


import org.springframework.data.repository.CrudRepository;

import com.klu.demo.model.CorruptionPosts;

public interface CorruptPostRepo extends CrudRepository<CorruptionPosts,Integer>{

}
