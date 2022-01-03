package com.klu.demo.controller;

import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.context.request.RequestContextHolder;
import org.springframework.web.context.request.ServletRequestAttributes;
import org.springframework.web.multipart.MultipartFile;
import org.springframework.web.servlet.ModelAndView;

import com.klu.demo.dao.*;
import com.klu.demo.model.*;

@Controller
public class MainController {
	@Autowired
	CitizenRepo repo;
	
	
	
	@Autowired
	PostRepo prepo;

	@Autowired
	MessageRepo mrepo;
	
	@Autowired
	NotificationRepo nRepo;

	@Autowired
	PoliticianRepo poRepo;

	@Autowired
	PoReqRepo poReRepo;
	
	@Autowired
	CorruptPostRepo cprepo;
	
	@Autowired
	QuestionsRepo qrepo;
	
	@RequestMapping("/")
	public String home() {
		HttpServletRequest request = ((ServletRequestAttributes)RequestContextHolder.getRequestAttributes()).getRequest();
		HttpSession session=request.getSession();
		HttpServletResponse response = ((ServletRequestAttributes)RequestContextHolder.getRequestAttributes()).getResponse();
		if(session.getAttribute("citizen")==null)
			return "login.jsp";
		return "registration.jsp";
	}
	
	@RequestMapping("/editAccDetails")
	public String editAcc(String name,String about,String city,String district,String state,
			String country,String twitter,String facebook,String instagram,String linkedin,long phone,String email)
	{
		HttpServletRequest request = ((ServletRequestAttributes)RequestContextHolder.getRequestAttributes()).getRequest();
	    HttpSession session=request.getSession();
	    Citizen c=(Citizen)session.getAttribute("citizen");
	    c.setDetails(name,about,city,district,state,country,phone,email,twitter,facebook,instagram,linkedin);
		repo.save(c);
		return "profile";
	}
	
	@RequestMapping("/register")
	public String register() {
		return "registration.jsp";
	}
	
	@RequestMapping("/login")
	public String login() {
		return "login.jsp";
	}
	
	@RequestMapping("/help")
	public String help() {
		HttpServletRequest request = ((ServletRequestAttributes)RequestContextHolder.getRequestAttributes()).getRequest();
		HttpSession session=request.getSession();
		HttpServletResponse response = ((ServletRequestAttributes)RequestContextHolder.getRequestAttributes()).getResponse();
		if(session.getAttribute("citizen")==null)
			return "login.jsp";
		ArrayList<Questions> posts = new ArrayList<Questions>();
	    posts=(ArrayList<Questions>)qrepo.findAll();
	    session.setAttribute("questions", posts);
		return "help.jsp";
	}
	
	
	
	@RequestMapping("/logout")
	public String logout() {
		HttpServletRequest request = ((ServletRequestAttributes)RequestContextHolder.getRequestAttributes()).getRequest();
		HttpSession session=request.getSession();
		session.setAttribute("citizen", null);
		return "login";
	}
	
	
	
	@RequestMapping("/afterLogin")
	public String welcome() throws IOException {
		HttpServletRequest request = ((ServletRequestAttributes)RequestContextHolder.getRequestAttributes()).getRequest();
		HttpSession session=request.getSession();
		HttpServletResponse response = ((ServletRequestAttributes)RequestContextHolder.getRequestAttributes()).getResponse();
		if(session.getAttribute("citizen")==null)
			return "login.jsp";
		ArrayList<Notifications> not = (ArrayList<Notifications>) nRepo.findAll();
		ArrayList<Post> posts = new ArrayList<Post>();
	    posts=(ArrayList<Post>)prepo.findAll();
	    session.setAttribute("posts", posts);
	    session.setAttribute("noti", not);
		return "afterLogin.jsp";	
	}
	
	@RequestMapping("/null")
	public String nullPage()
	{
		return "nullPage";
	}
	
