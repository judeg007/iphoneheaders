/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActivityViewController.h>

@class NSString;

@interface OpenInOtherAppActivityViewController : UIActivityViewController {

	NSString* _filePath;

}

@property (nonatomic,retain) NSString * filePath;              //@synthesize filePath=_filePath - In the implementation block
+(id)_activityItemsForFilePath:(id)arg1 andUTI:(id)arg2 ;
+(id)_applicationsForDocumentProxy:(id)arg1 ;
-(id)initWithFilePath:(id)arg1 andUTI:(id)arg2 ;
-(void)dealloc;
-(void)_prepareActivity:(id)arg1 ;
-(void)setFilePath:(id)arg1 ;
-(id)filePath;
@end

