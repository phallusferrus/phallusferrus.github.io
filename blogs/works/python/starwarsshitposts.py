

preamble = "Until this BATTLESTATION is fully operation we are vulnerable. THEREBELALLIANCE is too WELLEQUIPEED. THEY'RE more dangerous than you realize.\n>Dangerous to your STARFLEET commander not to this BATTLESTATION.\nTHEREBELALLIANCE will continue to gain SUPPORT in THEIMPERIALSENATE as long as\n>THEIMPERIALSENATE will no longer be of any concern to us. I have just recieved word that THEEMPEROR HAS/HAVE dissolved the COUNCIL permanently. The last remnants of THEOLDREPUBLIC have been swept away.\nBut thats impossible! How will THEEMPEROR maintain control without THEBEAUROCRACY?\n>THEREGIONALGOVENORS now HASHAVE2 direct control over THEIRTERRITORIES. Fear will keep THELOCALSYSTEMS in line. Fear of this BATTLESTATION.\nAnd what of THEREBELALLIANCE? If THEOLDREPUBLIC HAS\HAVE3 a complete TECHNICALREADOUT of this BATTLESTATION it possible however unlikely that HE/SHE/IT/THEY might find a weakness and exploit it.\n>The TECHNICALREADOUT you refer to will soon be back in our hands.\nAny ATTACK made by THEREBELALLIANCE would be a useless gesture. No matter what TECHINICALREADOUTS HEHAS/SHE/IT/THEYHAVEPASTTENSE obtained. This BATTLESTATION is now the ultimate power in the universe. I suggest we USE it.\n>Don't be too proud of this TECHNOLOGICALTERROR you've constructed. The ability to DESTROYAPLANET is insignificant next to the power of THEFORCE.\nDon't try and frighten us with your SOURCERSWAYS LORDVADER. Your sad devotion to that ANCIENRELIGION has not helped you conjure up THESTOLENDATATAPES or given you CLAIRVOYANCE enough to find THEREBELALLIANCES HIDDENFORTRESS-\n>I find your LACKOFFAITH disturbing."

print(preamble)











battlestation = input("\nBATTLESTATION  :")
therebelalliance = input("\nTHEREBELALLIANCE:")
ISARE = input("\n IS / ARE  :")
wellequipped = input("\nWELLEQUIPPED    :")
theyre = input("\nTHEY\"RE  :")
STARFLEET = input("\nSTARFLEET  :")
SUPPORT = input("\nSUPPORT  :")
theimperialsenate = input("\nTHEIMPERIALSENATE   :")
theemperor = input("\nTHEEMPEROR    :")
HASHAVE = input("\ Has \ Have  :")
THECOUNCIL = input("\nTHECOUNCIL    :")
THEOLDREPUBLIC = input("\nTHEOLDREPUBLIC    :")
thebeaurocracy = input("\nTHEBEAUROCRACY    :")
thegovs = input("\nTHEREGIONALGOVENORS   :")
HASHAVE2 = input("\n HAS \ HAVE :")
THEIRTERRITORIES = input("\nTHEIRTERRITORIES    :")
thelocalsystems = input("\nTHELOCALSYSTEM    :")
THEREBELS = input("\nTHEREBELS      :")
HASHAVE3 = input("\nHAS / HAVE  :")
tech = input("\nTECHNICALREADOUT   :")
HESHEITTHEY = input("\nHE \ SHE \ IT \ THEY   :")
ATTACK = input("ATTACK  :")
TECHNICALREADOUTS = input("\nPLURAL TECHNICALREADOUT    :")
THEYVE = input("THEY'VE or They have ,in reference to THEREBELS,  :")
use = input("USE    :")
TECHNOLOGICALTERROR = input("\nTECHNOLOGICALTERROR  :")
dest = input("\nDESTROYAPLANET  :")
force = input("\nTHEFORCE   :")
sorc = input("\nSORCERORSWAYS   :")
lv = input("\nLORDVADER     :")
anciem = input("\nANCIENTRELIGION   :")
data = input("\nTHESTOLENDATATAPES  :")
CLAIR = input("\nCLAIRVOYANCE   :")
TREBS = input("\nGENITIVUSREBELI   :")
hidf = input("\nHIDDENFORTRESS  :")
lof = input("\nLACKOFFAITH  :")