	@RequestMapping("/myPosts")
	public String myPosts() throws IOException {
		HttpServletRequest request = ((ServletRequestAttributes)RequestContextHolder.getRequestAttributes()).getRequest();
		HttpSession session=request.getSession();
		HttpServletResponse response = ((ServletRequestAttributes)RequestContextHolder.getRequestAttributes()).getResponse();
		if(session.getAttribute("citizen")==null)
			return "login.jsp";
		ArrayList<Post> posts = new ArrayList<Post>();
	    posts=(ArrayList<Post>)prepo.findAll();
	    session.setAttribute("myposts", posts);
		return "afterLogin.jsp";	
	}
	
	
	
	@RequestMapping("/log")
	public String log(String aadhaar) {
		HttpServletRequest request = ((ServletRequestAttributes)RequestContextHolder.getRequestAttributes()).getRequest();
		HttpSession session=request.getSession();
		int a = Integer.parseInt(aadhaar);
		Citizen c = (Citizen)repo.findById(a).orElse(null);
		session.setAttribute("citizen", c);
		if(c==null)
			return "login";
		
		return "afterLogin";
	}
	
	@RequestMapping("/contact")
	public String contact() {
		HttpServletRequest request = ((ServletRequestAttributes)RequestContextHolder.getRequestAttributes()).getRequest();
		HttpSession session=request.getSession();
		HttpServletResponse response = ((ServletRequestAttributes)RequestContextHolder.getRequestAttributes()).getResponse();
		if(session.getAttribute("citizen")==null)
			return "login.jsp";
		return "contact.jsp";
	}
	
	@RequestMapping("/viewPol")
	public ModelAndView viewPol(){
		ArrayList<Politician> poReq = (ArrayList<Politician>) poRepo.findAll();
		ModelAndView model = new ModelAndView("viewPoReq.jsp");
		model.addObject("po", poReq);
		model.setViewName("viewPol.jsp");
		return model;
	}
	
	@RequestMapping("/upload")
	public String upload() {
		return "upload.jsp";
	}
	@RequestMapping("/profile")
	public ModelAndView profile() {
		HttpServletRequest request = ((ServletRequestAttributes)RequestContextHolder.getRequestAttributes()).getRequest();
		HttpSession session=request.getSession();
		//HttpServletResponse response = ((ServletRequestAttributes)RequestContextHolder.getRequestAttributes()).getResponse();
		ModelAndView mv = new ModelAndView();
		if(session.getAttribute("citizen")==null) {
			mv.setViewName("login.jsp");
			return mv;
		}
		mv.addObject("citizen", session.getAttribute("citizen"));
		mv.setViewName("profile.jsp");
		return mv;
	}
	@RequestMapping("/accSettings")
	public String accSettings() {
		HttpServletRequest request = ((ServletRequestAttributes)RequestContextHolder.getRequestAttributes()).getRequest();
		HttpSession session=request.getSession();
		HttpServletResponse response = ((ServletRequestAttributes)RequestContextHolder.getRequestAttributes()).getResponse();
		if(session.getAttribute("citizen")==null)
			return "login.jsp";
		return "profile.jsp";
	}
	
	
	
	
	@PostMapping("/uploadProfilePic")
	  public ModelAndView uploadProfilePic(@RequestParam("file") MultipartFile file) throws Exception{
	    HttpServletRequest request = ((ServletRequestAttributes)RequestContextHolder.getRequestAttributes()).getRequest();
	    HttpSession session=request.getSession();
	    Citizen c=(Citizen)session.getAttribute("citizen");
	    int from=c.getAadhaar();
	   
	    
	    System.out.println(file);
	    byte[] bytes=file.getBytes();
	    byte[] encodeBase64 = org.apache.tomcat.util.codec.binary.Base64.encodeBase64(bytes);
	        String base64Encoded = new String(encodeBase64, "UTF-8");
	        c.setImage(base64Encoded);
	        
	        ModelAndView mv = new ModelAndView("profile.jsp");
	        mv.addObject("c", c);
	        repo.save(c);
	   
	    return mv;
	    
	  }
	
