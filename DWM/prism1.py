#dependencies - cell 1
import spacy
import re
from spacy import displacy
nlp = spacy.load('en_core_web_sm')
import pyttsx3
engine = pyttsx3.init()
voices=engine.getProperty('voices')
engine.setProperty('voice',voices[1].id)

import speech_recognition as sr

from spacy.matcher import Matcher 
from spacy.tokens import Span 

nlp = spacy.load("en_core_web_sm")
from spacy.lang.en import English
import kivy
from kivy.app import App
from kivy.uix.label import Label
from kivy.uix.gridlayout import GridLayout
from kivy.uix.textinput import TextInput
from kivy.uix.button import Button

""" APP DEVELOPMENT BASIC
class SpartanGrid(GridLayout):
    def __init__(self,**kwargs):
        super(SpartanGrid, self).__init__()
        self.cols=2
        self.add_widget(Label(text="Student Name:"))
        self.s_name=TextInput()
        self.add_widget(self.s_name)

        self.add_widget(Label(text="Student Marks:"))
        self.s_marks = TextInput()
        self.add_widget(self.s_marks)

        self.press=Button(text="Click me")
        self.press.bind(on_press=self.click_me)
        self.add_widget(self.press)
    def click_me(self, instance):
        print("Name of the student is "+self.s_name.text)
        print("Marks of the student is " + self.s_marks.text)

class SpartanApp(App) :
    def build(self):

        return SpartanGrid()


if __name__ == "__main__":
    SpartanApp().run()
"""
#PROGRAM CODE - cell 2
doc = nlp("my rental car is a red Toyota Camry with Florida license plate EE379Q")

for tok in doc:
  print(tok.text, "...", tok.dep_)

#cell 3
class Node:
    id=0
    text=""
    relation={}
    count=0
    relation1={}
    def __init__(self,id,text):
        self.text=text
        self.id=id
        self.relation={}
        self.count=0
    def addRelation(self,orgNode,root,objid,objNode):
        self.relation[self.count]=[orgNode,root,objid,objNode]
        self.count=self.count+1
    def printRelations(self):
        for t in range(self.count):
            print(self.relation[t])

#cell 4
class Node:
    id=0
    text=""
    relation={}
    count=0
    relation1={}
    def __init__(self,id,text):
        self.text=text
        self.id=id
        self.relation={}
        self.count=0
    def addRelation(self,orgNode,root,objid,objNode):
        self.relation[self.count]=[orgNode,root,objid,objNode]
        self.count=self.count+1
    def printRelations(self):
        for t in range(self.count):
            print(self.relation[t])
    
