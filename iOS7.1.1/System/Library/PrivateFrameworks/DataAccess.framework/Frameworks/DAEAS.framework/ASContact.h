/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASChangedCollectionLeaf.h>
#import <DAEAS/DADataElement.h>

@class NSDate, NSString, NSArray;

@interface ASContact : ASChangedCollectionLeaf <DADataElement> {

	void* _abRecord;
	NSDate* _anniversary;
	NSString* _assistantName;
	NSString* _assistantTelephoneNumber;
	NSDate* _birthday;
	NSString* _body;
	int _bodySize;
	bool _bodyTruncated;
	NSString* _business2TelephoneNumber;
	NSString* _businessAddressCity;
	NSString* _businessAddressCountry;
	NSString* _businessAddressPostalCode;
	NSString* _businessAddressState;
	NSString* _businessAddressStreet;
	NSString* _businessFaxNumber;
	NSString* _businessTelephoneNumber;
	NSString* _carTelephoneNumber;
	NSArray* _categories;
	NSArray* _children;
	NSString* _companyName;
	NSString* _department;
	NSString* _email1Address;
	NSString* _email2Address;
	NSString* _email3Address;
	NSString* _fileAs;
	NSString* _firstName;
	NSString* _home2TelephoneNumber;
	NSString* _homeAddressCity;
	NSString* _homeAddressCountry;
	NSString* _homeAddressPostalCode;
	NSString* _homeAddressState;
	NSString* _homeAddressStreet;
	NSString* _homeFaxNumber;
	NSString* _homeTelephoneNumber;
	NSString* _jobTitle;
	NSString* _lastName;
	NSString* _middleName;
	NSString* _mobileTelephoneNumber;
	NSString* _officeLocation;
	NSString* _otherAddressCity;
	NSString* _otherAddressCountry;
	NSString* _otherAddressPostalCode;
	NSString* _otherAddressState;
	NSString* _otherAddressStreet;
	NSString* _pagerNumber;
	NSString* _picture;
	NSString* _radioTelephoneNumber;
	NSString* _spouse;
	NSString* _suffix;
	NSString* _title;
	NSString* _webpage;
	NSString* _yomiCompanyName;
	NSString* _yomiFirstName;
	NSString* _yomiLastName;
	NSString* _customerID;
	NSString* _governmentID;
	NSString* _im1Address;
	NSString* _im2Address;
	NSString* _im3Address;
	NSString* _managerName;
	NSString* _companyMainPhone;
	NSString* _accountName;
	NSString* _nickName;
	NSString* _mms;
	int _fileAsAutoConstruction;

}