	@RequestMapping("/addlikes")
	public String addLikes()
	{
		
		return null;
		
	}
	
	@RequestMapping("/sendMessage")
	public String sendMessage(String message)
	{
		System.out.println("Hello");
		Message m=new Message();
		m.setMessage(message);
		HttpServletRequest request = ((ServletRequestAttributes)RequestContextHolder.getRequestAttributes()).getRequest();
		HttpSession session=request.getSession();
		Citizen c=(Citizen)session.getAttribute("citizen");
		m.setFrom(c.getAadhaar());
		m.setFromName(c.getName());
		mrepo.save(m);
		
		return "contact.jsp";
		
	}
	
	@RequestMapping("/uploadFile")
	  public String uploadFile(Model model,String to,String description, @RequestParam("file") MultipartFile file) throws Exception{
	    HttpServletRequest request = ((ServletRequestAttributes)RequestContextHolder.getRequestAttributes()).getRequest();
	    HttpSession session=request.getSession();
	    Citizen c=(Citizen)session.getAttribute("citizen");
	    int from=c.getAadhaar();
	    Post p=new Post();
	    int To=Integer.parseInt(to);
	    Citizen x=(Citizen)repo.getById(To);
	    p.setPost_to(To);
	    p.setPost_from(from);
	    p.setPost_description(description);
	    p.setPost_from_name(c.getName());
	    p.setPost_to_name(x.getName());
	    byte[] bytes=file.getBytes();
	    byte[] encodeBase64 = org.apache.tomcat.util.codec.binary.Base64.encodeBase64(bytes);
	        String base64Encoded = new String(encodeBase64, "UTF-8");
	        p.setImage(base64Encoded);
	        
	    
	    
	    prepo.save(p);
	    ArrayList<Post> posts = new ArrayList<Post>();
	    posts=(ArrayList<Post>)prepo.findAll();
	    session.setAttribute("posts", posts);
	    return "afterLogin";
	    
	  }
	
	@RequestMapping("/corruptionUploadFile")
	  public String corruptionUploadFile(Model model,String to,String description, @RequestParam("file") MultipartFile file) throws Exception{
	    HttpServletRequest request = ((ServletRequestAttributes)RequestContextHolder.getRequestAttributes()).getRequest();
	    HttpSession session=request.getSession();
	    Citizen c=(Citizen)session.getAttribute("citizen");
	    int from=c.getAadhaar();
	    CorruptionPosts p=new CorruptionPosts();
	    int To=Integer.parseInt(to);
	    Citizen x=(Citizen)repo.getById(To);
	    p.setPost_to(To);
	    p.setPost_from(from);
	    p.setPost_description(description);
	    p.setPost_from_name(c.getName());
	    p.setPost_to_name(x.getName());
	    byte[] bytes=file.getBytes();
	    byte[] encodeBase64 = org.apache.tomcat.util.codec.binary.Base64.encodeBase64(bytes);
	        String base64Encoded = new String(encodeBase64, "UTF-8");
	        p.setImage(base64Encoded);
	    cprepo.save(p);
	    ArrayList<CorruptionPosts> posts = new ArrayList<CorruptionPosts>();
	    posts=(ArrayList<CorruptionPosts>)cprepo.findAll();
	    session.setAttribute("cposts", posts);
	    return "corruption";
	    
	  }
	
	
	
	@RequestMapping("/addCitizen")
	public String addCtitzen(Citizen c) {
		repo.save(c);
		return "login";
	}
	
	@RequestMapping("/addQuestion")
	public String addQuestion(String question,String ans)
	{
		Questions q=new Questions();
		q.setQuestion(question);
		q.setAns(ans);
		qrepo.save(q);
		return "adminHelp";
		
	}

