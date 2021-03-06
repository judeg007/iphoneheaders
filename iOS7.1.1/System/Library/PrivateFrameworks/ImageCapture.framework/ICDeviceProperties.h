/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:37 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageCapture/ImageCapture-Structs.h>
@class DeviceManager, NSString;

@interface ICDeviceProperties : NSObject {

	id _delegate;
	DeviceManager* _deviceManager;
	NSString* _name;
	CGImageRef _icon;
	NSString* _productKind;
	NSString* _transportType;
	NSString* _UUIDString;
	int _usbLocationID;
	int _usbProductID;
	int _usbVendorID;
	bool _hasOpenSession;
	bool _autoOpenSession;
	bool _openSessionPending;
	bool _closeSessionPending;

}

@property (assign) id delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign) DeviceManager * deviceManager;              //@synthesize deviceManager=_deviceManager - In the implementation block
@property (retain) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (@dynamic) CGImageRef icon; 
@property (retain) NSString * productKind;                     //@synthesize productKind=_productKind - In the implementation block
@property (retain) NSString * transportType;                   //@synthesize transportType=_transportType - In the implementation block
@property (retain) NSString * UUIDString;                      //@synthesize UUIDString=_UUIDString - In the implementation block
@property (assign) int usbLocationID;                          //@synthesize usbLocationID=_usbLocationID - In the implementation block
@property (assign) int usbProductID;                           //@synthesize usbProductID=_usbProductID - In the implementation block
@property (assign) int usbVendorID;                            //@synthesize usbVendorID=_usbVendorID - In the implementation block
@property (assign) bool hasOpenSession;                        //@synthesize hasOpenSession=_hasOpenSession - In the implementation block
@property (assign) bool autoOpenSession;                       //@synthesize autoOpenSession=_autoOpenSession - In the implementation block
@property (assign) bool openSessionPending;                    //@synthesize openSessionPending=_openSessionPending - In the implementation block
@property (assign) bool closeSessionPending;                   //@synthesize closeSessionPending=_closeSessionPending - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)setIcon:(CGImageRef)arg1 ;
-(void)setTransportType:(id)arg1 ;
-(void)setProductKind:(id)arg1 ;
-(void)setUUIDString:(id)arg1 ;
-(id)deviceManager;
-(void)setDeviceManager:(id)arg1 ;
-(int)usbLocationID;
-(void)setUsbLocationID:(int)arg1 ;
-(int)usbProductID;
-(void)setUsbProductID:(int)arg1 ;
-(int)usbVendorID;
-(void)setUsbVendorID:(int)arg1 ;
-(bool)hasOpenSession;
-(void)setHasOpenSession:(bool)arg1 ;
-(bool)autoOpenSession;
-(void)setAutoOpenSession:(bool)arg1 ;
-(bool)openSessionPending;
-(void)setOpenSessionPending:(bool)arg1 ;
-(bool)closeSessionPending;
-(void)setCloseSessionPending:(bool)arg1 ;
-(id)productKind;
-(id)UUIDString;
-(CGImageRef)icon;
-(id)transportType;
-(void)finalize;
@end

