/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:56 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SALocalSearchProtobufAttribute : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * value; 
+(id)protobufAttribute;
+(id)protobufAttributeWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setValue:(id)arg1 ;
-(void)setName:(id)arg1 ;
-(id)value;
-(id)name;
-(id)encodedClassName;
@end

