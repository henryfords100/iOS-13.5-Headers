/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 8:05:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /usr/lib/libIOAccessoryManager.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ResourceArbiterClientDelegate;
@interface BaseResourceArbiterClient : NSObject {

	id<ResourceArbiterClientDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ResourceArbiterClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<ResourceArbiterClientDelegate>)delegate;
-(void)setDelegate:(id<ResourceArbiterClientDelegate>)arg1 ;
-(void)releaseResourceAccess;
-(BOOL)synchRequestResourceAccess;
-(BOOL)asynchRequestResourceAccess:(BOOL)arg1 ;
@end