	@RequestMapping("/adminWelcome")
	public String adminWelcome()
	{
		return "adminWelcome.jsp";
	}
	
	
	@RequestMapping("/adminAuthentication")
	public String adminAuthentication(String name, String password) throws Exception{
		
		
		if(name.equals("admin")&&password.equals("1234"))
		{
			HttpServletRequest request = ((ServletRequestAttributes)RequestContextHolder.getRequestAttributes()).getRequest();
			HttpSession session=request.getSession();
			ArrayList<Notifications> not = (ArrayList<Notifications>) nRepo.findAll();
			ArrayList<Post> posts = new ArrayList<Post>();
		    posts=(ArrayList<Post>)prepo.findAll();
		    for(int i=0;i<posts.size();i++)
		    {
		    	System.out.println(posts.get(i).getPost_id());
		    }
		    session.setAttribute("posts", posts);
		    session.setAttribute("noti", not);
		    return "adminWelcome.jsp";
		}
		return "admin.jsp";
	}

	@RequestMapping("/admin")
	public String admin(){
		return "admin.jsp";
	}
	
	@RequestMapping("/applyNow")
	public String applyNow() {
		HttpServletRequest request = ((ServletRequestAttributes)RequestContextHolder.getRequestAttributes()).getRequest();
		HttpSession session=request.getSession();
		if(session.getAttribute("citizen")==null)
			return "login.jsp";
		return "applyNow.jsp";
	}
	
	@RequestMapping("/apply")
	public String apply() {
		
		
		HttpServletRequest request = ((ServletRequestAttributes)RequestContextHolder.getRequestAttributes()).getRequest();
	    HttpSession session=request.getSession();
		if(session.getAttribute("citizen")==null)
			return "login.jsp";
	    Citizen c=(Citizen)session.getAttribute("citizen");
	    
	    
	    int currId=c.getAadhaar();
	    
	    PoReq p = new PoReq();
	    p.setcName(c.getName());
	    p.setStatus(false);
	    c.setApplyStatus(true);
	    p.setcId(currId);
	    poReRepo.save(p);
	    
		return "applyNow";
	}
	
	
	
	
	
	@RequestMapping("/acceptReq")
	public String acceptReq(String aadhaar,int id) {
		int a = Integer.parseInt(aadhaar);
		Citizen c = (Citizen)repo.findById(a).orElse(null);
		Politician p=new Politician();
		p.setAadhaar(c.getAadhaar());
		p.setAbout(c.getAbout());
		p.setCity(c.getCity());
		p.setCountry(c.getCountry());
		p.setDistrict(c.getDistrict());
		p.setEmail(c.getEmail());
		p.setFacebook(c.getFacebook());
		p.setInstagram(c.getInstagram());
		p.setLinkedin(c.getLinkedin());
		p.setName(c.getName());
		p.setState(c.getState());
		p.setUsername(c.getUsername());
		p.setTwitter(c.getState());
		c.setPo(true);
		poRepo.save(p);
		PoReq pr=poReRepo.findById(id).orElse(null);
		pr.setStatus(true);
		poReRepo.save(pr);
		return "viewPoReq";
	}
	
	@RequestMapping("/declineReq")
	public String declineReq()
	{
		
		return "viewPoReq.jsp";
	}
	
	
	
	@RequestMapping("/adminNotification")
	public String notification(){
		return "adminNotification.jsp";
	}
	
	


	@RequestMapping("/notify")
	public ModelAndView notify(@RequestParam("message")String message){
		ModelAndView model = new ModelAndView();
		Notifications n = new Notifications();
		n.setMessage(message);
		nRepo.save(n);
		model.addObject("message"," Sent Message");
		model.setViewName("adminNotification");
		return model;
	}
	
	
	@RequestMapping("/search")
	  public ModelAndView search(String s) {
	    List<Integer> c = repo.search(s);
	    List<Citizen> citi=new ArrayList<Citizen>();
    	for(int i=0;i<c.size();i++)
    	{
    		Citizen ci=(Citizen)repo.findById(c.get(i)).orElse(null);
    		citi.add(ci);
    	}
	    ModelAndView mv = new ModelAndView("search.jsp");
	    mv.addObject("result", citi);
	    return mv;
	  }
	
