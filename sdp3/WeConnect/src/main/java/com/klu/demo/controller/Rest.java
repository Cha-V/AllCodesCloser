package com.klu.demo.controller;

import java.util.List;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpSession;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.ResponseBody;
import org.springframework.web.bind.annotation.RestController;
import org.springframework.web.context.request.RequestContextHolder;
import org.springframework.web.context.request.ServletRequestAttributes;
import org.springframework.web.servlet.ModelAndView;

import com.klu.demo.dao.CitizenRepo;
import com.klu.demo.dao.FollowRepo;
import com.klu.demo.model.Citizen;
import com.klu.demo.model.Follow;

@RestController
public class Rest {
  @Autowired
  CitizenRepo repo;
  
  @Autowired
  FollowRepo frepo;
  
  @RequestMapping("/hello")
  public String hello() {
    return "hello.jsp";
  }
  
  @GetMapping("/{id}")
  public ModelAndView user(@PathVariable int id) {
    ModelAndView mv = new ModelAndView("user.jsp");
    Citizen c =(Citizen) repo.findById(id).orElse(null);
    System.out.println("HelloA");
    mv.addObject("c", c);
    
    
    List<Integer> fol = frepo.isFollow(c.getAadhaar(), id);
    
    System.out.println(fol);
    
    if(fol.size()==0) {
    	mv.addObject("isFollow", false);
    }
    else mv.addObject("isFollow", true);
    
    return mv;
  }
  
  
  @ResponseBody
  @PostMapping("/{aadhar}")
  public String follow(@PathVariable int aadhar) {
    HttpServletRequest request = ((ServletRequestAttributes)RequestContextHolder.getRequestAttributes()).getRequest();
    HttpSession session=request.getSession();
    Citizen c=(Citizen)session.getAttribute("citizen");
    Follow follow = new Follow();
    follow.setFollower(c.getAadhaar());
    follow.setFollowing(aadhar);
    frepo.save(follow);
    
    return "followed";
  }
}