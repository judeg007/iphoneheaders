/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:28 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/ptpd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ptpd/ptpd-Structs.h>
#import <ptpd/Container.h>

@class PTPObjectInfoDataset;

@interface Folder : Container {

	PTPObjectInfoDataset* _objectInfoDataset;

}
-(id)objectInfoDataset;
-(void)addContent;
-(id)initWithName:(id)arg1 serialNumber:(unsigned long long)arg2 captureTimeSpec:(timespec*)arg3 size:(long long)arg4 parent:(id)arg5 parentID:(unsigned long)arg6 ;
-(id)initWithName:(id)arg1 path:(id)arg2 captureTimeSpec:(timespec*)arg3 parent:(id)arg4 parentID:(unsigned long)arg5 ;
-(void)dealloc;
@end

