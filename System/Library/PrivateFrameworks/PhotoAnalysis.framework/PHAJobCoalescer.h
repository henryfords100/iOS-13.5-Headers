/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PHAJobCoalescerDelegate;
@interface PHAJobCoalescer : NSObject {

	id<PHAJobCoalescerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PHAJobCoalescerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<PHAJobCoalescerDelegate>)delegate;
-(void)setDelegate:(id<PHAJobCoalescerDelegate>)arg1 ;
-(void)addJob:(id)arg1 ;
@end
