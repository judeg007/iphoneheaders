/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:41 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKCacheNode : NSObject {

	VKCacheKey _key;
	id _value;
	VKCacheNode* _next;
	VKCacheNode* _previous;

}

@property (assign,nonatomic) VKCacheKey key;                      //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) id value;                            //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) VKCacheNode * next;                  //@synthesize next=_next - In the implementation block
@property (assign,nonatomic) VKCacheNode * previous;              //@synthesize previous=_previous - In the implementation block
-(void)dealloc;
-(void)setValue:(id)arg1 ;
-(id)value;
-(VKCacheKey)key;
-(id).cxx_construct;
-(void)setKey:(VKCacheKey)arg1 ;
-(id)next;
-(void)setNext:(id)arg1 ;
-(id)previous;
-(void)setPrevious:(id)arg1 ;
@end