#cell 5
class processor:
    nodes={}
    totalcount=0
    
    
    def returnKeyElements(self,text):
        s=[]
        t=[]
        dont_s=["who","where","what","why","how","when","whom","while","which","you","me","him","he","she","her"]
        boolRoot=True
        doc=nlp(text)
        #print("Hii")
        for tok in doc:
            #print(tok.text,".....",s," ,,,, ",t)
            
            if boolRoot:
                
                if (("attr" in tok.dep_) or ("mod" in tok.dep_)  or ("comp" in tok.dep_) or ("rel" in tok.dep_) or ("poss" in tok.dep_) or
                   ("obj" in tok.dep_) or ("sub" in tok.dep_)):
                    if tok.text.lower() in dont_s:
                        continue
                    s.append(tok.text.strip().lower())
                elif ("ROOT" in tok.dep_):
                    boolRoot=False
            else:
                if (("attr" in tok.dep_) or ("mod" in tok.dep_)  or ("comp" in tok.dep_) or ("rel" in tok.dep_) or ("poss" in tok.dep_) or
                   ("obj" in tok.dep_) or ("sub" in tok.dep_) or ("ROOT" in tok.dep_)):
                    if tok.text.lower() in dont_s:
                        continue
                    t.append(tok.text.strip().lower())
        a={}
        a[0]=s
        a[1]=t
        #print(a)
        return a
    
    def get_question_elements(self,text):
        dont_s=["who","where","what","why","how","when","whom","while","which","you","me","him","he","she","her","is"]
        doc=nlp(text)
        result=[]
        for tok in doc:
            if tok.text.lower() in dont_s:
                continue
            if ("subj" in tok.dep_ or "obj" in tok.dep_ or "attr" in tok.dep_ or "comp" in tok.dep_ or "ROOT" in tok.dep_ or "cl" in tok.dep_):
                result.append(tok.text.strip())
        return result

    def fun1(self):
        engine.say("Okay then ask me a question")
        engine.runAndWait()
        text=self.listen1()
        print(text)
        if text!=-1:
            print(text)
        else:
            engine.say("Cannot Understand")
            engine.runAndWait()
            return 
        e=self.get_question_elements(text)
        result=set()
        for i in range(self.totalcount):
            x=self.nodes[i]
            relation=x.relation
            count=x.count
            a=False
            for j in range(count):
                y=relation[j]
                text1=y[0].strip()+" "+y[1].strip()+" "+y[3].strip()
                b=True
                for k in e:
                    if re.search(k,text1,flags=re.IGNORECASE):
                        continue
                    else:
                        b=False
                if b:
                    result.add(text1)
                    a=True
                    break
            if a:
                break
        print(result)
        engine.say(result)
        engine.runAndWait()
                
                
        
    
    
    def get_entities1(self,text):
        part1=""
        part2=""
        add=""
        doc=nlp(text)
        for tok in doc:
            if("ROOT" in tok.dep_):
                break
            add+=tok.text.strip()+" "
        boolea=True
        part2=add
        #print(part2)
        for tok in doc:
            if boolea:
                if "cc" in tok.dep_:
                    boolea=False
                    continue
                part1+=tok.text.strip()+" "
            else:
                if "he" in tok.text:
                    continue
                part2+=tok.text.strip()+" "
        return [part1,part2]

    def get_entities2(self,text):
        part1=""
        part2=""
        doc=nlp(text)
        boolea=True
        for tok in doc:
            if boolea:
                if "ROOT" in tok.dep_:
                    boolea=False
                    continue
                part1+=tok.text.strip()+" "
            else:
                part2+=tok.text.strip()+" "
        return [part1,part2]
    
    def listen1(self):
        r = sr.Recognizer()

        with sr.Microphone() as source:
            print("Talk")
            audio_text = r.listen(source)
            print("Time over, thanks")
            text=""
            try:
                # using google speech recognition
                text=r.recognize_google(audio_text)
                print(text)
                return text
            except:
                return -1

    def checkcc(self,text):
        doc=nlp(text)
        for tok in doc:
            if "cc" in tok.dep_:
                return True
        return False
    
    def fun(self):
        engine.say("Welcome to Bixby Diary  ")
        engine.runAndWait()
        engine.say("Okay Now tell me what to remember    ")
        engine.runAndWait()
        text=self.listen1()
        if text!=-1:
            engine.say("Got It")
            engine.runAndWait()
            print(text)
        else:
            engine.say("Cannot Understand")
            engine.runAndWait()
            return 
        if self.checkcc(text):
            e=self.get_entities1(text)
            self.get_entities(e[0])
            self.get_entities(e[1])
        else:
            self.get_entities(text)
            
    
    def get_entities(self,text):
        doc=nlp(text)
        #subj,obj,comp,attr,mod,poss check array
        a=[0,0,0,0,0,0]
        a1=["","","","","",""]
        b=[0,0,0,0,0,0]
        b1=["","","","","",""]
        boolRoot=True
        rootValue=""
        for tok in doc:
            if boolRoot:
                if "ROOT" in tok.dep_:
                    rootValue=tok.text.strip()
                    boolRoot=False
                    continue
                if "sub" in tok.dep_:
                    a[0]=1
                    a1[0]+=tok.text.strip()+" "
                elif "obj" in tok.dep_:
                    a[1]=1
                    a1[1]+=tok.text.strip()+" "
                elif "comp" in tok.dep_:
                    a[2]=1
                    a1[2]+=tok.text.strip()+" "
                elif "mod" in tok.dep_:
                    a[4]=1
                    a1[4]+=tok.text.strip()+" "
                elif "attr" in tok.dep_:
                    a[3]=1
                    a1[3]+=tok.text.strip()+" "
                elif "poss" in tok.dep_:
                    a[5]=1
                    a1[5]+=tok.text.strip()+" "
            else:
                if "sub" in tok.dep_:
                    b[0]=1
                    b1[0]+=tok.text.strip()+" "
                elif "obj" in tok.dep_:
                    b[1]=1
                    b1[1]+=tok.text.strip()+" "
                elif "comp" in tok.dep_:
                    b[2]=1
                    b1[2]+=tok.text.strip()+" "
                elif "mod" in tok.dep_:
                    b[4]=1
                    b1[4]+=tok.text.strip()+" "
                elif "attr" in tok.dep_:
                    b[3]=1
                    b1[3]+=tok.text.strip()+" "
                elif "poss" in tok.dep_:
                    b[5]=1
                    b1[5]+=tok.text.strip()+" "
        e=self.get_entities2(text)        
        Node1Text=""
        Node1Id=self.totalcount
        temp=self.totalcount
        self.totalcount+=1
        Node2Text=""
        Node2Id=self.totalcount
        self.totalcount+=1
        Node1in2=False
        Node2in2=False
        if a[0]==1 and a[1]==1:
            Node1in2=True
        if b[0]==1 and b[1]==1:
            Node2in2=True
        for i in range(6):
            if a[i]!=0:
                Node1Text=a1[i]
                break
        for i in range(6):
            if b[i]!=0:
                Node2Text=b1[i]
                break
        subcheckThere=False
        objcheckThere=False
        Node1=Node(Node1Id,Node1Text)
        Node2=Node(Node2Id,Node2Text)
        self.nodes[Node1Id]=Node1
        self.nodes[Node2Id]=Node2
        Node1.addRelation(e[0],rootValue,Node2Id,e[1])
        Node2.addRelation(e[1],rootValue,Node1Id,e[0])
        for i in range(temp):
            x=self.nodes[i]
            count=x.count
            relation=x.relation
            for j in range(count):
                y=relation[j]
                p=True
                q=True
                objId=y[2]
                text1=y[0].strip()+" "+y[1].strip()+" "+y[3].strip()
                #print(text1,"   ",text)
                t=self.returnKeyElements(text1)
                s=self.returnKeyElements(text)
                t=t[0]
                
                t1=" "
                for elem in t:
                    t1+=elem.strip()+" "
                s=s[0]
                s1=" "
                
                for elem in s:
                    s1+=elem.strip()+" "
                
                for n in t:
                    n=" "+n.strip()+" "
                    if n in s1:
                        continue
                    else:
                        p=False
                        break
                for m in s:
                    #print(m," ",t1)
                    m=" "+m.strip()+" "
                    if m in t1:
                        #print("huu")
                        continue
                    else:
                        q=False
                        break
                #print(t,",,,,,,,",s," ",t1,".....",s1)
                #print(p," ",q)
                if p==True:
                    temp4=""
                    temp5=e[1]
                    rootV=rootValue
                    r=0
                    for z in e[0].split(" "):
                        if re.search(z, t1, flags=re.IGNORECASE) and r==0:
                            temp4+=y[3].strip()+" "
                            r=1
                            continue
                        if re.search(z, t1, flags=re.IGNORECASE):
                            continue
                        temp4+=z.strip()+" "
                    #print(temp4," ",rootV," ",temp5)
                    Node1.addRelation(temp4,rootV,Node2Id,e[1])
                    Node2.addRelation(e[1],rootV,Node1Id,temp4)
                elif q==True:
                    temp4=""
                    temp5=y[3].strip()
                    rootV=y[1].strip()
                    r=0
                    for z in y[0].split(" "):
                        if re.search(z, s1, flags=re.IGNORECASE) and r==0:
                            temp4+=e[1].strip()+" "
                            r=1
                            continue
                        if re.search(z, s1, flags=re.IGNORECASE):
                            continue
                        temp4+=z.strip()+" "
                    #print(temp4," ",rootV," ",temp5)
                    x.addRelation(temp4,rootV,objId,temp5)
                    self.nodes[objId].addRelation(temp5,rootV,i,temp4)

