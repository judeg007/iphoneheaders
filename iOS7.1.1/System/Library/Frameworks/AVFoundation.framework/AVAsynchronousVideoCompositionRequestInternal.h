/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:36 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AVVideoCompositionInstruction;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, AVVideoCompositionRenderContext, NSDictionary, NSArray;

@interface AVAsynchronousVideoCompositionRequestInternal : NSObject {

	AVWeakReference* _session;
	AVVideoCompositionRenderContext* _renderContext;
	OpaqueFigVideoCompositorFrameRef _compositionFrame;
	SCD_Struct_CM4 _compositionTime;
	NSDictionary* _sourcesByTrackID;
	NSArray* _sourceTrackIDsInClientOrder;
	<AVVideoCompositionInstruction>* _instruction;
	bool _isFinished;

}

@property (nonatomic,retain) AVWeakReference * session;                                      //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) AVVideoCompositionRenderContext * renderContext;                //@synthesize renderContext=_renderContext - In the implementation block
@property (assign,nonatomic) OpaqueFigVideoCompositorFrameRef compositionFrame;              //@synthesize compositionFrame=_compositionFrame - In the implementation block
@property (assign,nonatomic) SCD_Struct_CM4 compositionTime;                                 //@synthesize compositionTime=_compositionTime - In the implementation block
@property (nonatomic,retain) NSDictionary * sourcesByTrackID;                                //@synthesize sourcesByTrackID=_sourcesByTrackID - In the implementation block
@property (nonatomic,retain) NSArray * sourceTrackIDsInClientOrder;                          //@synthesize sourceTrackIDsInClientOrder=_sourceTrackIDsInClientOrder - In the implementation block
@property (nonatomic,retain) <AVVideoCompositionInstruction> * instruction;                  //@synthesize instruction=_instruction - In the implementation block
@property (assign,nonatomic) bool isFinished;                                                //@synthesize isFinished=_isFinished - In the implementation block
-(id)session;
-(void)setSession:(id)arg1 ;
-(OpaqueFigVideoCompositorFrameRef)compositionFrame;
-(id)renderContext;
-(void)setRenderContext:(id)arg1 ;
-(void)setCompositionFrame:(OpaqueFigVideoCompositorFrameRef)arg1 ;
-(SCD_Struct_CM4)compositionTime;
-(void)setCompositionTime:(SCD_Struct_CM4)arg1 ;
-(id)sourcesByTrackID;
-(void)setSourcesByTrackID:(id)arg1 ;
-(id)instruction;
-(void)setInstruction:(id)arg1 ;
-(void)setIsFinished:(bool)arg1 ;
-(id)sourceTrackIDsInClientOrder;
-(void)setSourceTrackIDsInClientOrder:(id)arg1 ;
-(void)dealloc;
-(bool)isFinished;
@end

