Action1()
{
	/* Itinerary */
	
	//���� 1-��� ������
	web_reg_save_param_ex(
    	"ParamName=TotalCost", 
    	"LB/IC=Total Charge: $ ", 				//����������� �����
    	"RB/IC= <BR/>",							//����������� ������
    	"Ordinal=1", 							//����� �������� �����
	LAST); 
	
	//����� ������� 1�� ������
	web_reg_find("Text=A First class ticket for",
	             "SaveCount=FirstCount",
	             LAST);

	web_url("Itinerary Button", 
		"URL={Host}/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={Host}/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}