#cell 6
x=processor()
#cell 7
x.fun()
#cell 8
x.fun()
#cell 9
x.fun1()
#cell 10
nodes=x.nodes
totalcount=x.totalcount
for i in range(totalcount):
    print(nodes[i].text,"  nnn  ")
    nodes[i].printRelations()
#cell 11
x.fun()
#cell 12
x.fun("my wife's maternal uncle contact number is 425355")
#cell 13
x.fun1("What is Mr.Sim contact number")
#cell 14
x.get_question_elements("I put my passport in the bottom drawer of my filing cabinet")
#cell 15
x.fun("my spare keys are in the kitchen cabinet")
#cell 16
x.fun1("Where are my spare keys")
#cell 17
x.fun("I put my passport in the bottom drawer of my filing cabinet.")
#cell 18
x.fun1("where is my passport")
#cell 19
x.get_question_elements("Where is my passport")
#cell 20
x.fun("Alex has my wallet")
#cell 21
x.fun1("Where is my wallet")
#cell 22
x.fun("my password is money")
#cell 23
x.fun1("What is my password")
#cell 24
x.fun("my citibank password is 424243")
#cell 25
x.fun1("What is my password")
#cell 26
x.fun1("What is my citibank password")
#cell 27
x.fun1("What is my statebank password")
#cell 28
x.fun("I watered the hermit crabs this morning")
#cell 29
x.fun1("When did I watered the crabs")
#cell 30
x.fun("the office Wi-Fi password is 'FreshProsciutto7'")
#cell 31
x.fun1("What is my office Wi-Fi password")