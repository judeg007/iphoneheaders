/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:51 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSArray;

@interface SASyncChunk : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * key; 
@property (nonatomic,copy) NSString * postGen; 
@property (nonatomic,copy) NSString * preGen; 
@property (nonatomic,copy) NSArray * toAdd; 
@property (nonatomic,copy) NSArray * toRemove; 
@property (nonatomic,copy) NSString * validity; 
@property (nonatomic,@dynamic,copy) NSString * aceId; 
@property (nonatomic,@dynamic,copy) NSString * refId; 
+(id)chunk;
+(id)chunkWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)key;
-(void)setKey:(id)arg1 ;
-(id)encodedClassName;
-(void)setValidity:(id)arg1 ;
-(id)postGen;
-(void)setPostGen:(id)arg1 ;
-(id)preGen;
-(void)setPreGen:(id)arg1 ;
-(id)toAdd;
-(void)setToAdd:(id)arg1 ;
-(id)toRemove;
-(void)setToRemove:(id)arg1 ;
-(id)validity;
@end

