/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKObject.h>
#import <EventKit/EKIdentityProtocol.h>
#import <CoreFoundation/NSCopying.h>

@class EKCalendarItem, NSURL, NSString;

@interface EKParticipant : EKObject <EKIdentityProtocol, NSCopying> {

	EKCalendarItem* _owner;

}

@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) int participantStatus; 
@property (nonatomic,readonly) int participantRole; 
@property (nonatomic,readonly) int participantType; 
@property (nonatomic,readonly) bool isCurrentUser; 
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,copy) NSString * emailAddress; 
@property (nonatomic,copy) NSURL * address; 
@property (nonatomic,copy) NSString * firstName; 
@property (nonatomic,copy) NSString * lastName; 
@property (nonatomic,copy) NSString * comment; 
@property (nonatomic,readonly) EKCalendarItem * owner;              //@synthesize owner=_owner - In the implementation block
+(void*)findABPersonByURL:(id)arg1 inAddressBook:(void*)arg2 ;
-(id)displayNameWithDecomposedFirstName:(id*)arg1 lastName:(id*)arg2 department:(id*)arg3 ;
-(id)displayName;
-(void)setComment:(id)arg1 ;
-(int)participantStatus;
-(bool)isCurrentUser;
-(id)_persistentItem;
-(void)setAddress:(id)arg1 ;
-(int)participantType;
-(int)participantRole;
-(bool)isEqualToParticipant:(id)arg1 ;
-(void*)ABRecordWithAddressBook:(void*)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)UUID;
-(id)name;
-(id)URL;
-(void)setEmailAddress:(id)arg1 ;
-(id)emailAddress;
-(void)setDisplayName:(id)arg1 ;
-(id)owner;
-(id)address;
-(id)comment;
-(id)firstName;
-(id)lastName;
-(void)setFirstName:(id)arg1 ;
-(void)setLastName:(id)arg1 ;
@end

