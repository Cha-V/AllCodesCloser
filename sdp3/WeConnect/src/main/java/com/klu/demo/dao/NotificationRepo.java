package com.klu.demo.dao;

import org.springframework.data.repository.CrudRepository;

import com.klu.demo.model.Notifications;

public interface NotificationRepo extends CrudRepository<Notifications,Integer> {

}