@property (retain) NSDate * anniversary;                              //@synthesize anniversary=_anniversary - In the implementation block
@property (retain) NSString * assistantName;                          //@synthesize assistantName=_assistantName - In the implementation block
@property (retain) NSString * assistantTelephoneNumber;               //@synthesize assistantTelephoneNumber=_assistantTelephoneNumber - In the implementation block
@property (retain) NSDate * birthday;                                 //@synthesize birthday=_birthday - In the implementation block
@property (nonatomic,retain) NSString * body;                         //@synthesize body=_body - In the implementation block
@property (assign) int bodySize;                                      //@synthesize bodySize=_bodySize - In the implementation block
@property (assign) bool bodyTruncated;                                //@synthesize bodyTruncated=_bodyTruncated - In the implementation block
@property (retain) NSString * business2TelephoneNumber;               //@synthesize business2TelephoneNumber=_business2TelephoneNumber - In the implementation block
@property (retain) NSString * businessAddressCity;                    //@synthesize businessAddressCity=_businessAddressCity - In the implementation block
@property (retain) NSString * businessAddressCountry;                 //@synthesize businessAddressCountry=_businessAddressCountry - In the implementation block
@property (retain) NSString * businessAddressPostalCode;              //@synthesize businessAddressPostalCode=_businessAddressPostalCode - In the implementation block
@property (retain) NSString * businessAddressState;                   //@synthesize businessAddressState=_businessAddressState - In the implementation block
@property (retain) NSString * businessAddressStreet;                  //@synthesize businessAddressStreet=_businessAddressStreet - In the implementation block
@property (retain) NSString * businessFaxNumber;                      //@synthesize businessFaxNumber=_businessFaxNumber - In the implementation block
@property (retain) NSString * businessTelephoneNumber;                //@synthesize businessTelephoneNumber=_businessTelephoneNumber - In the implementation block
@property (retain) NSString * carTelephoneNumber;                     //@synthesize carTelephoneNumber=_carTelephoneNumber - In the implementation block
@property (retain) NSArray * categories;                              //@synthesize categories=_categories - In the implementation block
@property (retain) NSArray * children;                                //@synthesize children=_children - In the implementation block
@property (retain) NSString * companyName;                            //@synthesize companyName=_companyName - In the implementation block
@property (retain) NSString * department;                             //@synthesize department=_department - In the implementation block
@property (retain) NSString * email1Address;                          //@synthesize email1Address=_email1Address - In the implementation block
@property (retain) NSString * email2Address;                          //@synthesize email2Address=_email2Address - In the implementation block
@property (retain) NSString * email3Address;                          //@synthesize email3Address=_email3Address - In the implementation block
@property (retain) NSString * fileAs;                                 //@synthesize fileAs=_fileAs - In the implementation block
@property (retain) NSString * firstName;                              //@synthesize firstName=_firstName - In the implementation block
@property (retain) NSString * home2TelephoneNumber;                   //@synthesize home2TelephoneNumber=_home2TelephoneNumber - In the implementation block
@property (retain) NSString * homeAddressCity;                        //@synthesize homeAddressCity=_homeAddressCity - In the implementation block
@property (retain) NSString * homeAddressCountry;                     //@synthesize homeAddressCountry=_homeAddressCountry - In the implementation block
@property (retain) NSString * homeAddressPostalCode;                  //@synthesize homeAddressPostalCode=_homeAddressPostalCode - In the implementation block
@property (retain) NSString * homeAddressState;                       //@synthesize homeAddressState=_homeAddressState - In the implementation block
@property (retain) NSString * homeAddressStreet;                      //@synthesize homeAddressStreet=_homeAddressStreet - In the implementation block
@property (retain) NSString * homeTelephoneNumber;                    //@synthesize homeTelephoneNumber=_homeTelephoneNumber - In the implementation block
@property (retain) NSString * homeFaxNumber;                          //@synthesize homeFaxNumber=_homeFaxNumber - In the implementation block
@property (retain) NSString * jobTitle;                               //@synthesize jobTitle=_jobTitle - In the implementation block
@property (retain) NSString * lastName;                               //@synthesize lastName=_lastName - In the implementation block
@property (retain) NSString * middleName;                             //@synthesize middleName=_middleName - In the implementation block
@property (retain) NSString * mobileTelephoneNumber;                  //@synthesize mobileTelephoneNumber=_mobileTelephoneNumber - In the implementation block
@property (retain) NSString * officeLocation;                         //@synthesize officeLocation=_officeLocation - In the implementation block
@property (retain) NSString * otherAddressCity;                       //@synthesize otherAddressCity=_otherAddressCity - In the implementation block
@property (retain) NSString * otherAddressCountry;                    //@synthesize otherAddressCountry=_otherAddressCountry - In the implementation block
@property (retain) NSString * otherAddressPostalCode;                 //@synthesize otherAddressPostalCode=_otherAddressPostalCode - In the implementation block
@property (retain) NSString * otherAddressState;                      //@synthesize otherAddressState=_otherAddressState - In the implementation block
@property (retain) NSString * otherAddressStreet;                     //@synthesize otherAddressStreet=_otherAddressStreet - In the implementation block
@property (retain) NSString * pagerNumber;                            //@synthesize pagerNumber=_pagerNumber - In the implementation block
@property (retain) NSString * picture;                                //@synthesize picture=_picture - In the implementation block
@property (retain) NSString * radioTelephoneNumber;                   //@synthesize radioTelephoneNumber=_radioTelephoneNumber - In the implementation block
@property (retain) NSString * spouse;                                 //@synthesize spouse=_spouse - In the implementation block
@property (retain) NSString * suffix;                                 //@synthesize suffix=_suffix - In the implementation block
@property (retain) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (retain) NSString * webpage;                                //@synthesize webpage=_webpage - In the implementation block
@property (retain) NSString * yomiCompanyName;                        //@synthesize yomiCompanyName=_yomiCompanyName - In the implementation block
@property (retain) NSString * yomiFirstName;                          //@synthesize yomiFirstName=_yomiFirstName - In the implementation block
@property (retain) NSString * yomiLastName;                           //@synthesize yomiLastName=_yomiLastName - In the implementation block
@property (retain) NSString * customerID;                             //@synthesize customerID=_customerID - In the implementation block
@property (retain) NSString * governmentID;                           //@synthesize governmentID=_governmentID - In the implementation block
@property (retain) NSString * im1Address;                             //@synthesize im1Address=_im1Address - In the implementation block
@property (retain) NSString * im2Address;                             //@synthesize im2Address=_im2Address - In the implementation block
@property (retain) NSString * im3Address;                             //@synthesize im3Address=_im3Address - In the implementation block
@property (retain) NSString * managerName;                            //@synthesize managerName=_managerName - In the implementation block
@property (retain) NSString * companyMainPhone;                       //@synthesize companyMainPhone=_companyMainPhone - In the implementation block
@property (retain) NSString * accountName;                            //@synthesize accountName=_accountName - In the implementation block
@property (retain) NSString * nickName;                               //@synthesize nickName=_nickName - In the implementation block
@property (retain) NSString * mms;                                    //@synthesize mms=_mms - In the implementation block
+(bool)acceptsTopLevelLeaves;
+(bool)parsingLeafNode;
+(bool)parsingWithSubItems;
+(bool)frontingBasicTypes;
+(bool)notifyOfUnknownTokens;
+(id)asParseRules;
+(void)_setSystemTimeZoneForUnitTests:(id)arg1 ;
+(id)contactWithABRecord:(void*)arg1 serverID:(id)arg2 ;
-(id)pagerNumber;
-(id)jobTitle;
-(id)middleName;
-(id)birthday;
-(void)setMiddleName:(id)arg1 ;
-(void)setJobTitle:(id)arg1 ;
-(void)setBirthday:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)description;
-(id)title;
-(id)body;
-(id)categories;
-(void)setBody:(id)arg1 ;
-(void)setAccountName:(id)arg1 ;
-(id)accountName;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(void)setCategories:(id)arg1 ;
-(void)postProcessApplicationData;
-(void)appendActiveSyncDataForTask:(id)arg1 toWBXMLData:(id)arg2 ;
-(bool)saveWithLocalObject:(void*)arg1 toContainer:(void*)arg2 shouldMergeProperties:(bool)arg3 outMergeDidChooseLocalProperties:(bool*)arg4 account:(id)arg5 ;
-(void)setLocalItem:(void*)arg1 ;
-(bool)loadLocalItemWithAccount:(id)arg1 ;
-(bool)saveServerIDToExistingItem;
-(bool)deleteFromContainer:(void*)arg1 ;
-(int)dataclass;
-(void)loadClientIDs;
-(bool)bodyTruncated;
-(void)setBodyTruncated:(bool)arg1 ;
-(void)setPicture:(id)arg1 ;
-(id)_transformedDateForActiveSync:(id)arg1 ;
-(void)setAnniversary:(id)arg1 ;
-(void)setAssistantName:(id)arg1 ;
-(void)setManagerName:(id)arg1 ;
-(void)setSpouse:(id)arg1 ;
-(void)setHomeTelephoneNumber:(id)arg1 ;
-(void)setHome2TelephoneNumber:(id)arg1 ;
-(void)setBusinessTelephoneNumber:(id)arg1 ;
-(void)setBusiness2TelephoneNumber:(id)arg1 ;
-(void)setBusinessFaxNumber:(id)arg1 ;
-(void)setHomeFaxNumber:(id)arg1 ;
-(void)setMobileTelephoneNumber:(id)arg1 ;
-(void)setPagerNumber:(id)arg1 ;
-(void)setAssistantTelephoneNumber:(id)arg1 ;
-(void)setCarTelephoneNumber:(id)arg1 ;
-(void)setRadioTelephoneNumber:(id)arg1 ;
-(void)setCompanyMainPhone:(id)arg1 ;
-(void)setBusinessAddressCity:(id)arg1 ;
-(void)setBusinessAddressCountry:(id)arg1 ;
-(void)setBusinessAddressPostalCode:(id)arg1 ;
-(void)setBusinessAddressState:(id)arg1 ;
-(void)setBusinessAddressStreet:(id)arg1 ;
-(void)setHomeAddressCity:(id)arg1 ;
-(void)setHomeAddressCountry:(id)arg1 ;
-(void)setHomeAddressPostalCode:(id)arg1 ;
-(void)setHomeAddressState:(id)arg1 ;
-(void)setHomeAddressStreet:(id)arg1 ;
-(void)setOtherAddressCity:(id)arg1 ;
-(void)setOtherAddressCountry:(id)arg1 ;
-(void)setOtherAddressPostalCode:(id)arg1 ;
-(void)setOtherAddressState:(id)arg1 ;
-(void)setOtherAddressStreet:(id)arg1 ;
-(void)setEmail1Address:(id)arg1 ;
-(void)setEmail2Address:(id)arg1 ;
-(void)setEmail3Address:(id)arg1 ;
-(void)setWebpage:(id)arg1 ;
-(void)setIm1Address:(id)arg1 ;
-(void)setIm2Address:(id)arg1 ;
-(void)setIm3Address:(id)arg1 ;
-(void)setOfficeLocation:(id)arg1 ;
-(void)setYomiCompanyName:(id)arg1 ;
-(void)setCustomerID:(id)arg1 ;
-(void)setGovernmentID:(id)arg1 ;
-(void)setMms:(id)arg1 ;
-(void)setFileAs:(id)arg1 ;
-(void)setCompanyName:(id)arg1 ;
-(void)setDepartment:(id)arg1 ;
-(void)setNickName:(id)arg1 ;
-(void)setYomiFirstName:(id)arg1 ;
-(void)setYomiLastName:(id)arg1 ;
-(void)_setImageOnContactFromPerson:(void*)arg1 ;
-(bool)_setDatesWithExistingRecord:(void*)arg1 ;
-(bool)_setRelatedNamesWithExistingRecord:(void*)arg1 ;
-(bool)_setPhoneNumbersWithExistingRecord:(void*)arg1 ;
-(bool)_setStreetAddressesWithExistingRecord:(void*)arg1 ;
-(bool)_setEmailsWithExistingRecord:(void*)arg1 ;
-(bool)_setURLsWithExistingRecord:(void*)arg1 ;
-(bool)_setIMsWithExistingRecord:(void*)arg1 ;
-(bool)_setExternalRepWithExistingRecord:(void*)arg1 ;
-(void)_reconstructFileAsField;
-(void)_loadAttributesFromABRecord:(void*)arg1 ;
-(void)setABRecord:(void*)arg1 ;
-(id)initWithABRecord:(void*)arg1 serverID:(id)arg2 ;
-(id)anniversary;
-(id)_transformedDateForABFramework:(id)arg1 ;
-(id)assistantName;
-(id)managerName;
-(id)spouse;
-(id)businessTelephoneNumber;
-(id)business2TelephoneNumber;
-(id)businessFaxNumber;
-(id)homeTelephoneNumber;
-(id)home2TelephoneNumber;
-(id)homeFaxNumber;
-(id)mobileTelephoneNumber;
-(id)assistantTelephoneNumber;
-(id)carTelephoneNumber;
-(id)radioTelephoneNumber;
-(id)companyMainPhone;
-(id)businessAddressCity;
-(id)businessAddressCountry;
-(id)businessAddressPostalCode;
-(id)businessAddressState;
-(id)businessAddressStreet;
-(id)homeAddressCity;
-(id)homeAddressCountry;
-(id)homeAddressPostalCode;
-(id)homeAddressState;
-(id)homeAddressStreet;
-(id)otherAddressCity;
-(id)otherAddressCountry;
-(id)otherAddressPostalCode;
-(id)otherAddressState;
-(id)otherAddressStreet;
-(id)email1Address;
-(id)email2Address;
-(id)email3Address;
-(id)webpage;
-(id)im1Address;
-(id)im2Address;
-(id)im3Address;
-(id)companyName;
-(id)department;
-(id)fileAs;
-(id)nickName;
-(id)yomiFirstName;
-(id)yomiLastName;
-(id)picture;
-(bool)_saveDatesToAddressBookWithExistingRecord:(void*)arg1 shouldMergeProperties:(bool)arg2 ;
-(bool)_saveRelatedNamesToAddressBookWithExistingRecord:(void*)arg1 shouldMergeProperties:(bool)arg2 ;
-(bool)_savePhoneNumbersToAddressBookWithExistingRecord:(void*)arg1 shouldMergeProperties:(bool)arg2 ;
-(bool)_saveStreetAddressesToAddressBookWithExistingRecord:(void*)arg1 shouldMergeProperties:(bool)arg2 ;
-(bool)_saveEmailsToAddressBookWithExistingRecord:(void*)arg1 shouldMergeProperties:(bool)arg2 ;
-(bool)_saveURLsToAddressBookWithExistingRecord:(void*)arg1 shouldMergeProperties:(bool)arg2 ;
-(bool)_saveIMsToAddressBookWithExistingRecord:(void*)arg1 shouldMergeProperties:(bool)arg2 ;
-(bool)_saveExternalRepToAddressBookWithExistingRecord:(void*)arg1 shouldMergeProperties:(bool)arg2 storeExternalRep:(bool)arg3 ;
-(id)yomiCompanyName;
-(id)officeLocation;
-(id)customerID;
-(id)governmentID;
-(id)mms;
-(void)setBodySize:(int)arg1 ;
-(void)setEmailFromAppData:(int)arg1 setter:(SEL)arg2 ;
-(void)_detectFileAsAutoConstruction;
-(bool)saveToAddressBookWithExistingRecord:(void*)arg1 inSource:(void*)arg2 shouldMergeProperties:(bool)arg3 outMergeDidChooseLocalProperties:(bool*)arg4 storeExternalRep:(bool)arg5 ;
-(bool)loadABRecord;
-(bool)saveServerIDToContact;
-(bool)deleteFromAddressBook;
-(void)setBodySizeNumber:(id)arg1 ;
-(void)setBodyTruncatedNumber:(id)arg1 ;
-(void)setChildren:(id)arg1 ;
-(int)bodySize;
-(void)setSuffix:(id)arg1 ;
-(id)suffix;
-(id)firstName;
-(id)lastName;
-(void)setFirstName:(id)arg1 ;
-(void)setLastName:(id)arg1 ;
-(id)children;
@end

