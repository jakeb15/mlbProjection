#include "stdafx.h"
#include <iostream>
#include <string>
#include "Pitcher.h"	

Pitcher::Pitcher(){
	 
	name = "";
	team = "";
	gamesPlayed = 0;
	gamesStarted = 0;
	Tot_innings = 0;
	wins = 0;
	loses = 0;
	saves = 0;
	Tot_innings = 0;
	Kper9 = 0;
	BBper9 = 0;
	HRper9 = 0;
	BABIP = 0;
	LOB = 0;
	GB = 0;
	HRFB = 0;
	ERA = 0;
	FIP = 0;
	XFIP = 0;
	WAR = 0;
	projection = 0;
	Kprojection = 0;
	OBP_Projection= 0;
	OPS_Projections= 0;
	WOBA_Projection= 0;
	gbPercent = 0;
	fbPercent = 0;
	PitchingHand = "";
	KpBB = 0;
}

void Pitcher::setName(string x){
	name = x;
}
	
void Pitcher::setTeam(string x){
	team = x;
}

void Pitcher::setGamesPlayed(int x){
	gamesPlayed = x;
}

void Pitcher::setGameStarted(int x){
	gamesStarted = x; 
}

void Pitcher::setTotInnings(float x){
	Tot_innings = x;
}

string Pitcher::getName(){
	return name;
}

string Pitcher::getTeam(){
	return team;
}
	
int Pitcher::getGamesPlayed(){
	return gamesPlayed;
}
	
int Pitcher::getGamesStarted(){
	return gamesStarted;
}
float Pitcher::getTotInnings(){
	return Tot_innings;
}

void Pitcher::setWins(float x){
	wins = x;
}

void Pitcher::setLoses(float x){
	loses = x;
}
void Pitcher::setSaves(float x){
	saves = x;
}
void Pitcher::setKper9(float x){
	Kper9 = x;
}
void Pitcher::setBBper9(float x){
	BBper9 = x;
}
void Pitcher::setHRper9(float x){
	HRper9 = x;
}
void Pitcher::setBABIP(float x){
	BABIP = x;
}
void Pitcher::setLOBpercent(float x){
	LOB = x;
}
void Pitcher::setGBpercent(float x){
	GB = x;
}
void Pitcher::setHRlFB(float x){
	HRFB = x;
}
void Pitcher::setERA(float x){
	ERA = x;
}
void Pitcher::setFIP(float x){
	FIP = x;
}
void Pitcher::setXFIP(float x){
	XFIP = x;
}
void Pitcher::setWAR(float x){
	WAR = x;
}
float Pitcher::getWins(){
	return wins;
}
float Pitcher::getLoses(){
	return loses;
}
float Pitcher::getSaves(){
	return saves;
}
float Pitcher::getKper9(){
	return Kper9;
}
float Pitcher::getBBper9(){
	return BBper9;
}
float Pitcher::getHRper9(){
	return HRper9;
}
float Pitcher::getBABIP(){
	return BABIP;
}
float Pitcher::getLOBpercent(){
	return LOB;
}
float Pitcher::getGBpercent(){
	return GB;
}
float Pitcher::getHRlFB(){
	return HRFB;
}
float Pitcher::getERA(){
	return ERA;
}
float Pitcher::getFIP(){
	return FIP;
}
float Pitcher::getXFIP(){
	return XFIP;
}
float Pitcher::getWAR(){
	return WAR;
}

int Pitcher::getProjection(){
	return projection;
}
	
int Pitcher::getKprojection(){
	return Kprojection;
}
void Pitcher::setProjection(int x){
	projection = x;
}
void Pitcher::setKprojection(int x){
	Kprojection = x;
}

void Pitcher::set_OBP_Projection(int x){
	OBP_Projection = x;
}
void Pitcher::set_OPS_Projection(int x){
	OPS_Projections = x;
}
void Pitcher::set_WOBA_Projection(int x){
	WOBA_Projection = x;
}
int Pitcher::get_OBP_Projection(){
	return OBP_Projection;
}
int Pitcher::get_OPS_Projection(){
	return OPS_Projections;
}
int Pitcher::get_WOBA_Projection(){
	return WOBA_Projection;
}
void Pitcher::set_gbPercent(float x){
	gbPercent = x;
}

float Pitcher::get_gbPercent(){
	return gbPercent;
}
void Pitcher::set_fbPercent(float x){
	fbPercent = x;
}
float Pitcher::get_fbPercent(){
	return fbPercent;
}
void Pitcher::setPitchingHand(string x){
	PitchingHand = x;
}
string Pitcher::getPitchingHand(){
	return PitchingHand;
}

void Pitcher::set_KpBB(float x){
	KpBB = x;
}
float Pitcher::get_KpBB(){
	return KpBB;
}