battlestation = battlestation.upper()
therebelalliance =  therebelalliance.upper()
wellequipped = wellequipped.upper()
theyre = theyre.capitalize()
STARFLEET = STARFLEET.upper()
SUPPORT = SUPPORT.upper()
theimperialsenate=theimperialsenate.upper()
THEIMPERIALSENATE = theimperialsenate
theemperor = theemperor.upper()
THEEMPEROR = theemperor
THECOUNCIL = THECOUNCIL.upper()
THEOLDREPUBLIC = THEOLDREPUBLIC.upper()
thebeaurocracy = thebeaurocracy.upper()
THEBEAUROCRACY = thebeaurocracy
thegovs = thegovs.upper()
THEREGIONALGOVENORS = thegovs
THEIRTERRITORIES = THEIRTERRITORIES.upper()
thelocalsystems = thelocalsystems.upper()
THELOCALSYSTEMS = thelocalsystems
THEREBELS = THEREBELS.upper()
tech = tech.upper()
TECHNICALREADOUT = tech
ATTACK = ATTACK.upper()
TECHNICALREADOUTS = TECHNICALREADOUTS.upper()
use = use.upper()
TECHNOLOGICALTERROR = TECHNOLOGICALTERROR.upper()
DESTROYAPLANET = dest.upper()
THEFORCE = force.upper()
SOURCERSWAYS = sorc.upper()
LORDVADER = lv.upper()
ANCIENTRELIGION = anciem.upper()
THESTOLENDATATAPES = data.upper()
CLAIR = CLAIR.upper()
TREBS = TREBS.upper()
HIDDENFORTRESS = hidf.upper()
LACKOFFAITH = lof.upper()


worker = ("Until this "+battlestation+" is fully operational we are vulnerable. "+therebelalliance+" "+ISARE+" too "+wellequipped+". "+theyre+" more dangerous than you realize.\n>Dangerous to your "+STARFLEET+" commander not to this "+battlestation+".\n"+therebelalliance+" will continue to gain "+SUPPORT+" in "+THEIMPERIALSENATE+" as long as\n>"+THEIMPERIALSENATE+" will no longer be of any concern to us. I have just recieved word that "+THEEMPEROR+" "+HASHAVE+" dissolved "+THECOUNCIL+" permanently. The last remnants of "+THEOLDREPUBLIC+" have been swept away.\nBut thats impossible! How will "+THEEMPEROR+" maintain control without "+THEBEAUROCRACY+"?\n>"+THEREGIONALGOVENORS+" now "+HASHAVE2+" direct control over "+THEIRTERRITORIES+". Fear will keep "+THELOCALSYSTEMS+" in line. Fear of this "+battlestation+".\nAnd what of "+therebelalliance+"? If "+THEREBELS+" "+HASHAVE3+" a complete "+TECHNICALREADOUT+" of this "+battlestation+" it is possible however unlikely that "+HESHEITTHEY+" might find a weakness and exploit it.\n>The "+TECHNICALREADOUT+" you refer to will soon be back in our hands.\nAny "+ATTACK+" made by "+THEREBELS+" against this "+battlestation+" would be a useless gesture no matter what "+TECHNICALREADOUTS+" "+THEYVE+" obtained. This "+battlestation+" is now the ultimate power in the universe. I suggest we "+use+" it.\n>Don't be too proud of this "+TECHNOLOGICALTERROR+" you've constructed. The ability to "+DESTROYAPLANET+" is insignificant next to the power of "+THEFORCE+".\nDon't try and frighten us with your "+SOURCERSWAYS+" "+LORDVADER+". Your sad devotion to that "+ANCIENTRELIGION+" has not helped you conjure up "+THESTOLENDATATAPES+" or given you "+CLAIR+" enough to find "+TREBS+" "+HIDDENFORTRESS+"\n>I find your "+LACKOFFAITH+" disturbing.")

print(worker)
