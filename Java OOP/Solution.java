import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution
{

 public static void main(String[] args)
 {
Scanner sc = new Scanner(System.in);
    NavalVessel[] ac = new NavalVessel[4];
    int vesselId, noOfVoyagesPlanned,noOfVoyagesCompleted;
    String vesselName, purpose, classification="";
  for(int i=0;i<ac.length;i++){
   vesselId= sc.nextInt();sc.nextLine();
    vesselName= sc.nextLine();
noOfVoyagesPlanned=sc.nextInt();
noOfVoyagesCompleted=sc.nextInt();sc.nextLine();
     purpose=sc.nextLine();
    ac[i] = new NavalVessel(vesselId, vesselName, noOfVoyagesPlanned, noOfVoyagesCompleted, purpose, classification);
    int anss= (ac[i].getNoOfVoyagesCompleted()*100)/ac[i].getNoOfVoyagesPlanned();
    if(anss==100)
    ac[i].setClassification("Star");
    else if(anss>=80 && anss<=99)
    ac[i].setClassification("Leader");
else if(anss>=55 && anss<=79)
ac[i].setClassification("Inspirer");
else {
    ac[i].setClassification("Striver");

}
  }
  int a = sc.nextInt();sc.nextLine();
  String b = sc.nextLine();
  int ans = findAvgVoyagesByPct(ac,a);
  if(ans==0)
  System.out.println("There are no voyages completed with this percentage");
  else
   System.out.println(ans);
   NavalVessel aba = findVesselByGrade(ac, b);
   if(aba==null){
    System.out.println("No Naval Vessel is available with the specified purpose");   
   }
   else{
      
System.out.println(aba.getVesselName()+'%'+aba.getClassification());
   }

 }

 public static int findAvgVoyagesByPct(NavalVessel[] nvArray, int percentage)
  {
      int count=0;
      int sum=0;
   for(int i=0;i<nvArray.length;i++){
       if((nvArray[i].getNoOfVoyagesCompleted()*100)/nvArray[i].getNoOfVoyagesPlanned()>=percentage){
           count++;
           sum+=nvArray[i].getNoOfVoyagesCompleted();
       }
   }
   if(count==0)
   return 0;

   return sum/count;

  }

public static NavalVessel findVesselByGrade(NavalVessel[] nvArray, String purpose)
  {
   for(int i=0;i<nvArray.length;i++){
       if(nvArray[i].getPurpose().toUpperCase().compareTo(purpose.toUpperCase())==0)
       return nvArray[i];
   }
   return null;
  }
}

class NavalVessel {
    private int vesselId;
    private String vesselName;
    private int noOfVoyagesPlanned;
    private int noOfVoyagesCompleted;
    private String purpose;
    private String classification;

    public NavalVessel(int vesselId, String vesselName, int noOfVoyagesPlanned, int noOfVoyagesCompleted,
            String purpose, String classification) {
        this.vesselId = vesselId;
        this.vesselName = vesselName;
        this.noOfVoyagesPlanned = noOfVoyagesPlanned;
        this.noOfVoyagesCompleted = noOfVoyagesCompleted;
        this.purpose = purpose;
        this.classification = classification;
    }

    public int getVesselId() {
        return vesselId;
    }

    public void setVesselId(int vesselId) {
        this.vesselId = vesselId;
    }

    public String getVesselName() {
        return vesselName;
    }

    public void setVesselName(String vesselName) {
        this.vesselName = vesselName;
    }

    public int getNoOfVoyagesPlanned() {
        return noOfVoyagesPlanned;
    }

    public void setNoOfVoyagesPlanned(int noOfVoyagesPlanned) {
        this.noOfVoyagesPlanned = noOfVoyagesPlanned;
    }

    public int getNoOfVoyagesCompleted() {
        return noOfVoyagesCompleted;
    }

    public void setNoOfVoyagesCompleted(int noOfVoyagesCompleted) {
        this.noOfVoyagesCompleted = noOfVoyagesCompleted;
    }

    public String getPurpose() {
        return purpose;
    }

    public void setPurpose(String purpose) {
        this.purpose = purpose;
    }

    public String getClassification() {
        return classification;
    }

    public void setClassification(String classification) {
        this.classification = classification;
    }
    
}