	@RequestMapping("/viewPoReq")
	public ModelAndView viewPoReq() {
		ArrayList<PoReq> poReq = (ArrayList<PoReq>) poReRepo.findAll();
		ArrayList<PoReq> po=new ArrayList<PoReq>();
		for(int i=0;i<poReq.size();i++)
		{
			if(!poReq.get(i).isStatus())
			{
				po.add(poReq.get(i));
			}
		}
		ModelAndView model = new ModelAndView("viewPoReq.jsp");
		model.addObject("po", po);
		model.setViewName("viewPoReq.jsp");
		return model;
		
	}
	
	@RequestMapping("/adminContact")
	public ModelAndView adminContact() {
		ArrayList<Message> m = (ArrayList<Message>) mrepo.findAll();
		Collections.sort(m, new MessageComparator());

		System.out.println(m.size());
		ModelAndView model = new ModelAndView("adminContact.jsp");
		model.addObject("m", m);
		model.setViewName("adminContact.jsp");
		return model;
		
	}
	
	
	
	
	class NotificationComparator implements Comparator<Notifications> {
	    // override the compare() method
	    public int compare(Notifications l1, Notifications l2)
	    {
	        if (l1.getNot_id()== l2.getNot_id()) {
	            return 0;
	        }
	        else if (l1.getNot_id() < l2.getNot_id()) {
	            return 1;
	        }
	        else {
	            return -1;
	        }
	    }
	}
	
	class MessageComparator implements Comparator<Message> {
	    // override the compare() method
	    public int compare(Message l1, Message l2)
	    {
	        if (l1.getId()== l2.getId()) {
	            return 0;
	        }
	        else if (l1.getId() < l2.getId()) {
	            return 1;
	        }
	        else {
	            return -1;
	        }
	    }
	}
	
	class QuestionComparator implements Comparator<Questions> {
	    // override the compare() method
	    public int compare(Questions l1, Questions l2)
	    {
	        if (l1.getId()== l2.getId()) {
	            return 0;
	        }
	        else if (l1.getId() < l2.getId()) {
	            return 1;
	        }
	        else {
	            return -1;
	        }
	    }
	}
	
	@RequestMapping("/show_all")
	public ModelAndView show(ModelAndView mv) {
		
		mv.setViewName("show_all.jsp");
		List<Notifications> no =(List<Notifications>) nRepo.findAll();
		Collections.sort(no, new NotificationComparator());
		mv.addObject("no", no);
		return mv;
	}
	
	class CorruptionComparator implements Comparator<CorruptionPosts> {
	    // override the compare() method
	    public int compare(CorruptionPosts l1, CorruptionPosts l2)
	    {
	        if (l1.getPost_id()== l2.getPost_id()) {
	            return 0;
	        }
	        else if (l1.getPost_id() < l2.getPost_id()) {
	            return 1;
	        }
	        else {
	            return -1;
	        }
	    }
	}
	
	@RequestMapping("/corruption")
	public  ModelAndView corruption(ModelAndView mv){
		
		mv.setViewName("corruption.jsp");
		List<CorruptionPosts> no =(List<CorruptionPosts>) cprepo.findAll();
		Collections.sort(no, new CorruptionComparator());
		mv.addObject("cpost", no);
		return mv;
	}
	
	@RequestMapping("/adminHelp")
	public ModelAndView adminHelp(ModelAndView mv)
	{
		mv.setViewName("adminHelp.jsp");
		List<Questions> qa =(List<Questions>) qrepo.findAll();
		Collections.sort(qa, new QuestionComparator());
		mv.addObject("qa", qa);
		return mv;
	}
	
//	@RequestMapping("/accept/{id}")
//	public void accept(@RequestParam("id") int aa){
//		Citizen c =(Citizen) repo.findById(aa).orElse(null);
//		c.setIsPo(true);
//		
//	}
}
