/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSUReadChannel.h>
#import <iWorkImport/TSUStreamReadChannel.h>

@protocol TSUReadChannel;
@interface TSUReadChannelToStreamReadChannelAdapter : NSObject <TSUReadChannel, TSUStreamReadChannel> {

	<TSUReadChannel>* _readChannel;

}
-(void)setLowWater:(unsigned long long)arg1 ;
-(void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 queue:(id)arg3 handler:(/*^block*/ id)arg4 ;
-(void)readWithQueue:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)addBarrier:(/*^block*/ id)arg1 ;
-(id)initWithReadChannel:(id)arg1 ;
-(void)close;
-(void).cxx_destruct;
@end

