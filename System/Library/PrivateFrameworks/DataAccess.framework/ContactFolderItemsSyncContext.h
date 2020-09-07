/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNChangeHistoryAnchor;

@interface ContactFolderItemsSyncContext : NSObject {

	int _abPersonChangeId;
	int _abGroupChangeId;
	CNChangeHistoryAnchor* _cnChangeAnchor;

}

@property (assign,nonatomic) int abPersonChangeId;                                //@synthesize abPersonChangeId=_abPersonChangeId - In the implementation block
@property (assign,nonatomic) int abGroupChangeId;                                 //@synthesize abGroupChangeId=_abGroupChangeId - In the implementation block
@property (nonatomic,retain) CNChangeHistoryAnchor * cnChangeAnchor;              //@synthesize cnChangeAnchor=_cnChangeAnchor - In the implementation block
-(int)abPersonChangeId;
-(void)setAbPersonChangeId:(int)arg1 ;
-(int)abGroupChangeId;
-(void)setAbGroupChangeId:(int)arg1 ;
-(CNChangeHistoryAnchor *)cnChangeAnchor;
-(void)setCnChangeAnchor:(CNChangeHistoryAnchor *)arg1 ;
@end
