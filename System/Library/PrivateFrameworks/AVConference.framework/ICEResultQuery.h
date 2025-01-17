/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface ICEResultQuery : NSObject {

	unsigned callID;
	tagCONNRESULT* result;
	BOOL isQueryAnswered;

}

@property (assign) tagCONNRESULT* result; 
@property (assign) unsigned callID; 
@property (assign) BOOL isQueryAnswered; 
-(void)dealloc;
-(tagCONNRESULT*)result;
-(void)setResult:(tagCONNRESULT*)arg1 ;
-(id)initWithResult:(tagCONNRESULT*)arg1 ;
-(void)setCallID:(unsigned)arg1 ;
-(unsigned)callID;
-(id)initWithCallID:(unsigned)arg1 ;
-(BOOL)isQueryAnswered;
-(void)setIsQueryAnswered:(BOOL)arg1 ;
@end

