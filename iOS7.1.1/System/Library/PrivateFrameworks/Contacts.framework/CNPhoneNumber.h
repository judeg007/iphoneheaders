/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface CNPhoneNumber : NSObject <NSCopying> {

	NSString* _stringValue;

}

@property (readonly) NSString * stringValue;                        //@synthesize stringValue=_stringValue - In the implementation block
@property (readonly) NSString * countryCode; 
@property (readonly) NSString * formattedStringValue; 
@property (readonly) NSString * normalizedStringValue; 
+(id)phoneNumberWithStringValue:(id)arg1 ;
-(id)normalizedStringValue;
-(id)formattedStringValue;
-(id)initWithStringValue:(id)arg1 ;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)stringValue;
-(id)countryCode;
@end

